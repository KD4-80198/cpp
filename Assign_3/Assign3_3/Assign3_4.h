#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
private:
    double radius;
    double height;

public:
    Cylinder();
    Cylinder(double radius, double height);
    double getRadius();
    void setRadius(double);
    double getHeight();
    void setHeight(double);
    double getVolume();
};

#endif