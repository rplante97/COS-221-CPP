//Ryan Plante
//COS 221 Stack Class
//October 5, 2018

#include <vector>
using namespace std;

template<typename T>

class Stack 
{
public:
    //Function prototypes
    Stack();
    T peek() const;
    void push(T val);
    T pop();
    bool empty() const;
    int getSize() const;

private:
    //Private vars
    vector<T> items;
    int size;
};

//Empty constructor
template<typename T>
Stack<T>::Stack() {

}

//peek: returns item on top of stack (but does not remove it)
template<typename T>
T Stack<T>::peek() const {
    return items.at(items.size() - 1);
}

//push: adds an item to the top of the stack
template<typename T>
void Stack<T>::push(T val) {
    items.push_back(val);
}

//pop: returns item on top of stack (and removes it from stack)
template<typename T>
T Stack<T>::pop() {
    T item = items.at(items.size()-1);
    items.pop_back();
    return item;
}

//empty: checks to see if stack is empty, returns 1 if so, 0 otherwise
template<typename T>
bool Stack<T>::empty() const {
    if (items.size()){
        return 0;
    }
    else {
        return 1;
    }
}

//getSize: returns number of items in the stack
template<typename T>
int Stack<T>::getSize() const {
    return items.size();
}