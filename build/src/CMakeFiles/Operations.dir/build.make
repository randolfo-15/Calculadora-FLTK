# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_SOURCE_DIR = /home/randolfo/Documentos/FLTK/Calculadora-FLTK

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/randolfo/Documentos/FLTK/Calculadora-FLTK/build

# Include any dependencies generated for this target.
include src/CMakeFiles/Operations.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/Operations.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Operations.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Operations.dir/flags.make

src/CMakeFiles/Operations.dir/codegen:
.PHONY : src/CMakeFiles/Operations.dir/codegen

src/CMakeFiles/Operations.dir/math.cpp.o: src/CMakeFiles/Operations.dir/flags.make
src/CMakeFiles/Operations.dir/math.cpp.o: /home/randolfo/Documentos/FLTK/Calculadora-FLTK/src/math.cpp
src/CMakeFiles/Operations.dir/math.cpp.o: src/CMakeFiles/Operations.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/randolfo/Documentos/FLTK/Calculadora-FLTK/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Operations.dir/math.cpp.o"
	cd /home/randolfo/Documentos/FLTK/Calculadora-FLTK/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/Operations.dir/math.cpp.o -MF CMakeFiles/Operations.dir/math.cpp.o.d -o CMakeFiles/Operations.dir/math.cpp.o -c /home/randolfo/Documentos/FLTK/Calculadora-FLTK/src/math.cpp

src/CMakeFiles/Operations.dir/math.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Operations.dir/math.cpp.i"
	cd /home/randolfo/Documentos/FLTK/Calculadora-FLTK/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/randolfo/Documentos/FLTK/Calculadora-FLTK/src/math.cpp > CMakeFiles/Operations.dir/math.cpp.i

src/CMakeFiles/Operations.dir/math.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Operations.dir/math.cpp.s"
	cd /home/randolfo/Documentos/FLTK/Calculadora-FLTK/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/randolfo/Documentos/FLTK/Calculadora-FLTK/src/math.cpp -o CMakeFiles/Operations.dir/math.cpp.s

Operations: src/CMakeFiles/Operations.dir/math.cpp.o
Operations: src/CMakeFiles/Operations.dir/build.make
.PHONY : Operations

# Rule to build all files generated by this target.
src/CMakeFiles/Operations.dir/build: Operations
.PHONY : src/CMakeFiles/Operations.dir/build

src/CMakeFiles/Operations.dir/clean:
	cd /home/randolfo/Documentos/FLTK/Calculadora-FLTK/build/src && $(CMAKE_COMMAND) -P CMakeFiles/Operations.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Operations.dir/clean

src/CMakeFiles/Operations.dir/depend:
	cd /home/randolfo/Documentos/FLTK/Calculadora-FLTK/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/randolfo/Documentos/FLTK/Calculadora-FLTK /home/randolfo/Documentos/FLTK/Calculadora-FLTK/src /home/randolfo/Documentos/FLTK/Calculadora-FLTK/build /home/randolfo/Documentos/FLTK/Calculadora-FLTK/build/src /home/randolfo/Documentos/FLTK/Calculadora-FLTK/build/src/CMakeFiles/Operations.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/Operations.dir/depend

