# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/visualcamp/CLionProjects/Matrice_calculation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/visualcamp/CLionProjects/Matrice_calculation/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Matrice_calculation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Matrice_calculation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Matrice_calculation.dir/flags.make

CMakeFiles/Matrice_calculation.dir/main.cpp.o: CMakeFiles/Matrice_calculation.dir/flags.make
CMakeFiles/Matrice_calculation.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/visualcamp/CLionProjects/Matrice_calculation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Matrice_calculation.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Matrice_calculation.dir/main.cpp.o -c /Users/visualcamp/CLionProjects/Matrice_calculation/main.cpp

CMakeFiles/Matrice_calculation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Matrice_calculation.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/visualcamp/CLionProjects/Matrice_calculation/main.cpp > CMakeFiles/Matrice_calculation.dir/main.cpp.i

CMakeFiles/Matrice_calculation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Matrice_calculation.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/visualcamp/CLionProjects/Matrice_calculation/main.cpp -o CMakeFiles/Matrice_calculation.dir/main.cpp.s

CMakeFiles/Matrice_calculation.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Matrice_calculation.dir/main.cpp.o.requires

CMakeFiles/Matrice_calculation.dir/main.cpp.o.provides: CMakeFiles/Matrice_calculation.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Matrice_calculation.dir/build.make CMakeFiles/Matrice_calculation.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Matrice_calculation.dir/main.cpp.o.provides

CMakeFiles/Matrice_calculation.dir/main.cpp.o.provides.build: CMakeFiles/Matrice_calculation.dir/main.cpp.o


CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o: CMakeFiles/Matrice_calculation.dir/flags.make
CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o: ../TBOMatrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/visualcamp/CLionProjects/Matrice_calculation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o -c /Users/visualcamp/CLionProjects/Matrice_calculation/TBOMatrix.cpp

CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/visualcamp/CLionProjects/Matrice_calculation/TBOMatrix.cpp > CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.i

CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/visualcamp/CLionProjects/Matrice_calculation/TBOMatrix.cpp -o CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.s

CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o.requires:

.PHONY : CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o.requires

CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o.provides: CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o.requires
	$(MAKE) -f CMakeFiles/Matrice_calculation.dir/build.make CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o.provides.build
.PHONY : CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o.provides

CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o.provides.build: CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o


# Object files for target Matrice_calculation
Matrice_calculation_OBJECTS = \
"CMakeFiles/Matrice_calculation.dir/main.cpp.o" \
"CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o"

# External object files for target Matrice_calculation
Matrice_calculation_EXTERNAL_OBJECTS =

Matrice_calculation: CMakeFiles/Matrice_calculation.dir/main.cpp.o
Matrice_calculation: CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o
Matrice_calculation: CMakeFiles/Matrice_calculation.dir/build.make
Matrice_calculation: CMakeFiles/Matrice_calculation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/visualcamp/CLionProjects/Matrice_calculation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Matrice_calculation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Matrice_calculation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Matrice_calculation.dir/build: Matrice_calculation

.PHONY : CMakeFiles/Matrice_calculation.dir/build

CMakeFiles/Matrice_calculation.dir/requires: CMakeFiles/Matrice_calculation.dir/main.cpp.o.requires
CMakeFiles/Matrice_calculation.dir/requires: CMakeFiles/Matrice_calculation.dir/TBOMatrix.cpp.o.requires

.PHONY : CMakeFiles/Matrice_calculation.dir/requires

CMakeFiles/Matrice_calculation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Matrice_calculation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Matrice_calculation.dir/clean

CMakeFiles/Matrice_calculation.dir/depend:
	cd /Users/visualcamp/CLionProjects/Matrice_calculation/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/visualcamp/CLionProjects/Matrice_calculation /Users/visualcamp/CLionProjects/Matrice_calculation /Users/visualcamp/CLionProjects/Matrice_calculation/cmake-build-debug /Users/visualcamp/CLionProjects/Matrice_calculation/cmake-build-debug /Users/visualcamp/CLionProjects/Matrice_calculation/cmake-build-debug/CMakeFiles/Matrice_calculation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Matrice_calculation.dir/depend

