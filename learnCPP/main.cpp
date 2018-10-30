//
//  main.cpp
//  learnCPP
//
//  Created by 张子洞 on 10/30/18.
//  Copyright © 2018 张子洞. All rights reserved.
//

#include <iostream>
using namespace std;
void DemoConsoleOutput();
void Demo2();
void Demo3();
int main() {
    // insert code here...
    DemoConsoleOutput();
    Demo2();
    Demo3();
    return 0;
    
}
void Demo3(){
    
}
void Demo2(){
    int inputNumber;
    
    cout << "Enter an integer:\n";
    cin >> inputNumber;
    
    cout << inputNumber << endl;
}

void DemoConsoleOutput(){
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five:" << endl;
    int x = 8;
    int y = 6;
    cout << "Hello, World!\n";
    cout << x - y << " " << x * y << " " << x + y << endl;
}
