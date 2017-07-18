#----------------------------------------------------------------------------
# Setup the project
cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

project(basicProject)

find_package(Geant4 REQUIRED)
find_package(Geant4 REQUIRED)
include(${Geant4_USE_FILE})


#----------------------------------------------------------------------------
# Add the executable, and link it to the Geant4 libraries
#
add_executable(basicApplication basicApplication.cc ${sources} ${headers})
target_link_libraries(basicApplication ${Geant4_LIBRARIES})

add_custom_target(basicProject DEPENDS basicApplication)

#----------------------------------------------------------------------------
# Install the executable to 'bin' directory under CMAKE_INSTALL_PREFIX
#
install(TARGETS basicApplication DESTINATION bin)
