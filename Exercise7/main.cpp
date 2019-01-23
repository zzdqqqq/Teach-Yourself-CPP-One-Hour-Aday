//
//  main.cpp
//  Exercise7
//
//  Created by Zidong Zhang on 1/13/19.
//  Copyright © 2019 张子洞. All rights reserved.
//

#include <iostream>
using namespace std;
const double Pi = 3.1415926;

double volume(int radius, int height);
double volume(int radius);

int main()
{
    // Write oveloaded functions that calcculate the volume of a sphere and a cyinder
    cout << "Calculate sphere or  cylindr: " << endl;
    char userSelection = '\0';
    
    cout << "Enter 's' for sphere, 'c' for cylinder: " << endl;
    cin >> userSelection;
    
    int radius = 0;
    cout << "Enter radius:" << endl;
    cin >> radius;

    
    if (userSelection == 's') {
        cout << "volume is: " << endl << volume(radius) << endl;
    } else {
        int height = 0;
        cout << "Enter height: " << endl;
        cin >> height;
        cout << "volume is: " << endl << volume(radius, height) << endl;
    }
    return 0;
}

double volume(int radius, int height)
{
    return Pi * radius * radius * height;
}

double volume(int radius)
{
    return (4 * Pi * radius * radius * radius) / 3;
}
