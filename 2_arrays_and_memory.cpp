// S. Trowbridge 2024
#include <iostream>

/*
    array indexes: 0    1    2    3    4    5               // indices run from 0 to size-1
    array data:    10   20   30   40   50   60              // the memory address of the 1st value is the memory address of the array
    memory:        3010 3014 3018 301c 3020 3024            // each integer variable takes up 4 bytes of space
*/
int main() 
{
    std::cout << std::endl;

    const int SIZE = 6;                                     // total number of values in the array
    int nums[SIZE] = {10,20,30,40,50,60};                   // create an assign data to an array of SIZE values
    std::cout << sizeof(nums) << " bytes\n";                // print the amount of memory in bytes for the variable nums

    for(int i=0; i<SIZE; ++i) {                             // print the values of an array
        std::cout << nums[i] << " " << &(nums[i]) << "\n";
    }
    std::cout << "\n";


    int *p = nums;                                          // store the memory address of the array into a pointer variable p
    std::cout << sizeof(p) << " bytes\n";                   // print the amount of memory in bytes for the variable p

    for(int i=0; i<SIZE; ++i) {                             // print the values of an array using a pointer
        std::cout << p[i] << " " << &(p[i]) << "\n";
    }
    std::cout << "\n";

    std::cout << std::endl;    
    return 0;
}
