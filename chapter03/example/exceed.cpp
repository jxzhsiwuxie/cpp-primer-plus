#include <iostream>
#include <limits>
#define ZERO 0

int main()
{
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam haas " << sam << " doolars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl
         << "Now ";
    sam = sam + 1;
    sue = sue + 1;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars desposited.\nPoor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;

    cout << "Sam haas " << sam << " doolars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Take $1 from each account." << endl
         << "Now ";

    sam = sam - 1;
    sue = sue - 1;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars desposited." << endl
         << "Lucky sue" << endl;

    return 0;
}