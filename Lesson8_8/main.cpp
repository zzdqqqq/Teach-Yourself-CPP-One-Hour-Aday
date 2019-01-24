//
//  main.cpp
//  Lesson8_8
//
//  Created by Zidong Zhang on 1/23/19.
//  Copyright © 2019 张子洞. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "How many integers shall I reserve memory for ? " << endl;
//    int numEntries = 0;
//    cin >> numEntries;
    
    int* myNumbers = new int;
    int* myNumbers2 = new int;
    int* myNumbers3 = new int;
    
    *myNumbers2 = 2147483647;
    
    cout << "Memory allocated at: 0x" << myNumbers << hex << endl;
    cout << dec << *myNumbers2 << " is allocated at: 0x" << myNumbers2 << endl;
    cout << "Memory allocated at: " << myNumbers3 << endl;
    cout << "size of int: " << sizeof(int) << endl;
    
    //de-allocate before exiting
//    delete[] myNumbers;
    
    return 0;
}
