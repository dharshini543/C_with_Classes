#include "Human.h"
#include "mobile.h"
#include <iostream>

Human::Human(float length,float width,float thickness,float price,string brand,string colour)
{
    cout<<"Human class Constructor" <<endl;

    Mobile::setProperties(length, width, thickness, price, brand, colour);
}

Human::~Human()
{
    cout<<"Human class Destructor" <<endl;

}
