#include <iostream>
using namespace std;


int FindMax(int inputArray[6]) {
    int max;

    max = inputArray[0];

    for (int i = 1; i <= 6; ++i) {
        if (inputArray[i] > max) {
            max = inputArray[i];
        }
    }
    
    return max;
}


int main() 
{
    int inputArray[6] = {13, 7, 45, -3, 92, 17};
    FindMax(inputArray);
    
    return 0;
}