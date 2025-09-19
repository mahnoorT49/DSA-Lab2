#include <iostream>
#include <cstring>  //For strlen
using namespace std;

int main() {
    int length;

    cout << "Enter the maximum length of the string: ";
    cin >> length;

    char* str = new char[length + 1];  //Allocate memory dynamically for a char array making a string (+1 for null terminator)

    cin.ignore();  //Clear the input buffer before getting user input

    cout << "\nEnter a string: ";
    cin.getline(str, length + 1);  //Only read up to 'length' characters and discard the rest

    //Find the length of the input string
    int strLength = strlen(str);

    char* start = str;  //Points to the address of the 1st string character
    char* end = str + strLength - 1;  //Points to the address of the last string character
     
    while (start < end) {  //While the address of the start is before the address of the end of the string
        //Swap the first and last characters
        char temp = *start;
        *start = *end;
        *end = temp;

        //Increment the start and end by 1 memory address as a char is only 1 Byte long
        start++;
        end--;
    }

    cout << "\nReversed string: " << str << endl;  //Display the reversed string
    
    delete[] str;  //Free the dynamically allocated memory

    return 0;
}
