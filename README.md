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

This <tt>Point</tt> class represents points in three dimensions (each point has an x, y, and z value).

The <tt>distanceTo</tt> member function accepts two <tt>Point</tt> class objects and returns the distance between the two points.

The <tt>area.cpp</tt> contains a function, <tt>computeArea</tt>, that computes the area of the triangle created by three <tt>Point</tt> objects.


This program is based on a test suite. Test-driven development (TDD) means that you write your test code before you write the actual code it has to test. The test suite is written in such a way that earlier tests are more basic and later tests require earlier tests to be running.

