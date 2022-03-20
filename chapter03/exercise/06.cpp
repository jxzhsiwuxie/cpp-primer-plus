// 编写一个额程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），然后指出汽车耗油量为一加仑的里程。
// 如果愿意，也可以要求用户以公里为单位输入距离，并以升为单位输入汽油量，然后指出欧洲风格的结果——即每100公里的耗油量（升）。

#include <iostream>

int main()
{
    using namespace std;
    double distance, gas;

    cout << "输入汽车里程（公里）：";
    cin >> distance;

    cout << "输入耗油量（升）：";
    cin >> gas;

    cout << "汽车耗油量为 " << 100 * gas / distance << " 升每100公里" << endl;

    return 0;
}