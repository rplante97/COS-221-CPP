#include <iostream>
#include <vector>
#include "stack.h"

using namespace std;

int main(void){
    //Formatting stuff
    cout << "Ryan Plante" << endl;
    cout << "COS 221 Homework 3" << endl;
    cout << "October 5, 2018" << endl;

    //Create stack object of type string
    Stack<string> myStack;

    //Add specified strings to the stack
    cout << "Pushing Bird, Dog, Cat strings to stack..." << endl;
    myStack.push("Bird");
    myStack.push("Dog");
    myStack.push("Cat");

    //Display full stack functionality
    //getSize() functionality
    cout << "Size of stack " << myStack.getSize() << endl;
    //peek() functionality
    cout << "Peeking at stack returns: " << myStack.peek() << endl;
    //Pop functionality
    cout << "Popping 1 item from the stack..." << endl;
    myStack.pop();
    cout << "New size of stack " << myStack.getSize() << endl;
    //Empty functionality
    cout << "Check if stack is empty: " << myStack.empty() << endl;
    //Peek functionality
    cout << "Peeking at stack returns: " << myStack.peek() << endl;
    //Pop last two elements from stack
    cout << "Popping 2 remaining items from the stack..." << endl;
    myStack.pop();
    myStack.pop();
    //Empty and getSize() functionality
    cout << "New size of stack " << myStack.getSize() << endl;
    cout << "Check if stack is empty: " << myStack.empty() << endl;

    return 0;
}