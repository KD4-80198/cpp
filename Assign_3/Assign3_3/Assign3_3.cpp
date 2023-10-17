#include "./menu.h"
#include <iostream>
using namespace std;

Emenu menu()
{
    int choice;
    cout << "************************" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Print Radius" << endl;
    cout << "2. Set Radius" << endl;
    cout << "3. Print Height" << endl;
    cout << "4. Set Height" << endl;
    cout << "5. Print Volume" << endl;
    cout << "************************" << endl;
    cin >> choice;
    return Emenu(choice);
}