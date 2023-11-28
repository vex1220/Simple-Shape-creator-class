/*
Name: Ben Ashir Georges
Professor: Christopher Mills
Year: Fall 2023
Assignment: Programming Assignment 5
Due Date: 11/27/2023
*/
// header files
#include"Shape.h"

int main()
{
    static int sizeofarray=5;
    // is used to to increment through the array
    static int trackers=0;
    // used for the do while loop
    bool hold = true;
    // array of shapes
    Shape** shapes = new Shape*[sizeofarray];
    // user inputs the shape they want
    string shape_chosen;
    // choice if the user wants to stay or leave
    int choice;

    // introduction lines
    cout<<"_____________________________________________________________________________"<<endl;
    cout<<"Welcome to my Shape creator. You will have the option to create 3 shapes";
    cout<<"and get the perimeter and area of each shape that you want."<<endl;
    cout<<"You will be able to do this for Triangles, Circles, and Squares."<<endl;
    cout<<"_____________________________________________________________________________"<<endl;

    do{
        
        cout<<"What shape would you like to make?(Enter triangle, circle, or square)"<<endl;
        cin>>shape_chosen;

        if(shape_chosen=="triangle")
        {
            shapes[trackers]= new Triangle;
            shapes[trackers]->setValues();
            cout<<"You have added a Triangle."<<endl;
            cout<<"Its area is "<<shapes[trackers]->getArea()<<endl;
            cout<<"Its perimeter is "<<shapes[trackers]->getPerimeter()<<endl;
            trackers++;
        }

        else if(shape_chosen=="square")
        {
            shapes[trackers]= new Square;
            shapes[trackers]->setLength();
            cout<<"You added a Square."<<endl;
            cout<<"Its area is "<<shapes[trackers]->getArea()<<endl;
            cout<<"Its perimeter is "<<shapes[trackers]->getPerimeter()<<endl;
            trackers++;
        }

        else if(shape_chosen=="circle")
        {
            shapes[trackers]= new Circle;
            shapes[trackers]->setRadius();
            cout<<"You have added a Circle."<<endl;
            cout<<"Its area is "<<shapes[trackers]->getArea()<<endl;
            cout<<"Its perimeter is "<<shapes[trackers]->getPerimeter()<<endl;
            trackers++;
        }

        /*This makes the array bigger and copies everything over*/
        if(trackers%5==0)
        {
            Shape** newshape = new Shape*[sizeofarray+5];
            for(int i=0; i<trackers;i++)
            {
                newshape[i]=shapes[i];
            }

            delete[] shapes;
            shapes=newshape;
            newshape=NULL;
        }
        cout<<endl<<"Would you like to continue adding shapes or would you like the total?(Enter 1 if you want to continute. Enter 2 to stop.)"<<endl;
        cin>>choice;

        if(choice==2)
        {
            hold=false;
        }

    }while(hold!=false);

    double total_area;
    double total_perimeter;

    for(int i=0; i<trackers;i++)
    {
        total_area+=shapes[i]->getArea();
        total_perimeter+=shapes[i]->getPerimeter();
        
    }
    cout<<"There are a total of "<<trackers<<" shapes stored."<<endl;
    cout<<"Total Area: "<<total_area<<endl;
    cout<<"Total Perimeter: "<<total_perimeter<<endl<<endl;
    cout<<"Have a nice day!!"<<endl;

}