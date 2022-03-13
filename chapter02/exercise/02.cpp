//编写一个C++程序，它要求输入一个以long为单位的距离，然乎将它转为码（一long等于220码）

#include <iostream>

int main()
{
    using namespace std;

    int longCount;
    cout << "输入一个距离，以 long 为单位：";
    cin >> longCount;
    cout << longCount << " long = " << longCount * 220 << " 码" << endl;

    return 0;
}