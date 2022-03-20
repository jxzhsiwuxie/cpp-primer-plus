// 编写一个小程序，要求用户用一个整数指出自己的身高（单位为英寸），然后将身高转为英尺和英寸。
// 该程序使用下划线字符来指出输入位置。另外，使用一个const符号常量来表示转换因子。

#include <iostream>

int main()
{
    using namespace std;
    const int INCH_PER_FOOT = 12;

    int heightInInch;
    cout << "输入身高（英寸）：___\b\b\b";
    cin >> heightInInch;

    cout << "身高 " << heightInInch << " 英寸，折合 " << heightInInch / INCH_PER_FOOT << " 英尺 " << heightInInch % INCH_PER_FOOT << " 英寸。" << endl;

    return 0;
}