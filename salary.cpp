#include <iostream> 
using namespace std;

int main() {
    const int size = 20; //Constant number of employees

    int* salArray = new int[size];  //Dynamically allocated memory for salary array using pointers

    //Input salaries
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> salArray[i];
    }

    //Apply increment formula
    for (int i = 0; i < size; i++) {
        salArray[i] = salArray[i] + salArray[i] / (i + 1);
    }

    //Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << salArray[i] << " ";
    }
    cout << endl;

    delete[] salArray;  //Deallocate the dynamically allocated memory by deleting the array to free up space

    return 0;
}
