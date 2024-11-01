cmake_minimum_required(VERSION 3.16.3)
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
        main.cpp
        Citizen.cpp
        Citizen.h
        City.cpp
        City.h
        CitizenMood/CitizenMood.cpp
        CitizenMood/CitizenMood.h
        CitizenMood/ExcellentMood.cpp
        CitizenMood/ExcellentMood.h
        CitizenMood/AverageMood.cpp
        CitizenMood/AverageMood.h
        CitizenMood/PoorMood.cpp
        CitizenMood/PoorMood.h
        Complaints/ComplaintHandler.cpp
        Complaints/ComplaintHandler.h
        Complaints/ComplaintRouter.cpp
        Complaints/ComplaintRouter.h
        Complaints/TransportDepartment.cpp
        Complaints/TransportDepartment.h
        Complaints/UtilitiesDepartment.cpp
        Complaints/UtilitiesDepartment.h
        Tax/TaxDepartment.cpp
        Tax/TaxDepartment.h
        Tax/TaxSystem.cpp
        Tax/TaxSystem.h
        Observer/CityObserver.cpp
        Observer/CityObserver.h
        Observer/CitizenObserver.cpp
        Observer/CitizenObserver.h)

add_executable(MementoMasters_tests
        Citizen.cpp
        Citizen.h
        City.cpp 
        City.h
        CitizenMood/CitizenMood.cpp
        CitizenMood/CitizenMood.h
        CitizenMood/ExcellentMood.cpp
        CitizenMood/ExcellentMood.h
        CitizenMood/AverageMood.cpp
        CitizenMood/AverageMood.h
        CitizenMood/PoorMood.cpp
        CitizenMood/PoorMood.h
        Complaints/ComplaintHandler.cpp
        Complaints/ComplaintHandler.h
        Complaints/ComplaintRouter.cpp
        Complaints/ComplaintRouter.h
        Complaints/TransportDepartment.cpp
        Complaints/TransportDepartment.h
        Complaints/UtilitiesDepartment.cpp
        Complaints/UtilitiesDepartment.h
        Tax/TaxDepartment.cpp
        Tax/TaxDepartment.h
        Tax/TaxSystem.cpp
        Tax/TaxSystem.h
        Observer/CityObserver.cpp
        Observer/CityObserver.h
        Observer/CitizenObserver.cpp
        Observer/CitizenObserver.h
        tests/ExcellentMoodStateUnitTest.cpp
        tests/TaxSystemUnitTest.cpp
        tests/ComplaintsHandlerUnitTest.cpp
        tests/ObserverUnitTest.cpp)

target_link_libraries(MementoMasters_tests gtest gtest_main)