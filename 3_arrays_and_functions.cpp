// S. Trowbridge 2024
#include <iostream>
#include <cassert>

void print(int *a, int size)                                // parameters: array ptr, array size  
{
    for(int i=0; i<size; ++i) {                         
        std::cout << a[i] << " ";                       
    }
    std::cout << "\n";
    std::cout << sizeof(a) << " bytes\n\n";                 // print the amount of memory in bytes for the variable a 
}
void replace(int *a, int size, int index, int newValue)     // parameters: array ptr, array size, index of value to replace, new value to store at index
{   
    assert(index >= 0 && index < size);                     // if the index is legal (between 0 and size-1 inclusive) continue, otherwise runtime error
    a[index] = newValue;                      
}

int main() 
{
    std::cout << std::endl;

    const int SIZE = 6;                         
    int nums[SIZE] = {10,20,30,40,50,60};          

    std::cout << sizeof(nums) << " bytes\n\n";              // print the amount of memory in bytes for the variable nums

    print(nums, SIZE);
    replace(nums, SIZE, 3, 4000);                           // replace the array value at index 3 with 4000
    print(nums, SIZE);

    std::cout << std::endl;    
    return 0;
}
