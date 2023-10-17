#include "./cylinder.h"
#include "./menu.h"
#include <iostream>
using namespace std;

int main()
{
    Cylinder C1;
    Emenu choice;
    while ((choice = menu()) != EXIT)
    {
        switch (choice)
        {
        case 1:
            cout << "Radius: \t" << C1.getRadius() << endl;
            break;
        case 2:
            double radius;
            cout << "Enter Radius: " << endl;
            cin >> radius;
            C1.setRadius(radius);
            break;
        case 3:
            cout << "Height: \t" << C1.getHeight() << endl;
            break;
        case 4:
            double height;
            cout << "Enter Height: " << endl;
            cin >> height;
            C1.setHeight(height);
            break;
        case 5:
            cout << "Volume: \t" << C1.getVolume() << endl;
            break;
        default:
            cout << "Entered Invalid Choice....:(" << endl;
            break;
        }
    }
    cout << "Thank you!\nVisit Again.....:)" << endl;
    return 0;
}
