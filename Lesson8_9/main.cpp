//
//  main.cpp
//  Lesson8_9
//
//  Created by Zidong Zhang on 1/23/19.
//  Copyright © 2019 张子洞. All rights reserved.
//

#include <iostream>
using namespace std;

//Using offset values and operators to increment and decrement pointers
int main()
{
    cout << " How many integers you wish to enter? " ;
    int numEntries = 0;
    cin >> numEntries;
    
    int* pointsToInts = new int [numEntries];
    
    cout << "Allocated for " << numEntries << " integers" << endl;
    for(int counter = 0; counter < numEntries; ++counter)
    {
        cout << "Enter number " << counter << ": " ;
        cin >> *(pointsToInts + counter);
    }
    
    cout << "Displaying all numbers entered: " << endl;
    for(int counter = 0; counter < numEntries; ++counter)
        cout << *(pointsToInts++) << " ";
    // 用new构造的动态array 可以用指针加法来读取array里面每一个值。
    // 普通的array，指针加1相当于找下一个array的第一个指针。
    cout << endl;
    
    // return pointer to initial position
    pointsToInts -= numEntries;
    
    // done with using memory? release
    delete [] pointsToInts;
    
    return 0;
}
