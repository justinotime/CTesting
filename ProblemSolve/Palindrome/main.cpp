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

RomanNumeral::RomanNumeral()

int main()
{
    RomanNumeral *userNumeral = new RomanNumeral;

    return 0;
}