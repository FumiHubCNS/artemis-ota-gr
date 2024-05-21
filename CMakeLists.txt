cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(artemis-ota-gr)

# ROOT 6 installation
list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS})

# Default installation dir
set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/install/ CACHE PATH "install dir" FORCE)

# Build options
option(BUILD_PARQUET "option to build with parquet outputs (requires Apache Arrow libraries)" ON)
message(${BUILD_PARQUET})

# Option to build with GETDecoder
option(USE_GETDECODER "option to build with GETDecoder" OFF)

# set path of arrow and parquet
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} /usr/local/lib/cmake/arrow)

# path definitions
find_package(artemis HINTS ${TARTSYS} REQUIRED)

if(USE_GETDECODER)
    #---Locate the GETDecoder library if the option is ON
    find_package(GETDecoder REQUIRED)
    if(NOT ${GETDecoder_FOUND})
        message(SEND_ERROR "GETDecoder not found. Please install GETDecoder or set USE_GETDECODER to OFF.")
    endif()
endif()

#---Locate the ROOT package and defines a number of variables (e.g. ROOT_INCLUDE_DIRS)
find_package(ROOT REQUIRED COMPONENTS RIO Net Physics Minuit Minuit2 Geom Gui Genetic)
find_package(yaml-cpp REQUIRED HINTS ${ARTEMIS_YAML_CPP_LIB_DIR}/../)

if(BUILD_PARQUET)
    find_package(Arrow REQUIRED)
    find_package(Parquet REQUIRED HINTS /usr/local/lib/cmake/arrow)
endif()

#-fPIC
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

#---Define useful ROOT functions and macros (e.g. ROOT_GENERATE_DICTIONARY)
include(${ROOT_USE_FILE})

if(USE_GETDECODER)
    link_directories(${ARTEMIS_GET_LIB_DIR})
endif()

add_subdirectory(src-test)

configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/thisartemis-training.sh.in"
    "${CMAKE_SOURCE_DIR}/thisartemis-training.sh"
    @ONLY
)

configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/artemislogon.C.in"
    "${CMAKE_SOURCE_DIR}/artemislogon.C"
    @ONLY
)
