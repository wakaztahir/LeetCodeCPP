# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Software\Installed\Jetbrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Software\Installed\Jetbrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\wakaztahir\CLionProjects\InterviewPrep

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\wakaztahir\CLionProjects\InterviewPrep\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\InterviewPrep.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\InterviewPrep.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\InterviewPrep.dir\flags.make

CMakeFiles\InterviewPrep.dir\main.cpp.obj: CMakeFiles\InterviewPrep.dir\flags.make
CMakeFiles\InterviewPrep.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\wakaztahir\CLionProjects\InterviewPrep\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/InterviewPrep.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\InterviewPrep.dir\main.cpp.obj /FdCMakeFiles\InterviewPrep.dir\ /FS -c C:\Users\wakaztahir\CLionProjects\InterviewPrep\main.cpp
<<

CMakeFiles\InterviewPrep.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/InterviewPrep.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe > CMakeFiles\InterviewPrep.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\wakaztahir\CLionProjects\InterviewPrep\main.cpp
<<

CMakeFiles\InterviewPrep.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/InterviewPrep.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\InterviewPrep.dir\main.cpp.s /c C:\Users\wakaztahir\CLionProjects\InterviewPrep\main.cpp
<<

CMakeFiles\InterviewPrep.dir\test.cpp.obj: CMakeFiles\InterviewPrep.dir\flags.make
CMakeFiles\InterviewPrep.dir\test.cpp.obj: ..\test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\wakaztahir\CLionProjects\InterviewPrep\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/InterviewPrep.dir/test.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\InterviewPrep.dir\test.cpp.obj /FdCMakeFiles\InterviewPrep.dir\ /FS -c C:\Users\wakaztahir\CLionProjects\InterviewPrep\test.cpp
<<

CMakeFiles\InterviewPrep.dir\test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/InterviewPrep.dir/test.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe > CMakeFiles\InterviewPrep.dir\test.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\wakaztahir\CLionProjects\InterviewPrep\test.cpp
<<

CMakeFiles\InterviewPrep.dir\test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/InterviewPrep.dir/test.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\InterviewPrep.dir\test.cpp.s /c C:\Users\wakaztahir\CLionProjects\InterviewPrep\test.cpp
<<

CMakeFiles\InterviewPrep.dir\1-twosum\twosum.cpp.obj: CMakeFiles\InterviewPrep.dir\flags.make
CMakeFiles\InterviewPrep.dir\1-twosum\twosum.cpp.obj: ..\1-twosum\twosum.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\wakaztahir\CLionProjects\InterviewPrep\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/InterviewPrep.dir/1-twosum/twosum.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\InterviewPrep.dir\1-twosum\twosum.cpp.obj /FdCMakeFiles\InterviewPrep.dir\ /FS -c C:\Users\wakaztahir\CLionProjects\InterviewPrep\1-twosum\twosum.cpp
<<

CMakeFiles\InterviewPrep.dir\1-twosum\twosum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/InterviewPrep.dir/1-twosum/twosum.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe > CMakeFiles\InterviewPrep.dir\1-twosum\twosum.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\wakaztahir\CLionProjects\InterviewPrep\1-twosum\twosum.cpp
<<

CMakeFiles\InterviewPrep.dir\1-twosum\twosum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/InterviewPrep.dir/1-twosum/twosum.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\InterviewPrep.dir\1-twosum\twosum.cpp.s /c C:\Users\wakaztahir\CLionProjects\InterviewPrep\1-twosum\twosum.cpp
<<

CMakeFiles\InterviewPrep.dir\2-container-water\container-water.cpp.obj: CMakeFiles\InterviewPrep.dir\flags.make
CMakeFiles\InterviewPrep.dir\2-container-water\container-water.cpp.obj: ..\2-container-water\container-water.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\wakaztahir\CLionProjects\InterviewPrep\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/InterviewPrep.dir/2-container-water/container-water.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\InterviewPrep.dir\2-container-water\container-water.cpp.obj /FdCMakeFiles\InterviewPrep.dir\ /FS -c C:\Users\wakaztahir\CLionProjects\InterviewPrep\2-container-water\container-water.cpp
<<

CMakeFiles\InterviewPrep.dir\2-container-water\container-water.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/InterviewPrep.dir/2-container-water/container-water.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe > CMakeFiles\InterviewPrep.dir\2-container-water\container-water.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\wakaztahir\CLionProjects\InterviewPrep\2-container-water\container-water.cpp
<<

