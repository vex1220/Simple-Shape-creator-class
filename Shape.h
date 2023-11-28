/*
Name: Ben Ashir Georges
Professor: Christopher Mills
Year: Fall 2023
Assignment: Programming Assignment 5
Due Date: 11/27/2023
*/
// Header files
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

class Shape{
    
    
    public: 
    virtual ~Shape();
    virtual double getArea()=0;
    virtual double getPerimeter()=0;
    virtual void setValues()=0;
    virtual void setRadius()=0;
    virtual void setLength()=0;
    
};

class Square: public Shape{

    private:
    double length;

    public:
    Square();
    ~Square();
    double getArea();
    double getPerimeter();
    void setLength();
    void setValues() override;
    void setRadius() override;


};

class Circle: public Shape{
    private:
    double radius;
    
    public:
    Circle();
    ~Circle();
    double getArea();
    double getPerimeter();
    void setRadius();
     void setValues() override;
     void setLength() override;

};

class Triangle : public Shape{

    private:
    double base;
    double side_one;
    double side_two;

    public: 
    Triangle();
    ~Triangle();
    double getArea();
    double getPerimeter();
    void setValues();
    void setRadius() override;
    void setLength() override;
};