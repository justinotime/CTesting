#include <iostream>
#include <string>

using namespace std;

class RomanNumeral
{
    private: 
        string userNumeral;

    public:
        RomanNumeral();    
        RomanNumeral(const string userNumeral);

    ~RomanNumeral();

    void setUserNumeral(string);

    string getUserNumeral() const;
}

RomanNumeral::RomanNumeral()
{
    userNumeral = "none";
}

RomanNumeral::RomanNumeral(const string user)
{
    userNumeral = user;
}

RomanNumeral::~RomanNumeral()
{
    cout << "Cargo destructor called\n";
}
void RomanNumeral::setUserNumeral(string user)
{
    userNumeral = user;
}

string RomanNumeral::getUserNumeral() const
{
    return userNumeral;
}

void RomanNumeral::input(RomanNumeral *ptr)
{
    string user;

    cout << "Input"
}

int main()
{
    RomanNumeral *ptr = new RomanNumeral;

    return 0;
}