//
//  main.cpp
//  DistanceBetweenPointers
//
//  Created by Zidong Zhang on 1/24/19.
//  Copyright © 2019 张子洞. All rights reserved.
//


// NEW and DELETE are dynamic allocation of a block of memory
// that can accommodate as many integers
#include <iostream>
using namespace std;

int main()
{
    
    char* p1 = (char*) malloc(9);  // "ABCDEFGHI", one piece of memory
    char* p2 = p1 + 3;     // this is within the same piece as above
    char* p3 = p2 + 3;     // this too
    
    // This is pointer difference
    ptrdiff_t bytes = p3 - p1; // ABC DEF GHI
    // ^       ^
    // p1      p3
    
    
    
    // Gives the expected 6
    printf("%td\n", bytes);
    
    return 0;
}
