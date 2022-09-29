#include <iostream>
#include <string>
using namespace std;

class student {
    public:
    string sname;
    int sid;
};

int main() {
    student S;
    S.sname = "Justin";
    S.sid = 19;
    // Accessing Record
    cout << S.sname << " " << S.sid << endl;

    // Update Record values
    S.sid = 25;
    cout << S.sname << " " << S.sid;

    return 0;
}