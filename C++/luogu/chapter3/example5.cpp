#include <iostream>
using namespace std;

/*
    在洛谷上使用团队系统非常方便的添加自己的题目。如果在自己的电脑上配置题目和测试数据，每题需要花费时间5分钟；
    而在洛谷团队中上传私有题目，每题只需要花费3分钟，但是上传题目之前还需要一次性花费 11 分钟创建与配置团队。
    现在要配置 n 道题目，如果本地配置花费的总时间短，请输出Local，否则输出Luogu。
*/

int main()
{
    int n, x, y;
    cin >> n;
    x = 5 * n;
    y = 3 * n + 11;
    if (x > y)
        cout << "Luogu" << endl;
    else
        cout << "Local" << endl;
    // (x > y) ? "Luogu" : "Local"; 
    return 0;
}