#include <iostream>
#include "TBOMatrix.cpp"

int main() {

    TBOMatrix a(4, 5);
    TBOMatrix b(4, 3);
    TBOMatrix c(3, 3);
    c = c.identity(5);

    c.set(0,0,0);

    c.set(0,1,1);
    c.set(1,0,4);
    c.set(1,1,5);

    c.set(1,2,6);
    c.set(2,0,8);
    c.set(2,1,2);
    c.set(2,2,10);
    c.set(0,2,2);


    c.set(0,3,3);
    c.set(1,3,7);
    c.set(2,3,11);
    c.set(3,0,12);
    c.set(3,1,4);
    c.set(3,2,2);
    c.set(3,3,15);

    c.set(0,4,5);
    c.set(1,4,3);
    c.set(2,4,6);
    c.set(3,4,7);
    c.set(4,0,2);
    c.set(4,1,3);
    c.set(4,2,4);
    c.set(4,3,5);
    c.set(4,4,7);

    c.print();

    std::cout << std::endl << c.det(c);


    TBOMatrix d = c.inverse(c);
    d.print();

    TBOMatrix e = e.multiply(c,d);
    e.print();

}
