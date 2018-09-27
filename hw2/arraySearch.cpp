//Ryan Plante
//September 26, 2018
//Finds the smallest element in an array of integers (using pointers)
#include <iostream>
using namespace std;

int findSmallestElement(int* arr, int size);

int main(void){
    //Define our array and its length
    const int size = 8;
    int array[size] = {1,2,4,5,10,100,2,-22};
    int result;

    //Find smallest element 
    result = findSmallestElement(array, size);
    cout << "The smallest element in the given array is " << result << endl;
    return 0;
}

int findSmallestElement(int* arr, int size) {
    int smallest = *arr; //Smallest is set to first element of array
    int *p = arr; //Pointer to first element of array

    //Iterate through array saving any value that is smaller than all the last
    for (int i = 0; i<size; i++){
        //*(p+i) is equivalent to arr[0+i]
        if (*(p+i) < smallest){
            smallest = *(p+i);
        }
    }
    return smallest;
}