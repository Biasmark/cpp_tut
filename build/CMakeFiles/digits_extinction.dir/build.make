# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hojin/cpp_tut

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hojin/cpp_tut/build

# Include any dependencies generated for this target.
include CMakeFiles/digits_extinction.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/digits_extinction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/digits_extinction.dir/flags.make

CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o: CMakeFiles/digits_extinction.dir/flags.make
CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o: ../src/digits_extinction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hojin/cpp_tut/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o -c /home/hojin/cpp_tut/src/digits_extinction.cpp

CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hojin/cpp_tut/src/digits_extinction.cpp > CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.i

CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hojin/cpp_tut/src/digits_extinction.cpp -o CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.s

CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o.requires:

.PHONY : CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o.requires

CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o.provides: CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o.requires
	$(MAKE) -f CMakeFiles/digits_extinction.dir/build.make CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o.provides.build
.PHONY : CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o.provides

CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o.provides.build: CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o


# Object files for target digits_extinction
digits_extinction_OBJECTS = \
"CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o"

# External object files for target digits_extinction
digits_extinction_EXTERNAL_OBJECTS =

../bin/digits_extinction: CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o
../bin/digits_extinction: CMakeFiles/digits_extinction.dir/build.make
../bin/digits_extinction: CMakeFiles/digits_extinction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hojin/cpp_tut/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/digits_extinction"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/digits_extinction.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/digits_extinction.dir/build: ../bin/digits_extinction

.PHONY : CMakeFiles/digits_extinction.dir/build

CMakeFiles/digits_extinction.dir/requires: CMakeFiles/digits_extinction.dir/src/digits_extinction.cpp.o.requires

.PHONY : CMakeFiles/digits_extinction.dir/requires

CMakeFiles/digits_extinction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/digits_extinction.dir/cmake_clean.cmake
.PHONY : CMakeFiles/digits_extinction.dir/clean

CMakeFiles/digits_extinction.dir/depend:
	cd /home/hojin/cpp_tut/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hojin/cpp_tut /home/hojin/cpp_tut /home/hojin/cpp_tut/build /home/hojin/cpp_tut/build /home/hojin/cpp_tut/build/CMakeFiles/digits_extinction.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/digits_extinction.dir/depend

