
#include <iostream>
using namespace std;



int binarySearch(int* values, int valuesSize, int key) {
    
    int low = 0;
    int high = valuesSize - 1;

    while (high >= low) {
        int mid = (high + low) / 2;

        if (values[mid] < key) {
            low = mid + 1;
        }
        else if (values[mid] > key) {
            high = mid - 1;
        }
        else {
            return mid;
        }
    }
    
    return -1;
}



int main() {
    int array[] = {2,5,6,14,16,24,32,63};
    int arraySize = sizeof(array) / sizeof(array[0]);

    // for (unsigned int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    // {
    //     cout << "Number Array: " << array[i] << endl;
    // }
    
    // The better methodology to loop through an array
    cout << "Values: ";
    for (const int &array : array)
    {
        cout << array << " ";
    }

    cout << "Enter an integer value: ";
    int key = 0;
    cin >> key;
    
    int keyIndex = binarySearch(array, arraySize, key);
    if (keyIndex == -1) {
        cout << key << " was not found." << endl;
    }
    else {
        cout << "Found " << key << " at index " << keyIndex << "." << endl;
    }

    return 0;
}