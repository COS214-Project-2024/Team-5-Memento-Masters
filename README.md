# MementoMasters

Welcome to the MementoMasters project! This project is designed to simulate various city departments and their interactions. The project is structured using CMake for building and GoogleTest for unit testing.

## Project Structure

```
.github/
    workflows/
        ...
.gitignore
build/
    _deps/
    bin/
    cmake_install.cmake
    CMakeCache.txt
    CMakeFiles/
    lib/
    Makefile
    MementoMasters
    MementoMasters_tests


Citizen.cpp




Citizen.h


CitizenMood/
    AverageMood.cpp
    AverageMood.h
    CitizenMood.cpp
    CitizenMood.h
    ExcellentMood.cpp
    ExcellentMood.h
    PoorMood.cpp
    PoorMood.h


CMakeLists.txt


Complaints/
    ComplaintHandler.cpp
    ComplaintHandler.h
    ComplaintRouter.cpp
    ComplaintRouter.h
    Mayor.cpp
    Mayor.h
    ...


main.cpp




README.md


Tax/
    ...
tests/
    ...
```

## Building the Project

To build the project, you need to have CMake and a C++ compiler installed on your system. Follow these steps:

1. **Clone the repository**

    ```sh
    git clone https://github.com/COS214-Project-2024/MementoMasters.git
    cd MementoMasters
    ```

2. **Create a build directory and navigate into it - please do this otherwise the build files will splay everywhere...**

    ```sh
    mkdir build
    cd build
    ```

3. **Run CMake to configure the project**

    ```sh
    cmake ..
    ```

4. **Build the project**

    ```sh
    make
    ```

This will generate the `MementoMasters` executable in the `build` directory as well as the `MemenentoMasters_tests`

## Running the Project

To run the project, execute the `MementoMasters` binary or `MementoMasters_tests`

```sh
./MementoMasters
./MementoMasters_tests
```

This will run the main application or testing main, the main production is currently just printing a welcome message.

### Excerpt from `main.cpp`

```cpp
#include <iostream>

// THIS IS BASICALLY OUR PRODUCTION MAIN...
// ...AND WE'RE GOING TO USE IT TO TEST OUR CODE
// ...AND MAKE SURE IT WORKS AS EXPECTED

// THIS IS WHERE WE ARE HAPPY WITH OUR CODE AND TESTING WE CAN ADD IT TO OUR PRODUCTION CODE

int main() {
    std::cout << "Welcome to the City of Michael's Communist Rule!" << std::endl;

    // Initialize your components here
    //
    //
    //

    // Add your production code here once you are happy with the testing
    //
    //
    //

    return 0;
}
```

## Adding Your Own Code

To add your own code, follow these steps

1. **Create new source and header files**

    Add your new `.cpp` and `.h` files in the appropriate directories (`CitizenMood`, `Complaints`, `Tax`, etc.).

2. **Update `CMakeLists.txt`**

    Add your new files to the `add_executable` section in the `CMakeLists.txt` file:

    ```cmake
    add_executable(MementoMasters
        main.cpp
        Citizen.cpp
        Citizen.h
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
        # Add your new files here
        directory/YourNewFile.cpp
        directory/YourNewFile.h
    )
    ```

3. **Rebuild the project**

    ```sh
    cd build
    make
    ```

##Actions
1.Lint-Error checking, and finding grammar issues or unused code.
2.Doxygen- creating the doxygen webiste - [doxygen](https://memento-masters.pages.dev/)
