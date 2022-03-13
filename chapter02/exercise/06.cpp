// 编写一个程序，其中main()调用用户定义的函数（以光年值为参数，并返回对应天文单位的值）。
// 该程序按下面的格式要求用户输入光年值，并显示结果：
// Enter the number of light years: 4.2
// 4.2 light years = 265608 astronomical units.
// 天文单位是从地球到太阳的平均距离（约 150000000 公里或 93000000 英里），
// 光年是光一年走的距离（约 10 万亿公里或 6 万亿英里）（除太阳外，最近的恒星大约距离地球4.2光年）。
// 请使用double类型（参照程序清单2.4）转换公式为：
// 1光年=63240天文单位
// ================================

#include <iostream>

double convert(double);

int main()
{
    using namespace std;
    cout << "Enter the number of light years: ";
    double lightYears;
    cin >> lightYears;
    cout << lightYears << " light years = " << convert(lightYears) << " astronomical units." << endl;
    return 0;
}

double convert(double lightYears)
{
    return lightYears * 63240;
}