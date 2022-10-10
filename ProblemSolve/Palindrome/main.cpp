#include <iostream>
#include <string>

using namespace std;

string user;
void getUser()
{
    cout << "Input Roman Numerals: ";
    cin >> user;
}

void returnUser()
{
    cout << user << endl;
}


int main ()
{
    
    getUser();
    returnUser();



    return 0;
}