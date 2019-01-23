//
//  main.cpp
//  Lesson8_4
//
//  Created by Zidong Zhang on 1/22/19.
//  Copyright © 2019 张子洞. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    int dogsAge = 9;
    
    cout << "Integer age = " << age << endl;
    cout << "Integer dogsAge = " << dogsAge << endl;
    
    int* pointsToInt = &age;
    cout << "pointsToInt points to age" << endl;
    
    //Displaying the value of pointer
    cout << "pointsToInt = " << hex << pointsToInt << endl;
    
    // Displaying the value at the pointed locaiton
    cout << "*pointsToInt = " << hex << *pointsToInt << endl;
    
    pointsToInt = &dogsAge;
    cout << "pointsToInt points to dogsAge now" << endl;
    
    cout << "pointsToInt = 0x" << hex << pointsToInt << endl;
    cout << "*pointsToInt = " << dec << *pointsToInt << endl;
    
    return 0;
}