CMakeFiles\InterviewPrep.dir\2-container-water\container-water.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/InterviewPrep.dir/2-container-water/container-water.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\InterviewPrep.dir\2-container-water\container-water.cpp.s /c C:\Users\wakaztahir\CLionProjects\InterviewPrep\2-container-water\container-water.cpp
<<

CMakeFiles\InterviewPrep.dir\3-rainwater\rainwater.cpp.obj: CMakeFiles\InterviewPrep.dir\flags.make
CMakeFiles\InterviewPrep.dir\3-rainwater\rainwater.cpp.obj: ..\3-rainwater\rainwater.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\wakaztahir\CLionProjects\InterviewPrep\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/InterviewPrep.dir/3-rainwater/rainwater.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\InterviewPrep.dir\3-rainwater\rainwater.cpp.obj /FdCMakeFiles\InterviewPrep.dir\ /FS -c C:\Users\wakaztahir\CLionProjects\InterviewPrep\3-rainwater\rainwater.cpp
<<

CMakeFiles\InterviewPrep.dir\3-rainwater\rainwater.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/InterviewPrep.dir/3-rainwater/rainwater.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe > CMakeFiles\InterviewPrep.dir\3-rainwater\rainwater.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\wakaztahir\CLionProjects\InterviewPrep\3-rainwater\rainwater.cpp
<<

CMakeFiles\InterviewPrep.dir\3-rainwater\rainwater.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/InterviewPrep.dir/3-rainwater/rainwater.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\InterviewPrep.dir\3-rainwater\rainwater.cpp.s /c C:\Users\wakaztahir\CLionProjects\InterviewPrep\3-rainwater\rainwater.cpp
<<

# Object files for target InterviewPrep
InterviewPrep_OBJECTS = \
"CMakeFiles\InterviewPrep.dir\main.cpp.obj" \
"CMakeFiles\InterviewPrep.dir\test.cpp.obj" \
"CMakeFiles\InterviewPrep.dir\1-twosum\twosum.cpp.obj" \
"CMakeFiles\InterviewPrep.dir\2-container-water\container-water.cpp.obj" \
"CMakeFiles\InterviewPrep.dir\3-rainwater\rainwater.cpp.obj"

# External object files for target InterviewPrep
InterviewPrep_EXTERNAL_OBJECTS =

InterviewPrep.exe: CMakeFiles\InterviewPrep.dir\main.cpp.obj
InterviewPrep.exe: CMakeFiles\InterviewPrep.dir\test.cpp.obj
InterviewPrep.exe: CMakeFiles\InterviewPrep.dir\1-twosum\twosum.cpp.obj
InterviewPrep.exe: CMakeFiles\InterviewPrep.dir\2-container-water\container-water.cpp.obj
InterviewPrep.exe: CMakeFiles\InterviewPrep.dir\3-rainwater\rainwater.cpp.obj
InterviewPrep.exe: CMakeFiles\InterviewPrep.dir\build.make
InterviewPrep.exe: CMakeFiles\InterviewPrep.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\wakaztahir\CLionProjects\InterviewPrep\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable InterviewPrep.exe"
	"D:\Software\Installed\Jetbrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\InterviewPrep.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x64\mt.exe --manifests -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\InterviewPrep.dir\objects1.rsp @<<
 /out:InterviewPrep.exe /implib:InterviewPrep.lib /pdb:C:\Users\wakaztahir\CLionProjects\InterviewPrep\cmake-build-debug\InterviewPrep.pdb /version:0.0 /machine:x64 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\InterviewPrep.dir\build: InterviewPrep.exe

.PHONY : CMakeFiles\InterviewPrep.dir\build

CMakeFiles\InterviewPrep.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\InterviewPrep.dir\cmake_clean.cmake
.PHONY : CMakeFiles\InterviewPrep.dir\clean

CMakeFiles\InterviewPrep.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\wakaztahir\CLionProjects\InterviewPrep C:\Users\wakaztahir\CLionProjects\InterviewPrep C:\Users\wakaztahir\CLionProjects\InterviewPrep\cmake-build-debug C:\Users\wakaztahir\CLionProjects\InterviewPrep\cmake-build-debug C:\Users\wakaztahir\CLionProjects\InterviewPrep\cmake-build-debug\CMakeFiles\InterviewPrep.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\InterviewPrep.dir\depend

