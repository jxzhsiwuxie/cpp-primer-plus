#include <iostream>

int stontolb(int);

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stontolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;

    return 0;
}

int stontolb(int sts)
{
    return sts * 14;
}