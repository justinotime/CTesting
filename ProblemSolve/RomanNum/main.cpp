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
    void input(RomanNumeral *);

};

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

    cout << "Input ";
    getline (cin,user);
    setUserNumeral(user);
    return;

}

int main()
{
    RomanNumeral *ptr = new RomanNumeral;

    ptr->input(ptr);

    return 0;
}