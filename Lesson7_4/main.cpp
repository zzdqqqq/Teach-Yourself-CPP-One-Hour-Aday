//
//  main.cpp
//  Lesson7_4
//
//  Created by Zidong Zhang on 1/12/19.
//  Copyright © 2019 张子洞. All rights reserved.
//
// Funciton that computes the area of a circle, using pi as a second parameter with Default value 3.14
#include <iostream>
using namespace std;

// Function Declarations (Prototypes)
double Area(double radius, double pi = 3.14);

int main()
{
    cout << "Enter radius: " ;
    double radius = 0;
    cin >> radius;
    
    cout << "pi is 3.14, do you wish to change this(y/n)? ";
    char changePi = 'n';
    cin >> changePi;
    
    double circleArea = 0;
    if (changePi == 'y')
    {
        cout << "Enter new pi: ";
        double newPi = 3.14;
        cin >> newPi;
        circleArea = Area(radius, newPi);
    }
    else
        circleArea = Area(radius); // Ignore 2nd param
    
    // Call funciton "Area"
    cout << "Area is: " << Area(radius) << endl;
}

// Function definitions (implementations)
double Area(double radius, double pi)
{
    return pi * radius * radius;
}
