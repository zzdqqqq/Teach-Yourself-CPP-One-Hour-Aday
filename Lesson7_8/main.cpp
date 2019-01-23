//
//  main.cpp
//  Lesson7_8
//
//  Created by Zidong Zhang on 1/12/19.
//  Copyright © 2019 张子洞. All rights reserved.
//

#include <iostream>

// Fetching the area of a circle as a reference parameter and not as a return value

using namespace std;

const double Pi = 3.1416;

//output parameter result by REFERENCE
void Area(double radius, double& result)
{
    result = Pi * radius * radius;
}

int main()
{
    cout << "Enter radius: " ;
    double radius = 0;
    cin >> radius;
    
    double areaFetched = 0;
    Area(radius, areaFetched);
    
    cout << "The area is: " << areaFetched << endl;
    return 0;
}
