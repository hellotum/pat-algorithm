# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2018.1.6\CLion\CLion 2018.1.6\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2018.1.6\CLion\CLion 2018.1.6\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\ClionProject\PAT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\ClionProject\PAT\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PAT.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PAT.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PAT.dir/flags.make

CMakeFiles/PAT.dir/a1032.cpp.obj: CMakeFiles/PAT.dir/flags.make
CMakeFiles/PAT.dir/a1032.cpp.obj: ../a1032.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\ClionProject\PAT\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PAT.dir/a1032.cpp.obj"
	D:\MinGW_w64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PAT.dir\a1032.cpp.obj -c D:\ClionProject\PAT\a1032.cpp

CMakeFiles/PAT.dir/a1032.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PAT.dir/a1032.cpp.i"
	D:\MinGW_w64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\ClionProject\PAT\a1032.cpp > CMakeFiles\PAT.dir\a1032.cpp.i

CMakeFiles/PAT.dir/a1032.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PAT.dir/a1032.cpp.s"
	D:\MinGW_w64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\ClionProject\PAT\a1032.cpp -o CMakeFiles\PAT.dir\a1032.cpp.s

CMakeFiles/PAT.dir/a1032.cpp.obj.requires:

.PHONY : CMakeFiles/PAT.dir/a1032.cpp.obj.requires

CMakeFiles/PAT.dir/a1032.cpp.obj.provides: CMakeFiles/PAT.dir/a1032.cpp.obj.requires
	$(MAKE) -f CMakeFiles\PAT.dir\build.make CMakeFiles/PAT.dir/a1032.cpp.obj.provides.build
.PHONY : CMakeFiles/PAT.dir/a1032.cpp.obj.provides

CMakeFiles/PAT.dir/a1032.cpp.obj.provides.build: CMakeFiles/PAT.dir/a1032.cpp.obj


# Object files for target PAT
PAT_OBJECTS = \
"CMakeFiles/PAT.dir/a1032.cpp.obj"

# External object files for target PAT
PAT_EXTERNAL_OBJECTS =

PAT.exe: CMakeFiles/PAT.dir/a1032.cpp.obj
PAT.exe: CMakeFiles/PAT.dir/build.make
PAT.exe: CMakeFiles/PAT.dir/linklibs.rsp
PAT.exe: CMakeFiles/PAT.dir/objects1.rsp
PAT.exe: CMakeFiles/PAT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\ClionProject\PAT\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PAT.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PAT.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PAT.dir/build: PAT.exe

.PHONY : CMakeFiles/PAT.dir/build

CMakeFiles/PAT.dir/requires: CMakeFiles/PAT.dir/a1032.cpp.obj.requires

.PHONY : CMakeFiles/PAT.dir/requires

CMakeFiles/PAT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PAT.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PAT.dir/clean

CMakeFiles/PAT.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\ClionProject\PAT D:\ClionProject\PAT D:\ClionProject\PAT\cmake-build-debug D:\ClionProject\PAT\cmake-build-debug D:\ClionProject\PAT\cmake-build-debug\CMakeFiles\PAT.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PAT.dir/depend

