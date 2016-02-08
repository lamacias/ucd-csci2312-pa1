## CSCI 2312: Programming Assignment 1

_working with objects_

* * *

C++ lets us program with _objects_. We describe objects in C++ by declaring and defining _classes_. We _declare_ our class's structure in a header file, just like in C, and _define_ it (that is, write the code that actually does the work) in a corresponding source code file.

Here is a sample header file <tt>Point.h</tt> that describes an object that represents a point in three-dimensional Euclidean space:

```c++
// A 3-dimensional point class!
// Coordinates are double-precision floating point.
class Point {

private:
    double x;
    double y;
    double z;

public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y);    // two-argument constructor
    Point(double x, double y, double z);   //three-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;

};
```

We can _instantiate_, or create an instance of, our class anywhere in the rest of our code by calling any of the constructors we have defined:

```
Point myPoint;            // Calls Point::Point(). Notice the lack of parentheses!
Point myOtherPoint(5, 3); // Calls two-argument constructor Point::Point(double, double). Notice auto type conversion!
```

The <tt>Point</tt> class represents points in three dimensions (each point has an x, y, and z value).

The <tt>distanceTo</tt> member function accepts two <tt>Point</tt> class objects and returns the distance between the two points.

The <tt>area.cpp</tt> contains a function, <tt>computeArea</tt>, that computes the area of the triangle created by three <tt>Point</tt> objects.

To compile the program:
    If you comfortable with the command line, compile these sources together like so:

   ```
   g++ -Wall main.cpp area.cpp Point.cpp PointTests.cpp ErrorContext.cpp -o ucd-csci2312-pa1
   ```

   Note:
   *   <tt>g++</tt> is the GNU C++ compiler.
   *   <tt>-Wall</tt> means "output ALL warnings." (If you see any warnings, be sure to fix them.)
   *   Next comes the list of source files. (You don't list header files here. They are included by the source files.) <tt>main.ccp</tt> is the program driver file. <tt>Point.cpp</tt> is your implementation of the 3D Point. <tt>area.cpp</tt> is your implementation of the computeArea function. <tt>PointTests.cpp</tt> contains the implementation of the test suite. <tt>ErrorContext.cpp</tt> implements a class holding testing information and used in the test suite.
   *   <tt>-o</tt> specifies the output file. In this case, we are making a program called <tt>ucd-csci2312-pa1</tt>.

   If you are using CLion, you can just go to Run-->Build. The project already supplies a CMakeLists.txt file, which is read by the cross-platform build tool [CMake](https://cmake.org/). CLion uses CMake to create a makefile for your architecture. Here is a short [tutorial](http://mrbook.org/blog/tutorials/make/) on makefile and the C++ build process. CMake uses the directives in the CMakeLists.txt and works with the specific build tool for your platform to create the makefile. The file looks like this

   ```
cmake_minimum_required(VERSION 3.3)
project(ucd_csci2312_pa1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp
        area.cpp
        Point.cpp
        Point.h
        PointTests.h
        PointTests.cpp
        ErrorContext.cpp
        ErrorContext.h)

add_executable(ucd_csci2312_pa1 ${SOURCE_FILES})
```

   For this project, all you need to do to run your Point code on CLion is to list all your *.cpp files as shown. Listing the headers as well doesn't hurt.


To run the generated program:

   ```
./ucd_csci2312_pa1
```

   In CLion, you first have to build (Run-->Build) and then run (Run-->Run 'ucd_csci2312_pa1') your project. Any output will appear in the built-in console.


    This program is based on a test suite. Test-driven development (TDD) means that you write your test code before you write the actual code it has to test. The test suite is written in such a way that earlier tests are more basic and later tests require earlier tests to be running.
    
   *   The test suite is in <tt>PointTests.h</tt> and <tt>PointTests.cpp</tt>. <tt>main.cpp</tt> runs the tests.
   
   Note: If you see that CMake is complaining that it can't find some of its files (e.g. <tt>area.cpp</tt>), you should create them. To add them to your git _local_ repository, you need to execute the command
   ```
   git add area.cpp
   ```
   or, alternatively, in CLion, right-click on the new file, scroll down to __Git__ and then click __+ Add__.


* * *

<font size="-1">ACKNOWLEDGEMENT: Modelled after CS11 Lab 1 at Caltech.</font>

<font size="-1">Some content Copyright (C) 2004-2010, California Institute of Technology.</font>

