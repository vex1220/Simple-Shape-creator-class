/*
Name: Ben Ashir Georges
Professor: Christopher Mills
Year: Fall 2023
Assignment: Programming Assignment 5
Due Date: 11/27/2023
*/
// Header files
#include"Shape.h"

Shape::~Shape(){

}

Circle::~Circle(){

}

Triangle::~Triangle(){

}

Square::~Square(){

}
void Triangle::setRadius(){

}

void Triangle:: setLength(){

}

void Square::setRadius(){

}

void Circle::setValues(){

}

void Circle::setLength(){

}
void Square::setValues()
{

}
double Square::getArea()
{
    return length*length;
}


double Circle::getArea()
{
    return radius*radius*3.14159;
}

double Square::getPerimeter()
{
    return length+length;
}

double Triangle::getPerimeter()
{
    return base+side_one+side_two;
}

double Triangle::getArea()
{
    double s= (base+side_one+side_two)/2;
    double t = s*(s-base)*(s-side_one)*(s-side_two);
    return sqrt(t);
}

double Circle::getPerimeter()
{
    return (2)*(3.14159)*radius;
}

void Circle::setRadius()
{
    cout<<"What do you want the radius of your circle to be?"<<endl;
    cin>>radius;
}

void Square::setLength()
{
    cout<<"What do you want the length of the Square to be?"<<endl;
    cin>>length;
}

void Triangle::setValues()
{
    cout<<"What do you want to set the base of the triangle?"<<endl;
    cin>>base;
    cout<<"What do you want to set the value of one side of the triangle?"<<endl;
    cin>>side_one;
    cout<<"What do you want to set the value of the second side of the triangle?"<<endl;
    cin>>side_two;
}

Triangle::Triangle()
{
    base=0;
    side_one=0;
    side_two=0;
}

Circle::Circle()
{
    radius=0;
}

Square::Square()
{
    length=0;
}

