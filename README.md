# TrafficFlowChallenge
    
## Setup

### Install CMake (2.8 or higher)
Running ```brew install cmake``` on Mac OSX or following the ```CMake``` instruction to install for other platforms: https://cmake.org/install/.
### Install Google Test
On Mac OSX, use the command ```brew install googletest``` to install. For other platforms, it can be built from a source code by following these steps:
```
git clone https://github.com/google/googletest
cd googletest
mkdir build
cd build
cmake -DCMAKE_CXX_FLAGS=-std=c++17 ..

cp -a ../googletest/include/* /usr/local/include
cp -a ../googlemock/include/* /usr/local/include
find . -name "*.a" -exec cp -a {} /usr/local/lib \;
```
DONE.

## Compile Project
The application is compiled by C++17 with two parts: main ```TrafficFlowManager``` application and ```ControllerTests``` for UnitTest.
```
git clone git@github.com:Torresnceuit/TrafficFlowChallenge.git
cd TrafficFlowChallenge
mkdir build
cmake ..
make
```

### Run ControllerTests (TO DO)
```
cd build/ControllerTests/tests
./CommanderTests
```

### Run Executable Commander
In build folder, execute the application
```./TrafficFlowManager```
Enjoy!!!




