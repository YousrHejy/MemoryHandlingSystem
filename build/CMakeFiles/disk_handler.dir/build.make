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
CMAKE_SOURCE_DIR = /home/yousr/c++projects/MemoryHandlingSystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yousr/c++projects/MemoryHandlingSystem/build

# Include any dependencies generated for this target.
include CMakeFiles/disk_handler.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/disk_handler.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/disk_handler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/disk_handler.dir/flags.make

CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.o: CMakeFiles/disk_handler.dir/flags.make
CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.o: ../memory_handler_test/main.cpp
CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.o: CMakeFiles/disk_handler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yousr/c++projects/MemoryHandlingSystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.o -MF CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.o.d -o CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.o -c /home/yousr/c++projects/MemoryHandlingSystem/memory_handler_test/main.cpp

CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yousr/c++projects/MemoryHandlingSystem/memory_handler_test/main.cpp > CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.i

CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yousr/c++projects/MemoryHandlingSystem/memory_handler_test/main.cpp -o CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.s

# Object files for target disk_handler
disk_handler_OBJECTS = \
"CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.o"

# External object files for target disk_handler
disk_handler_EXTERNAL_OBJECTS =

disk_handler: CMakeFiles/disk_handler.dir/memory_handler_test/main.cpp.o
disk_handler: CMakeFiles/disk_handler.dir/build.make
disk_handler: memory_handler_lib/libmemory_handler_lib.a
disk_handler: CMakeFiles/disk_handler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yousr/c++projects/MemoryHandlingSystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable disk_handler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/disk_handler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/disk_handler.dir/build: disk_handler
.PHONY : CMakeFiles/disk_handler.dir/build

CMakeFiles/disk_handler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/disk_handler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/disk_handler.dir/clean

CMakeFiles/disk_handler.dir/depend:
	cd /home/yousr/c++projects/MemoryHandlingSystem/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yousr/c++projects/MemoryHandlingSystem /home/yousr/c++projects/MemoryHandlingSystem /home/yousr/c++projects/MemoryHandlingSystem/build /home/yousr/c++projects/MemoryHandlingSystem/build /home/yousr/c++projects/MemoryHandlingSystem/build/CMakeFiles/disk_handler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/disk_handler.dir/depend
