# CMakeList.txt : CMake project for Preflop_Quiz, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Preflop_Quiz "Preflop_Quiz.cpp" "Preflop_Quiz.h"  "Source.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Preflop_Quiz PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
