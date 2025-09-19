#include <iostream>
using namespace std;

//Function to analyze pointer
void analyze_pointer(int* ptr) {
    cout << "Memory Location: " << ptr << endl;  //Print the memory address of the variable passed as argument
    cout << "Value: " << *ptr << endl;           //Dereference the pointer to get the value it points to
}

int main() {
    int iValue = 49;  //Initializing a local variable in stack
    cout << "Stack Allocation:" << endl;
    analyze_pointer(&iValue);  //Pass the address of iValue to the function using dereference operator
    cout << endl;

    int* iHeapValue = new int (51); //Initializing a local variable on the heap
    cout << "Heap Allocation:" << endl;
    analyze_pointer(iHeapValue); //Pass the pointer to the variable in heap to the function

    delete iHeapValue;  //Deallocate the heap memory to free up space

    return 0;
}
