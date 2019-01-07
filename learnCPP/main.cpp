//
//  main.cpp
//  learnCPP
//
//  Created by 张子洞 on 10/30/18.
//  Copyright © 2018 张子洞. All rights reserved.
//

#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;

void DemoConsoleOutput();
void Demo2();
void Demo3();
void Demo4();
void Demo5();
void Demo6();
void Demo6_6();
void Demo6_7();
void Demo6_8();
void Demo6_9();
void Demo6_10();
void Demo6_11();
void Demo6_12();

int main() {
    // insert code here...
//    DemoConsoleOutput();
//    Demo2();
//    Demo3();
//    Demo4();
//    Demo5();
//    Demo6();
//    Demo6_6();
//    Demo6_7();
//    Demo6_8();
//    Demo6_9();
//    Demo6_10();
//    Demo6_11();
    Demo6_12();
    
    
    return 0;
    
}
void Demo6_12(){
    int someNums[] = { 1, 101, -1, 40, 2040 };
    
    /*---------------What is the meaning of '&'. Why it appears here?----------------*/
    for (const int& aNum : someNums)
        cout << aNum << ' ';
    cout << endl;
    
    for (auto anElement : { 5, 222, 110, -45, 2017 })
        cout << anElement << ' ';
    cout << endl;
    
    char charArray[] = { 'h', 'e', 'l', 'l', 'o' };
    for (auto aChar : charArray)
        cout << aChar << ' ';
    cout << endl;
    
    double moreNums[] = { 3.14, -1.3, 22, 10101 };
    for (auto anElement : moreNums)
        cout << anElement << ' ';
    cout << endl;
    
    /***************定义string！！*******************/
    string sayHello{ "Hello World!"};
    /**********************************************/
    for (auto anElement : sayHello)
        cout << anElement << ' ';
    cout << endl;
    
    const string helloString = "hello";
    for (auto stringElement : helloString)
        cout << stringElement << ' ';
    cout << endl;
}
void Demo6_11(){
    // without loop expression (third expression missing)
    for (char userSelection = 'm'; (userSelection != 'x');)
    {
        cout << "Enter the two integers: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;
        
        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        
        cout << "Press x to exit or any other key to recalculate" << endl;
        cin >> userSelection;
    }
    
    cout << "Goodbye!" << endl;
}
void Demo6_10(){
    const int ARRAY_LENGTH = 5;
    int myNums[ARRAY_LENGTH] = {0}; // This is definition,(has a "int")
    
    cout << "Populate array of " << ARRAY_LENGTH << " integers" << endl;
    
    for (int counter = 0; counter < ARRAY_LENGTH; counter++)
    {
        cout << "Enter an integer for element " << counter << ": ";
        cin >> myNums[counter];
    }
    
    cout << "Displaying contents of the array: " << endl;
    
    for (int counter = 0; counter < ARRAY_LENGTH; counter++)
        // The next code is not a definition, it displays every element in an array
        cout << "Element " << counter << " = " << myNums[counter] << endl;
}
void Demo6_9(){
    char userSelection = 'x'; // initial value
    do
    {
        cout << "Enter the two integers: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;
        
        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        cout << "Press x to exit(x) or any other key to recalculate" << endl;
        cin >> userSelection;
    }while (userSelection != 'x');
    
    cout << "Goodbye!" << endl;
}
void Demo6_8(){
    char userSelection = 'm';   // initial value
    
    while (userSelection != 'x')
    {
        cout << "Enter the two intergers; " << endl;
        float num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;
        
        cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        
        cout << "Press x to exit (x) or any other key to recalculate" << endl;
        cin >> userSelection;
    }
    cout << "Goodbye" << endl;
}
void Demo6_7(){
Start:
    int num1 = 0, num2 = 0;
    
    cout << "Enter two intergers: " << endl;
    cin >> num1;
    cin >> num2;
    cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    
    cout << "Do you wish to perform another operation (y/n)?" << endl;
    char repeat = 'y';
    cin >> repeat;
    
    if (repeat == 'y')
        goto Start;
    cout << "Goodbye!" << endl;
}
void Demo6_6(){
    cout << "Enter two numbers" << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    int max = (num1 > num2)? num1 : num2;
    cout << "The greater of " << num1 << " and " << num2 << \
    " is " << max << endl;
}
void Demo6(){
//    cout << "Listing 6.1" << endl;
//    cout << "Enter two intergers: " << endl;
//    int num1 = 0, num2 = 0;
//    cin >> num1;
//    cin >> num2;
//
//    cout << "Enter \'m\' to mulitiply, anything else to add: ";
//    char userSelection = '\0';
//    cout << userSelection;
//    cin >> userSelection;
//    int result = 0;
//    if (userSelection == 'm')
//        result = num1 * num2;
//    else
//        result = num1 + num2;
//
//    cout << "result is: " << result << endl;
    
    cout << "Listing 6.2" << endl;
    cout << "Enter a line of text: " << endl;
    string userInput;
//    getline (cin,userInput); //都阔以
    cin >> userInput;
    
    char copyInput[20] = { '\0' };
    if (userInput.length() < 20) // check bounds
    {
        strcpy(copyInput, userInput.c_str());
        cout << "copyInput contains: " << copyInput << endl;
    }
    else
        cout << "Bounds exceeded: won't copy! " << endl;
// Listing 6.3
    cout << "Listing 6.3" << endl;
    cout << "Enter two numbers" << endl;
    float num1 =0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    cout << "Enter d to divide, anything else to multiply" << endl;
    char userSelection = '\0';
    cin >> userSelection;
    if (userSelection == 'd')
    {
        if (num2 != 0)
        {
            cout << "You want to divide" << endl;
            cout << "num1" << "/" << "num2" << "=" << num1/num2 << endl;
        }
        else
        {
            cout << "Division by zero is not allowed" << endl;
        }
    }
    else
    {
        cout << "You want to multiply" << endl;
        cout << "num1" << "*" << "num2" << num1 * num2 << endl;
    }
/* Listing 6.4 */
    enum DaysOfWeek
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    cout << Sunday << endl;
// Listing
    cout << "Enter two numbers" << endl;
//    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    int max = (num1 > num2) ? num1 : num2;
    cout << "The greater of " << num1 << " and " \
    << num2 << " is: " << max << endl;
/* Listing 6.5 */
    int dayInput = Sunday; // Initiallize to Sunday
    cin >> dayInput;
    
    switch(dayInput)
    {
        case Sunday:
            cout << "Sunday was named after the Sun." << endl;
            break;
            
        case Monday:
            cout << "Monday was named after the Moon." << endl;
            break;
        
        case Tuesday:
            cout << "Tuesday was named after Mars." << endl;
            break;
            
        case Wednesday:
            cout << "Wednesday was named after Mercury." << endl;
            break;
    }
}

