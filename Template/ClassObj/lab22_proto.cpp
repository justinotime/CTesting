///Prototype code for lab 2.2
///simple proof of concept
///more code is needed
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class Cargo
{
private:
    string uldtype;  ///unit load type, container or pallet
    string abbrev;   ///three letters AYF, PAG etc.
    string uldid;
    int aircraft;
    int weight;
    string destination;
public:
    ///constructor prototypes
    Cargo();  ///default constructor prototype, see below main
    Cargo(const string uldtype,
          const string abbrev);///full constructor, needs more info

    ///Destructor prototype
    ~Cargo();
    ///Mutator (setters) prototypes, six needed
    void setuldtype(string);
    void setabbrev (string);
    void setuldid(string);

    ///Accessor (getters) prototypes, six needed
    string getuldtype() const;
    string getabbrev() const;
    string getuldid() const;

    void input(Cargo *);
    void output(Cargo *);
}; ///end of class Cargo

int main()
{
    Cargo *cPtr = new Cargo;  ///create Cargo object on the heap for full constructor
    Cargo *dPtr = new Cargo;  ///default Cargo object on the heap
    cPtr->input(cPtr);///cPtr->input replaces (*cPtr).input(*cPtr)
    cPtr->output(cPtr);
    delete cPtr;///kill full constructor object
    dPtr->output(dPtr);
    delete dPtr;///kill the default object
    return 0;
}
///Default constructor, six assignments needed
    Cargo::Cargo( )
    {
        uldtype = "none";
        abbrev = "none";
        uldid = "";
    }
///constructor needs to take six parameters
    Cargo::Cargo(const string type,
                 const string abrv)
    {
        uldtype = type;
        abbrev = abrv;
    }
    Cargo::~Cargo()
    {
        cout << "Cargo destructor called\n";
    }
    void Cargo::setuldtype(string type)
    {
        uldtype = type;
    }
    void Cargo::setabbrev(string abrv)
    {
        abbrev = abrv;
    }
    void Cargo::setuldid(string did)
    {
        uldid = did;
    }
    string Cargo::getuldtype() const
    {
        return uldtype;
    }
    string Cargo::getabbrev() const
    {
        return abbrev;
    }
    string Cargo::getuldid() const
    {
        return uldid;
    }
    void Cargo::output(Cargo *cPtr)///need to output six pieces of data
    {
        cout << setw(19) << "Unit load type: " << getuldtype() << endl;
        cout << setw(19) << "Abbreviation: " << getabbrev() << endl;
        cout << setw(19) << "Unit load id: " << getabbrev() << getuldid() << endl;
        ///more output goes here
        cout << "-----------------------" << endl;
        return ;
    }
    void Cargo::input(Cargo *cPtr) ///need to input six pieces of data
    {
///local variables for load from keyboard
        string type;
        string abrv;
        string did;
        int plane;
        int wt;
        string dest;

        cout << "Please input load information\n";
        cout << "Container or Pallet?  ";
        //cin >> type;
        getline(cin,type);
        setuldtype(type);
        cout << "Please input abbreviation 3 characters ";
        getline(cin, abrv);
        setabbrev(abrv);
        cout << "Please input unit load id " << abrv;
        getline(cin, did);
        setuldid(did);
        return;
    }
