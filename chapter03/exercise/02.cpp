// 编写一个小程序，要求以几英尺几英寸的方式输入身高，并以磅为单位输入其体重。（使用3个变量来储存这些信息。）
// 该程序报告其BMI（Body Mass Index，体重指数）。为了计算BMI，该程序以英寸的方式指出用户的身高（1英尺为12英寸），
// 并将以英寸为单位的身高转换为以米为单位的身高（1英寸=0.0254米）。然后将以磅为单位的体重转为以千克为单位的体重（1千克=2.2磅）。
// 最后，计算相应的BMI——体重（千克）除以身高（米）的平方。用符号常量表示各种转换因子。

#include <iostream>

int main()
{
    using namespace std;
    const int INCH_PER_FOOT = 12;
    const double METER_PER_INCH = 0.0254;
    const double POUND_PER_KILOGRAM = 2.2;

    int heightFoot, heightInch;
    double weightPound;

    cout << "输入升高几英尺：";
    cin >> heightFoot;

    cout << "输入身高几英寸：";
    cin >> heightInch;

    cout << "输入体重多少磅：";
    cin >> weightPound;

    double h = (heightFoot * INCH_PER_FOOT + heightInch) * METER_PER_INCH;
    double w = weightPound / POUND_PER_KILOGRAM;
    
    cout << "BMI = " << w / (h * h) << endl;

    return 0;
}