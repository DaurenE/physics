# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dauren/physics

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dauren/physics/build

# Include any dependencies generated for this target.
include CMakeFiles/my_tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/my_tests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/my_tests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_tests.dir/flags.make

CMakeFiles/my_tests.dir/tests/test_file.cpp.o: CMakeFiles/my_tests.dir/flags.make
CMakeFiles/my_tests.dir/tests/test_file.cpp.o: ../tests/test_file.cpp
CMakeFiles/my_tests.dir/tests/test_file.cpp.o: CMakeFiles/my_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dauren/physics/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/my_tests.dir/tests/test_file.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/my_tests.dir/tests/test_file.cpp.o -MF CMakeFiles/my_tests.dir/tests/test_file.cpp.o.d -o CMakeFiles/my_tests.dir/tests/test_file.cpp.o -c /home/dauren/physics/tests/test_file.cpp

CMakeFiles/my_tests.dir/tests/test_file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_tests.dir/tests/test_file.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dauren/physics/tests/test_file.cpp > CMakeFiles/my_tests.dir/tests/test_file.cpp.i

CMakeFiles/my_tests.dir/tests/test_file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_tests.dir/tests/test_file.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dauren/physics/tests/test_file.cpp -o CMakeFiles/my_tests.dir/tests/test_file.cpp.s

# Object files for target my_tests
my_tests_OBJECTS = \
"CMakeFiles/my_tests.dir/tests/test_file.cpp.o"

# External object files for target my_tests
my_tests_EXTERNAL_OBJECTS =

my_tests: CMakeFiles/my_tests.dir/tests/test_file.cpp.o
my_tests: CMakeFiles/my_tests.dir/build.make
my_tests: /usr/lib/x86_64-linux-gnu/libgtest.a
my_tests: /usr/lib/x86_64-linux-gnu/libgtest_main.a
my_tests: /usr/lib/x86_64-linux-gnu/libgtest.a
my_tests: CMakeFiles/my_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dauren/physics/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable my_tests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_tests.dir/build: my_tests
.PHONY : CMakeFiles/my_tests.dir/build

CMakeFiles/my_tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_tests.dir/clean

CMakeFiles/my_tests.dir/depend:
	cd /home/dauren/physics/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dauren/physics /home/dauren/physics /home/dauren/physics/build /home/dauren/physics/build /home/dauren/physics/build/CMakeFiles/my_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_tests.dir/depend

