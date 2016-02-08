## CSCI 2312: Programming Assignment 1


* * *
This program uses objects of a class <tt>Point</tt> to compute the distance between and the area of various three-dimensional points.
    Here is the header file <tt>Point.h</tt> that is used to describe an object representing a point in three-dimensional Euclidean space:

```c++
// A 3-dimensional point class
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
    double distanceTo(const Point& p2, const Point& p1) const;


};
```

The <tt>Point</tt> class represents points in three dimensions (each point has an x, y, and z value). It contains three constructors, accessor and mutator functions (get and set), and the <tt>distanceTo</tt> member function, which accepts two <tt>Point</tt> class objects and returns the distance between the two points.

The <tt>area.cpp</tt> file contains a function, <tt>computeArea</tt>, that computes the area of the triangle created by three <tt>Point</tt> objects.

The <tt>main.cpp</tt> file contains the main function, which acts as a driver to implement the test code to test the functionality of the program.

To compile the program:

   ```
   g++ -Wall main.cpp area.cpp Point.cpp PointTests.cpp ErrorContext.cpp -o ucd-csci2312-pa1
   ```

To run the generated program:

   ```
./ucd_csci2312_pa1
```

 This program is based on a test suite. Test-Driven Development (TDD) means that you write your test code before you write the actual code it has to test. The test suite is written in such a way that earlier tests are more basic and later tests require earlier tests to be running.
    
   *   The test suite is in <tt>PointTests.h</tt> and <tt>PointTests.cpp</tt>. <tt>main.cpp</tt> runs the tests.

Compiler:
    This program was tested on a GCC compiler.
