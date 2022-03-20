// 编写一个程序，要求用户以整数的方式输入秒数（使用 long 或 long long 变量存储），然后以天、小时、分钟和秒的方式显示这段事件。
// 使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒。该程序的输出应与下面类似。
// Enter the number of seconds: 31600000
// 331600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds

#include <iostream>

int main()
{
    using namespace std;

    const int SECONDS_PER_MINUTES = 60;
    const int MINUTES_PER_HOUR = 60;
    const int HOURS_PER_DAY = 24;

    long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    const long minutes = seconds / SECONDS_PER_MINUTES;
    const long hours = minutes / MINUTES_PER_HOUR;
    const long days = hours / HOURS_PER_DAY;

    cout << seconds << " seconds = " << days << " days, ";
    cout << hours - days * HOURS_PER_DAY << " hours, ";
    cout << minutes - hours * MINUTES_PER_HOUR << " minutes, ";
    cout << seconds - minutes * MINUTES_PER_HOUR << " seconds" << endl;

    return 0;
}