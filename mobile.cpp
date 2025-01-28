#include "mobile.h"
#include<iostream>

float Mobile::m_length = 0;
float Mobile::m_width = 0;
float Mobile::m_thickness = 0;
float Mobile::m_price= 0;
string Mobile::m_colour = "";
string Mobile::m_brand = "";

Mobile::Mobile()
{
    cout<<"Mobile class Constructor" <<endl;
}

void Mobile::setProperties(float length, float width,
                           float thickness, float price, string brand, string colour)
{
    m_length = length;
    m_width = width;
    m_thickness = thickness;
    m_price = price;
    m_brand =brand ;
    m_colour = colour;
}

void Mobile::display()
{
    Mobile m;
    cout<<"Length :"<<m_length<<endl;
    cout<<"Width :"<<m_width<<endl;
    cout<<"Thickness :"<<m_thickness<<endl;
    cout<<"Price :"<<m_price<<endl;
    cout<<"Brand :"<<m_brand<<endl;
    cout<<"Colour :"<<m_colour<<m.a<<endl;
    cout << endl << endl;
}

Mobile::~Mobile()
{
    cout<<"Mobile class Destructor" <<endl;
}
