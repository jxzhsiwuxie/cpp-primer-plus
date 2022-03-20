// 编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。
// 1度等于60分，1分等于60秒，轻易符号常量的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。
// 下面是该程序运行时的情况。
// Enter a latitude in degress, minutes, and seconds
// First, enter the degrees: 37
// Next, enter the minutes of arc: 51
// Finally, enter the seconds of arc: 19
// 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees

#include <iostream>

int main()
{
    using namespace std;
    const int MINUTES_PER_DEGREE = 60;
    const int SECONDS_PER_MINUTE = 60;

    int degrees, minutes, seconds;
    cout << "Enter a latitude in degress, minutes, and seconds" << endl;

    cout << "First, enter the degrees: ";
    cin >> degrees;

    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;

    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
    cout << degrees + ((double(minutes)) + (double(seconds) / 60)) / 60;
    cout << " degrees." << endl;

    return 0;
}