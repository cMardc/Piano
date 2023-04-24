# CMakeList.txt : CMake project for Piano, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Piano "Piano.cpp" "Piano.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Piano PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
