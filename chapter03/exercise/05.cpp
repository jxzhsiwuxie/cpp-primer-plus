// 编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其它国家的人口）。将这些信息存储在 long long 变量中，
// 并让程序显示美股哦（或其它国家）的人口站全球人口的百分比。该程序的输出应与下面类似：
// Enter the world's population: 6898758899
// Enter the population of the US: 310783781
// The population of US is 4.50492% of the world population.

#include <iostream>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    long long total;
    long long china;

    cout << "输入全球总人口数：";
    cin >> total;

    cout << "输入中国总人口数：";
    cin >> china;

    cout << "中国总人口占全球总人口数的百分之 " << 100 * (double(china) / double(total)) << endl;

    return 0;
}