void Demo5(){
    int manyNumbers [5] = {1};
    cout << manyNumbers[0] << endl;
    vector<int> dynArray (3);
    dynArray[0] = 123;
    dynArray[1] = 345;
    dynArray[2] = 344;
    cout << dynArray[0] << dynArray[1] << dynArray[2] << endl;
    
    char sayHello[] = {'H','e','l','l','o'};
    cout << "sayHello: " << strlen(sayHello) << endl;
    
    unsigned short inputNum = 0;
    cin >> inputNum;
    bitset<5> inputBits (inputNum);
    cout << inputNum << " in binary is " << inputBits << endl;
    
//    Listing 5.10
    cout << "Use sizeof to determine memory used by arrays" << endl;
    int myNumbers [100] = {0};
    
    cout << "Bytes used by an int: " << sizeof(int) << endl;
    cout << "Bytes used by myNumbers: " << sizeof(myNumbers) << endl;
    cout << "Bytes used by an element: " << sizeof(myNumbers[0]) << endl;
    cout << "Listing 5.10" << endl;
    int myNumber = 10 * 16 >> 1;
    cout << myNumber << endl;
}
constexpr double Getpi() { return 22.0/7; }
constexpr double Twicepi() { return 2 * Getpi(); }
void Demo4(){
    unsigned short uShortValue = 65535;
    cout << uShortValue << endl;
    cout << ++uShortValue << endl;
    
    short signedShort = 32767;
    cout << signedShort << endl;
    cout << ++ signedShort << endl;
    cout << "size of int in bytes: " << sizeof(int) << endl;
    cout << "Size of int16_t: " << sizeof(int16_t) << endl;
    cout << "Size of int8_t: " << sizeof(int8_t) << endl;
    int someNum = 0b1010;
    cout << "binary 1010 evaluates to decimal 10: " << someNum << endl;
    const float pi = 22.0/7;
    cout << "pi is " << pi << endl;
    cout << Getpi() << endl;
    cout << Twicepi() << endl;
    enum CardinalDirections
    {
        North,
        South,
        East = 23,
        West,
    };
    cout << "North:" << North << endl;
    cout << "South:" << South << endl;
    cout << "East: " << East << endl;
    cout << "West: " << West << endl;
    
}

void Demo3(){
    cout << "Enter the first number: ";
    int firstNum = 0;
    cin >> firstNum;
    
    cout << "Enter the second number: ";
    int secondNum = 0;
    cin >> secondNum;
    
    cout << firstNum << "x" << secondNum;
    cout << "=" << firstNum * secondNum;
    
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
