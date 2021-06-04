// PracticeCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

void multilineString()
{
    std::cout << "Hello World\n";

    std::cout << "Hello "
        "World"
        "\n";
}

//----------------------------------------------
void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

void uninitializedVar()
{
    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value

    doNothing(x); // make the compiler think we're assigning a value to this variable

    // print the value of x to the screen
    std::cout << x << '\n'; // who knows what we'll get, because x is uninitialized
}

/**
* Taking two numbers as input from user and printing them
*/

//--------------------------------------------
void cinTwoValues()
{
    std::cout << "Enter two numbers separated by a space: ";

    int x{ }; // define variable x to hold user input (and zero-initialize it)
    int y{ }; // define variable y to hold user input (and zero-initialize it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << x << " and " << y << '\n';
}


//---------------------------------------------
void multiplyBySomeNumber()
{
    std::cout << "Enter an integer: ";

    int num{};
    std::cin >> num;

    //multiplying inline to reduce variables
    std::cout << "Double " << num << " is: " << num * 2 << '\n';
    std::cout << "Triple " << num << " is: " << num * 3 << '\n';
}

//----------------------------------------------
void addingAndSubtractingTwoNumber()
{
    std::cout << "Enter an integer: ";

    int num1{};
    std::cin >> num1;

    std::cout << "Enter another integer: ";

    int num2{};
    std::cin >> num2;


    //adding and subtracting inline to reduce variables
    std::cout << num1 << " + " << num2 << " is " << num1 + num2 << '\n';
    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << '\n';
}

//----------------------------------------------
int returnFive()
{
    return 5;
}

void firstFunction()
{
    std::cout << returnFive() << '\n';
    std::cout << returnFive() + 2 << '\n';

    returnFive();
}

//-----------------------------------------------

// Function asks user to enter a value
// Return value is the integer entered by the user from the keyboard
int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void multiplyUserValueByTwo()
{
    int num{ getValueFromUser() };
    std::cout << num << " Doubled is: " << num * 2 << '\n';

}

void takeTwoNumbersFromUser()
{
    int x{ getValueFromUser() };
    int y{ getValueFromUser() };

    std::cout << x << " + " << y << " = " << x + y << '\n';

}

//--------------------------------------------------
void functionWithoutParenthesis()
{
    std::cout << getValueFromUser << '\n';
    std::cout << firstFunction << '\n';
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
    //uninitializedVar();
    //multilineString();
    //multiplyBySomeNumber();
    //addingAndSubtractingTwoNumber();
    //firstFunction();
    //multiplyUserValueByTwo();
    //takeTwoNumbersFromUser();
    functionWithoutParenthesis();

    return EXIT_SUCCESS;
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
