cmake_minimum_required(VERSION 3.22)
project(MementoMasters)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
FetchContent_MakeAvailable(googletest)


include_directories(.)

add_executable(MementoMasters
        Citizen.cpp
        Citizen.h CitizenMood/CitizenMood.cpp CitizenMood/CitizenMood.h CitizenMood/ExcellentMood.cpp CitizenMood/ExcellentMood.h CitizenMood/AverageMood.cpp CitizenMood/AverageMood.h CitizenMood/PoorMood.cpp CitizenMood/PoorMood.h)

add_executable(MementoMasters_tests
        Citizen.cpp
        Citizen.h CitizenMood/CitizenMood.cpp CitizenMood/CitizenMood.h CitizenMood/ExcellentMood.cpp CitizenMood/ExcellentMood.h CitizenMood/AverageMood.cpp CitizenMood/AverageMood.h CitizenMood/PoorMood.cpp CitizenMood/PoorMood.h tests/ExcellentMoodStateUnitTest.cpp)


target_link_libraries(MementoMasters_tests gtest gtest_main)