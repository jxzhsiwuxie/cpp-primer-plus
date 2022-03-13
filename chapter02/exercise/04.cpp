// 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少的月，如下所示：
// Enter your age: 29
// ================================

#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter you age: ";
    int age;
    cin >> age;
    cout << age << " 岁 = " << age * 12 << " 个月" << endl;

    return 0;
}