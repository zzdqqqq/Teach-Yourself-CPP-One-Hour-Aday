//
//  main.cpp
//  Lesson7_11
//
//  Created by Zidong Zhang on 1/12/19.
//  Copyright © 2019 张子洞. All rights reserved.
//
// Using auto as Return Type of Function Area()
#include <iostream>
using namespace std;

const double Pi = 3.1415926;

auto Area (double radius)
{
    return Pi * radius * radius;
}

int main()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;
    
    // Call function "Area"
    cout << "Area is: " << Area(radius) << endl;
    
    return 0;
}
