# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/myth/Documentos/c++/LightYear

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/myth/Documentos/c++/LightYear/build

# Include any dependencies generated for this target.
include CMakeFiles/LightYearsGame.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LightYearsGame.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LightYearsGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LightYearsGame.dir/flags.make

CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.o: CMakeFiles/LightYearsGame.dir/flags.make
CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.o: /home/myth/Documentos/c++/LightYear/Game/src/main.cpp
CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.o: CMakeFiles/LightYearsGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/myth/Documentos/c++/LightYear/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.o -MF CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.o.d -o CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.o -c /home/myth/Documentos/c++/LightYear/Game/src/main.cpp

CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/myth/Documentos/c++/LightYear/Game/src/main.cpp > CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.i

CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/myth/Documentos/c++/LightYear/Game/src/main.cpp -o CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.s

# Object files for target LightYearsGame
LightYearsGame_OBJECTS = \
"CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.o"

# External object files for target LightYearsGame
LightYearsGame_EXTERNAL_OBJECTS =

LightYearsGame: CMakeFiles/LightYearsGame.dir/Game/src/main.cpp.o
LightYearsGame: CMakeFiles/LightYearsGame.dir/build.make
LightYearsGame: CMakeFiles/LightYearsGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/myth/Documentos/c++/LightYear/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LightYearsGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LightYearsGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LightYearsGame.dir/build: LightYearsGame
.PHONY : CMakeFiles/LightYearsGame.dir/build

CMakeFiles/LightYearsGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LightYearsGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LightYearsGame.dir/clean

CMakeFiles/LightYearsGame.dir/depend:
	cd /home/myth/Documentos/c++/LightYear/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/myth/Documentos/c++/LightYear /home/myth/Documentos/c++/LightYear /home/myth/Documentos/c++/LightYear/build /home/myth/Documentos/c++/LightYear/build /home/myth/Documentos/c++/LightYear/build/CMakeFiles/LightYearsGame.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/LightYearsGame.dir/depend
