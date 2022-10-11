/*
Justin Natividad
January 11th, 2021
Lab 2.2

*/
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
          const string abbrev,
          const string uldid,
          // Added code from Justin Natividad
          const int aircraft,
          const int weight,
          const string destination);///full constructor, needs more info

    ///Destructor prototype
    ~Cargo();
    ///Mutator (setters) prototypes, six needed
    void setuldtype(string);
    void setabbrev (string);
    void setuldid(string);
    // Added code from Justin Natividad
    void setaircraft(int);
    void setweight(int);
    void setdestination(string);

    ///Accessor (getters) prototypes, six needed
    string getuldtype() const;
    string getabbrev() const;
    string getuldid() const;
    // Added code from Justin Natividad
    int getaircraft() const;
    int getweight() const;
    string getdestination() const;

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
        uldid = "none";
        // Added code from Justin Natividad
        aircraft = NULL;
        weight = NULL;
        destination = "none";
    }
///constructor needs to take six parameters
    Cargo::Cargo(const string type,
                 const string abrv,
                 const string did,
                 // Added code from Justin Natividad
                 const int plane,
                 const int wt,
                 const string dest)
    {
        uldtype = type;
        abbrev = abrv;
        // Added code from Justin Natividad
        uldid = did;
        aircraft = plane;
        weight = wt;
        destination = dest;
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
    // Added code from Justin Natividad
    void Cargo::setaircraft(int plane)
    {
        aircraft = plane;
    }
    void Cargo::setweight(int wt)
    {
        weight = wt;
    }
    void Cargo::setdestination(string dest)
    {
        destination = dest;
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
    // Added code from Justin Natividad
    int Cargo::getaircraft() const
    {
        return aircraft;
    }
    int Cargo::getweight() const
    {
        return weight;
    }
    string Cargo::getdestination() const
    {
        return destination;
    }

    void Cargo::output(Cargo *cPtr)///need to output six pieces of data
    {
        cout << setw(19) << "Unit load type: " << getuldtype() << endl;
        cout << setw(19) << "Abbreviation: " << getabbrev() << endl;
        cout << setw(19) << "Unit load id: " << getuldid() << endl;
        // Added code from Justin Natividad
        cout << setw(19) << "Plane type: " << getaircraft() << endl;
        cout << setw(19) << "Unit weight: " << getweight() << endl;
        cout << setw(19) << "Destination Code: " << getdestination() << endl;
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
        // Added code from Justin Natividad
        cout << "Please input Aircraft type ";
        cin >> plane;
        setaircraft(plane);
        cout << "Please input weight ";
        cin >> wt;
        setweight(wt);
        cout << "Please input destination code ";
        cin >> dest;
        setdestination(dest);


        return;
    }
