// PracticeCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

void uninitializedVar()
{
    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value

    doNothing(x); // make the compiler think we're assigning a value to this variable

    // print the value of x to the screen
    std::cout << x; // who knows what we'll get, because x is uninitialized
}

/**
* Taking two numbers as input from user and printing them
*/
void cinTwoValues()
{
    std::cout << "Enter two numbers separated by a space: ";

    int x{ }; // define variable x to hold user input (and zero-initialize it)
    int y{ }; // define variable y to hold user input (and zero-initialize it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << x << " and " << y << '\n';
}

int main()
{
    //int a{};
    //int b{};
    //int c{};
    //std::cin >> a;
    //std::cin >> b;
    //c = a + b;
    //std::cout << "Hello World!\n";
    //std::cout << "size of int " << sizeof(int) << std::endl;
    //std::cout << "size of double " << sizeof(double) << std::endl;
    //std::cout << "4";
    //std::cout << 4;
    //std::cout << "c " << c;

    //cinTwoValues();
    uninitializedVar();


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
