#include <iostream>
using namespace std;


int getArrayLength (int array[])
{
    //int arrayLength = sizeof(array) / sizeof(int);
    // We know int type is 4 bytes so 4 * 4 = 16 bytes.
    int arrayLength = sizeof(array) / 2;
    return arrayLength;
}

int main ()
{

    int userArray[] = {2,7,11,15};
    int target = 25;

    int sizeArray = getArrayLength(userArray);

    for (unsigned i = 0; i < sizeArray; i++)
    {
        // cout << userArray[i] << ' ';
        for (unsigned j = i; j < sizeArray; j++)
        {
            if (userArray[i] + userArray[j] == target)
            {
                cout << i << " " << j;
            }
            else 
            {
                cout << "Nothing could be found";
                break; 
            }
        }
    }
    return 0;
}