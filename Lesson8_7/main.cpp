//
//  main.cpp
//  Lesson8_7
//
//  Created by Zidong Zhang on 1/23/19.
//  Copyright © 2019 张子洞. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    // Request for memory space for an int
//    int zzd1 = 1;
    int zzd2 = 2;
    
    int* pointszzd1 = new int;
    int* pointszzd2 = &zzd2;
    
    // Use the allocated memory to store a number
    cout << "Enter your dog's age: " ;
//    *pointsToAnAge = 2;
//    *pointsToAnAge = 3;
    
    // use indirection operator* to access value
//    cout << "Age " << *pointszzd1 << " is stored at 0x" << pointszzd1 << endl;
    cout << "zzd " << *pointszzd2 << " is stored at 0x" << pointszzd2 << endl;
    cout << "pointszzd1 is: " << *pointszzd1 << endl;
    
    pointszzd1 = &zzd2;
    
    cout << "now zzd1 is: " << pointszzd1;
//    delete[] pointsToAnAge; // release memory
//    delete[] pointszzd;
    
    return 0;
}
