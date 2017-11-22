//
// Created by visualcamp on 2017. 11. 17..
//

#include "TBOMatrix.h"
//
// Created by visualcamp on 2017. 11. 16..
//
#include <iostream>
#include <limits>
#include <stdexcept>
#include "TBOMatrix.h"
#include <math.h>

class TBOMatrix {
    //행렬계산을 위한 1디 어레이 생성. but 계산은 투디 라이크하게
private:
    int M;
    int N;
    double *arr;

public:


    //creator
    TBOMatrix (){
        this->M = 1;
        this->N = 1;
        arr = new double [1];

        arr[0] = 0;
    }

    TBOMatrix(int M, int N){
        this->M = M;
        this->N = N;
        arr  = new double [ M * N ];

        for (int i = 0; i < M; i++){
            for (int j =0; j<N; j++){
                arr[i*N+j] = 0;
            }
        }
    }

    TBOMatrix(const TBOMatrix &ss){
        this->M = ss.M;
        this->N = ss.N;
        this->arr = new double [M*N];

        for (int i =0; i<M ; i++){
            for (int j=0; j<N; j++){
                arr[i*N+j] = ss.arr[i*N+j];
            }
        }
    }

    TBOMatrix (int m, int n, double **arra) {
        // 이중 배열 형태의 행렬을 TBO 매트리스 형태로 치환하여 받는다.(arr의 M,N값을 미리 숙지하고 넣어야 한다.)
        this->M = m;
        this->N = n;
        arr = new double [M*N];

        for (int i =0; i<M ; i++){
            for (int j=0; j<N; j++){
                arr[i*N+j] = arra[i][j];
            }
        }

    }

    TBOMatrix (int m, double *arra) {
        // 1d array 를 1 d  TBO matrice로
        this->M = m;
        this->N = 1;
        arr = new double [M*N];

        for (int i =0; i<M ; i++){
            for (int j=0; j<N; j++){
                arr[i*N+j] = arra[i*N+j];
            }
        }
    }

    TBOMatrix (int m, int n, double *arra) {
        //1d array 를  2 d TBOmatrix 로
        this->M = m;
        this->N = n;
        arr = new double [M*N];

        for (int i =0; i<M ; i++){
            for (int j=0; j<N; j++){
                arr[i*N+j] = arra[i*N+j];
            }
        }
    }

    void print(){
        std::cout<<std::endl<<std::endl;
        std::cout<<"M : " << M << "   N : " << N <<std::endl<<std::endl;
        for (int i = 0; i< M; i++){
            for (int j = 0; j < N; j++){
                std::cout<< arr[i*N +j] <<"\t\t";
            }
            std::cout << std::endl;
        }

    }
    //identity matrix
    TBOMatrix identity(int N) {
        TBOMatrix I = TBOMatrix(N,N);

        for(int i=0; i < N; i++){
            I.arr[i*N +i] = 1;
        }
        return I;
    }

    void swap(int i, int j){
        double temp[N];
        for (int k=0; k < N; k++){temp[k] = arr[i*N +k];}
        for (int k=0; k < N; k++){
            arr[i*N+k] = arr[j*N+k];
            arr[j*N+k] = temp[k];
        }
    }
    double get(int row, int col){
       if (row<M && col < N){
        return arr[row*N+col];
        }
        else{
            throw std::invalid_argument("inputted number is too large!!");
        }
    }

    void set(int row, int col, double val){
        if (row<M && col < N){
            arr[row*N+col] = val;
        }
        else{
            throw std::invalid_argument("inputted number is too large!!");
        }

    }

