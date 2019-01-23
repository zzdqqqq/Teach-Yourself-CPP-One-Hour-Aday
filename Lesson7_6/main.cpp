//
//  main.cpp
//  Lesson7_6
//
//  Created by Zidong Zhang on 1/12/19.
//  Copyright © 2019 张子洞. All rights reserved.
//

#include <iostream>
using namespace std;
const double Pi = 3.14159265;

void QueryAndCalculate()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;
    
//    cout << "Area: " << Pi * radius * radius << endl;
    
    cout << "Do you wish to calculate circumference (y/n)? ";
    char calcCircum = 'n';
    cin >> calcCircum;
    
    if (calcCircum == 'n')
        return;
    
    cout << "Circumference: " << 2 * Pi * radius << endl;
    return;
}

int main()
{
    QueryAndCalculate();
    
    return 0;
}
