# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /Users/god/Git/interview/leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/god/Git/interview/leetcode/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/028.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/028.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/028.dir/flags.make

CMakeFiles/028.dir/online/028.cpp.o: CMakeFiles/028.dir/flags.make
CMakeFiles/028.dir/online/028.cpp.o: ../online/028.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/god/Git/interview/leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/028.dir/online/028.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/028.dir/online/028.cpp.o -c /Users/god/Git/interview/leetcode/online/028.cpp

CMakeFiles/028.dir/online/028.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/028.dir/online/028.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/god/Git/interview/leetcode/online/028.cpp > CMakeFiles/028.dir/online/028.cpp.i

CMakeFiles/028.dir/online/028.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/028.dir/online/028.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/god/Git/interview/leetcode/online/028.cpp -o CMakeFiles/028.dir/online/028.cpp.s

CMakeFiles/028.dir/online/028.cpp.o.requires:

.PHONY : CMakeFiles/028.dir/online/028.cpp.o.requires

CMakeFiles/028.dir/online/028.cpp.o.provides: CMakeFiles/028.dir/online/028.cpp.o.requires
	$(MAKE) -f CMakeFiles/028.dir/build.make CMakeFiles/028.dir/online/028.cpp.o.provides.build
.PHONY : CMakeFiles/028.dir/online/028.cpp.o.provides

CMakeFiles/028.dir/online/028.cpp.o.provides.build: CMakeFiles/028.dir/online/028.cpp.o


# Object files for target 028
028_OBJECTS = \
"CMakeFiles/028.dir/online/028.cpp.o"

# External object files for target 028
028_EXTERNAL_OBJECTS =

028: CMakeFiles/028.dir/online/028.cpp.o
028: CMakeFiles/028.dir/build.make
028: CMakeFiles/028.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/god/Git/interview/leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 028"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/028.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/028.dir/build: 028

.PHONY : CMakeFiles/028.dir/build

CMakeFiles/028.dir/requires: CMakeFiles/028.dir/online/028.cpp.o.requires

.PHONY : CMakeFiles/028.dir/requires

CMakeFiles/028.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/028.dir/cmake_clean.cmake
.PHONY : CMakeFiles/028.dir/clean

CMakeFiles/028.dir/depend:
	cd /Users/god/Git/interview/leetcode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/god/Git/interview/leetcode /Users/god/Git/interview/leetcode /Users/god/Git/interview/leetcode/cmake-build-debug /Users/god/Git/interview/leetcode/cmake-build-debug /Users/god/Git/interview/leetcode/cmake-build-debug/CMakeFiles/028.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/028.dir/depend

