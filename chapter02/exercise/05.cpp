// 编写一个程序，其中的main()调用用户定义的函数（以摄氏温度值为参数，并返回相应的华氏温度值）。
// 该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
// Please enter a Celsius value: 20
// 20 degrees Celsius is 68 degree Fahrenheit.
// 下面是转换公式：
// 华氏温度 = 1.8x摄氏温度 + 32.0
// ================================

#include <iostream>

double convert(double);

int main()
{
    using namespace std;
    double celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << convert(celsius) << " degree Fahrenheit." << endl;

    return 0;
}

double convert(double celsius)
{
    return celsius * 1.8 + 32.0;
}