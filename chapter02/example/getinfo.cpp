#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many ccarrots do youu have?" << endl;
    cin >> carrots;
    cout << "Here are two more. ";
    carrots = carrots + 2;
    cout << "Now youu have " << carrots << " carrots." << endl;

    return 0;
}