#ifndef MOBILE_H
#define MOBILE_H

#include <string>
using namespace std;

class Mobile
{
private:
    static float m_length;
    static float m_width;
    static float m_thickness;
    static float m_price;
    static string m_brand;
    static string m_colour;
    std::string a="rama";
public:
    Mobile();
    static void display();
    static void setProperties(float length, float width, float thickness,
                              float price, string brand, string colour);
    ~Mobile();
};

#endif // MOBILE_H