    TBOMatrix transpose() {

        TBOMatrix AT(N, M);


        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                AT.arr[j * M + i] = arr[i * N + j];
            }
        }


        return AT;
    }

    void dtranspose(){
        int tem = M;
        double *temp = new double [M*N];
        M = N;
        N = tem;
        for (int i = 0; i < M*N; i ++){
            temp[i] = arr[i];
        }
        for (int i = 0; i < M; i ++){
            for (int j =0; j < N; j++){
                arr[N*i + j] = temp[M*j+i];
            }
        }



        delete [] temp ;

    }


    TBOMatrix plus(TBOMatrix B) {
        if (B.M != this->M || B.N != this->N) throw std::invalid_argument("Not same dimension!!");
        TBOMatrix C(B.M,B.N);
        for (int i =0; i<M ; i++){
            for (int j=0; j<N; j++){
                C.arr[i*N+j] = B.arr[i*N+j]+arr[i*N+j];
            }
        }
        return C;
    }

    void dplus(TBOMatrix B) {
        if (B.M != this->M || B.N != this->N) throw std::invalid_argument("Not same dimension!!");
        for (int i =0; i<M ; i++) {
            for (int j = 0; j < N; j++) {
                arr[i * N + j] = B.arr[i * N + j] + arr[i * N + j];
            }
        }
    }

    TBOMatrix minus (TBOMatrix B) {
        if (B.M != this->M || B.N != this->N) throw std::invalid_argument("Not same dimension!!");
        TBOMatrix C(B.M,B.N);
        for (int i =0; i<M ; i++){
            for (int j=0; j<N; j++){
                C.arr[i*N+j] = arr[i*N+j] - B.arr[i*N+j];
            }
        }
        return C;
    }

    void dminus(TBOMatrix B) {
        if (B.M != this->M || B.N != this->N) throw std::invalid_argument("Not same dimension!!");
        for (int i =0; i<M ; i++) {
            for (int j = 0; j < N; j++) {
                arr[i * N + j] = arr[i * N + j] -  B.arr[i * N + j];
            }
        }
    }


    bool same (TBOMatrix B) {

        if (B.M != M || B.N != N) throw std::invalid_argument("Not same dimension!!");
        TBOMatrix C(B.M,B.N);
        for (int i =0; i<M ; i++){
            for (int j=0; j<N; j++){
                if( arr[i*N+j] != B.arr[i*N+j]) return false;
            }
        }
        return true;
    }


    //return C = A * B;
    TBOMatrix multiply (TBOMatrix a, TBOMatrix b){
        if (a.N != b.M) throw std::invalid_argument (" can`t multiply!! Dimension error");
        TBOMatrix c = b;
        c.dtranspose();

        TBOMatrix fin(a.M,c.M);
        for (int i = 0; i <a.M; i++){
            for(int j = 0; j < c.M; j ++){
                double sum =0;
                for (int k = 0; k < a.N ; k ++){
                    sum += a.arr[a.N*i+k] *c.arr[c.N*j+k];
                }
                fin.set(i,j,sum);
            }
        }
        return fin;
    }

    TBOMatrix lowonedim (int s, TBOMatrix k){
        if (k.N != k.M ) throw std::invalid_argument ("it`s not square matrix!!");
    }



    bool havezerobingo(TBOMatrix k){
        if (k.N != k.M ) throw std::invalid_argument ("it`s not square matrix!!");
        int bynarytest[k.N][k.N];
        for(int i = 0; i < k.M ; i++){
            for(int j=0; j<k.N ; j++){
                if (k.arr[i*k.M +j] * k.arr[i*k.M +j]  < 0.00000000001) bynarytest[i][j]= 1;
                else bynarytest[i][j] = 0;
                }
            }

        for(int i = 0; i < k.M; i++){
            int testerR = 1;
            int testerC = 1;
            for(int j = 0; j<k.N; j ++){
                testerR *= bynarytest[i][j];
                testerC *= bynarytest[j][i];
            }
            if (testerR ==1 or testerC ==1) return true;
        }

        return false;
    }


    double det_2 (TBOMatrix a){
        if (a.N != a.M or a.M !=2) throw std::invalid_argument ("it`s not 2 by 2 square matrix!!");
        return a.arr[0] * a.arr[3] - a.arr[1]*a.arr[2];
    }




    double det (TBOMatrix a){
        if (a.N != a.M ) throw std::invalid_argument ("it`s not square matrix!!");
        double sum;

        if (a.M == 2){
            sum = a.det_2(a);
        }


        if (a.M >= 3) {

            TBOMatrix minorarr[a.M];
            sum=0;
            for (int si = 0; si < a.M; si++) {

                minorarr[si] = minorarr->identity(a.M - 1);
                int counter = 0;

                for (int i = 1; i < a.M; i++) {
                    for (int j = 0; j < a.N; j++) {
                        if (j != si) {
                            minorarr[si].arr[counter] = a.arr[i * a.M + j];
                            counter++;
                        }
                    }
                }

//                minorarr[si].print();
//                std::cout << a.det(minorarr[si])<<std::endl;
                TBOMatrix s;
                sum += s.det( minorarr[si]) * pow(-1,si+2) * a.arr[si];

            }
        }

        return sum;
    }

    TBOMatrix cofactor (TBOMatrix a){
        if (a.N != a.M ) throw std::invalid_argument ("it`s not square matrix!!");
        TBOMatrix k = a.identity(a.N);

        TBOMatrix minorarr[a.M][a.N];

        for (int si=0; si< a.N; si++){
            for(int sj=0; sj<a.N; sj++){

                minorarr[si][sj] = minorarr[si][sj].identity(a.N-1);

                int counter = 0;

                for (int i=0; i< a.M; i++){
                    for (int j=0; j< a.N; j++) {
                        if(i != si and j!= sj) {
                            minorarr[si][sj].arr[counter] = a.arr[i * a.M + j];
                            counter++;
                        }
                    }
                }

//                std::cout <<std::endl <<std::endl << si*a.M+sj<<std::endl;
//                minorarr[si][sj].print();
                k.arr[si*a.M + sj] = det(minorarr[si][sj]) * pow(-1,si+sj);
            }
        }
        return k;
    }

    TBOMatrix inverse(TBOMatrix a){
        TBOMatrix k = k.cofactor(a);
        double det = 0;
        for(int i =0; i< k.N ; i++){
            det += a.arr[i] * k.arr[i];
        }
        k = k.transpose();
        k = k.ScalarProduct(k,1/det);

        return k;

    }

    TBOMatrix ScalarProduct(TBOMatrix a,double s){
        TBOMatrix k = a;
        for (int i =0; i< a.M; i++){
            for (int j=0; j<a.N; j++){
                k.arr[a.M*i +j ] = s*k.arr[a.M*i+j];
            }
        }
        return k;
    }



//    // 정방 행렬에 대한 가우시안 엘리미네이션 수행.
//    void gaussian (TBOMatrix aa){
//        double *c = double [aa.N];
//        double *index = double [aa.N];
//
//        for (int i=0; i < aa.N; i++) {index[i]=i;}
//
//        for (int i=0; i< aa.N, i++){
//            double c1 = 0;
//            for (int j=0; j < aa.N; j++){
//                double c0 = abs(double aa.get(i*N + j));
//                if (c0 > c1) c1 = c0;
//            }
//            c[i] = c1;
//        }
//
//
//
//
//    }




};