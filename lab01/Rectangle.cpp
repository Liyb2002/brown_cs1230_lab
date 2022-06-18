#include "Rectangle.h"
#include <iostream>



//  TODO (task 4): Write an area function that returns
//        the area of rectangle given width
//        and height

int Rectangle::area(){
    return width*height;
}

//  TODO (task 5): Write the definition of the constructor
//                 which is run at the creation of a rectangle
//                 object and is used to set the defaults of
//                 member variable and more, since Rectangle
//                 inherits from Shape

Rectangle :: Rectangle():
    width(0),
    height(0)
{

}

Rectangle :: ~Rectangle(){
    std::cout << "RECTANGLE DESTRUCTOR" << std :: endl;
}

//  TODO (task 6): Write the definition of the destructor
//                 which is run at the deletion of a rectangle
//                 object and is used to deallocate memory and
//                 do other cleanup for a class object and its
//                 class members when the object is destroyed
//                 Ours will print out the the string
//                 "RECTANGLE DESTRUCTOR"


//  TODO (task 7): Write the definition to the member function set_values
//        such that it takes in integers w and h
//        then sets the member variables width and height accordingly

void Rectangle::set_values(int w, int h)
{
    width = w;
    height = h;

}
