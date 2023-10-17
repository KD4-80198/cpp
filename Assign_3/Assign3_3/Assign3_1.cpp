#include "./cylinder.h"
#include <iostream>
using namespace std;

Cylinder::Cylinder() : radius(0), height(0) {}

Cylinder::Cylinder(double radius = 0, double height = 0) : radius(radius), height(height) {}
// {
//     this->radius = radius;
//     this->height = height;
// }

double Cylinder::getRadius()
{
    return this->radius;
}

void Cylinder::setRadius(double radius)
{
    this->radius = radius;
}

double Cylinder::getHeight()
{
    return this->height;
}

void Cylinder::setHeight(double height)
{
    this->height = height;
}

double Cylinder::getVolume()
{
    double volume = 3.14 * this->radius * this->radius * this->height;
    return volume;
}