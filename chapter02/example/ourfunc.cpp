#include <iostream>

void simon(int);

int main()
{
    using namespace std;
    simon(3);
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;

    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "Simon say touch your toes " << n << " times." << endl;
}