// 编写一个C++程序，它使用3个用户定义的函数（包括 main()），并生成下面的输出：
// Three blind mice
// Three blind mice
// See how they run
// See how they run
// ================================

#include <iostream>

void func1();
void func2();

int main()
{
    using namespace std;
    func1();
    func1();
    func2();
    func2();
    return 0;
}

void func1()
{
    using std::cout;
    using std::endl;

    cout << "Three blind mice" << endl;
}

void func2()
{
    using std::cout;
    using std::endl;

    cout << "See how they run" << endl;
}