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
CMAKE_SOURCE_DIR = /Users/will/Documents/Programming/CS205Blokus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/will/Documents/Programming/CS205Blokus/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/main.cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.cpp.dir/flags.make

CMakeFiles/main.cpp.dir/Board.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/Board.cpp.o: ../Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/will/Documents/Programming/CS205Blokus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.cpp.dir/Board.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/Board.cpp.o -c /Users/will/Documents/Programming/CS205Blokus/Board.cpp

CMakeFiles/main.cpp.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/Board.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/will/Documents/Programming/CS205Blokus/Board.cpp > CMakeFiles/main.cpp.dir/Board.cpp.i

CMakeFiles/main.cpp.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/Board.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/will/Documents/Programming/CS205Blokus/Board.cpp -o CMakeFiles/main.cpp.dir/Board.cpp.s

CMakeFiles/main.cpp.dir/Board.cpp.o.requires:

.PHONY : CMakeFiles/main.cpp.dir/Board.cpp.o.requires

CMakeFiles/main.cpp.dir/Board.cpp.o.provides: CMakeFiles/main.cpp.dir/Board.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.cpp.dir/build.make CMakeFiles/main.cpp.dir/Board.cpp.o.provides.build
.PHONY : CMakeFiles/main.cpp.dir/Board.cpp.o.provides

CMakeFiles/main.cpp.dir/Board.cpp.o.provides.build: CMakeFiles/main.cpp.dir/Board.cpp.o


CMakeFiles/main.cpp.dir/Piece.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/Piece.cpp.o: ../Piece.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/will/Documents/Programming/CS205Blokus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.cpp.dir/Piece.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/Piece.cpp.o -c /Users/will/Documents/Programming/CS205Blokus/Piece.cpp

CMakeFiles/main.cpp.dir/Piece.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/Piece.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/will/Documents/Programming/CS205Blokus/Piece.cpp > CMakeFiles/main.cpp.dir/Piece.cpp.i

CMakeFiles/main.cpp.dir/Piece.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/Piece.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/will/Documents/Programming/CS205Blokus/Piece.cpp -o CMakeFiles/main.cpp.dir/Piece.cpp.s

CMakeFiles/main.cpp.dir/Piece.cpp.o.requires:

.PHONY : CMakeFiles/main.cpp.dir/Piece.cpp.o.requires

CMakeFiles/main.cpp.dir/Piece.cpp.o.provides: CMakeFiles/main.cpp.dir/Piece.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.cpp.dir/build.make CMakeFiles/main.cpp.dir/Piece.cpp.o.provides.build
.PHONY : CMakeFiles/main.cpp.dir/Piece.cpp.o.provides

CMakeFiles/main.cpp.dir/Piece.cpp.o.provides.build: CMakeFiles/main.cpp.dir/Piece.cpp.o


CMakeFiles/main.cpp.dir/Player.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/will/Documents/Programming/CS205Blokus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.cpp.dir/Player.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/Player.cpp.o -c /Users/will/Documents/Programming/CS205Blokus/Player.cpp

CMakeFiles/main.cpp.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/Player.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/will/Documents/Programming/CS205Blokus/Player.cpp > CMakeFiles/main.cpp.dir/Player.cpp.i

CMakeFiles/main.cpp.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/Player.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/will/Documents/Programming/CS205Blokus/Player.cpp -o CMakeFiles/main.cpp.dir/Player.cpp.s

CMakeFiles/main.cpp.dir/Player.cpp.o.requires:

.PHONY : CMakeFiles/main.cpp.dir/Player.cpp.o.requires

CMakeFiles/main.cpp.dir/Player.cpp.o.provides: CMakeFiles/main.cpp.dir/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.cpp.dir/build.make CMakeFiles/main.cpp.dir/Player.cpp.o.provides.build
.PHONY : CMakeFiles/main.cpp.dir/Player.cpp.o.provides

CMakeFiles/main.cpp.dir/Player.cpp.o.provides.build: CMakeFiles/main.cpp.dir/Player.cpp.o


CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o: ../graphics_blockus_starter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/will/Documents/Programming/CS205Blokus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o -c /Users/will/Documents/Programming/CS205Blokus/graphics_blockus_starter.cpp

CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/will/Documents/Programming/CS205Blokus/graphics_blockus_starter.cpp > CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.i

CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/will/Documents/Programming/CS205Blokus/graphics_blockus_starter.cpp -o CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.s

CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o.requires:

.PHONY : CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o.requires

CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o.provides: CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.cpp.dir/build.make CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o.provides.build
.PHONY : CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o.provides

CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o.provides.build: CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o


# Object files for target main.cpp
main_cpp_OBJECTS = \
"CMakeFiles/main.cpp.dir/Board.cpp.o" \
"CMakeFiles/main.cpp.dir/Piece.cpp.o" \
"CMakeFiles/main.cpp.dir/Player.cpp.o" \
"CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o"

# External object files for target main.cpp
main_cpp_EXTERNAL_OBJECTS =

main.cpp: CMakeFiles/main.cpp.dir/Board.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/Piece.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/Player.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/build.make
main.cpp: CMakeFiles/main.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/will/Documents/Programming/CS205Blokus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable main.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.cpp.dir/build: main.cpp

.PHONY : CMakeFiles/main.cpp.dir/build

CMakeFiles/main.cpp.dir/requires: CMakeFiles/main.cpp.dir/Board.cpp.o.requires
CMakeFiles/main.cpp.dir/requires: CMakeFiles/main.cpp.dir/Piece.cpp.o.requires
CMakeFiles/main.cpp.dir/requires: CMakeFiles/main.cpp.dir/Player.cpp.o.requires
CMakeFiles/main.cpp.dir/requires: CMakeFiles/main.cpp.dir/graphics_blockus_starter.cpp.o.requires

.PHONY : CMakeFiles/main.cpp.dir/requires

CMakeFiles/main.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.cpp.dir/clean

CMakeFiles/main.cpp.dir/depend:
	cd /Users/will/Documents/Programming/CS205Blokus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/will/Documents/Programming/CS205Blokus /Users/will/Documents/Programming/CS205Blokus /Users/will/Documents/Programming/CS205Blokus/cmake-build-debug /Users/will/Documents/Programming/CS205Blokus/cmake-build-debug /Users/will/Documents/Programming/CS205Blokus/cmake-build-debug/CMakeFiles/main.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.cpp.dir/depend
