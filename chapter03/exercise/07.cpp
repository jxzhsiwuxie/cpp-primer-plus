// 编写一个程序，要求用户按照欧洲风格输入汽车耗油量（即每100公里消耗的汽油量（升）），然后将其转化为美国风格的耗油量——每加仑多少英里。
// 注意，除了使用不同的单位计量外，美国方法（距离/燃料）与欧洲方法（燃料/距离）相反。100公里等于62.14英里，1加仑等于3.875升。
// 因此，19mpg大约合12.4l/100km，127mpg大约合8.7l/100km

#include <iostream>

int main()
{
    using namespace std;
    double measurementOfUK, measurementOfUS;

    cout << "输入欧洲风格的汽车油耗量（升/100公里）：";
    cin >> measurementOfUK;

    measurementOfUS = 3.875 * 62.14 / measurementOfUK;

    cout << measurementOfUK << "升/100公里 = " << measurementOfUS << "英里/加仑" << endl;

    return 0;
}