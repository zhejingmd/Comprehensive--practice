#include <iostream>
using namespace std;

/*
这一天，小鱼给自己的游泳时间做了精确的计时（本题中的计时都按 24小时制计算），它发现自己从 a 时 b 分一直游泳到当天的c时d分，
请你帮小鱼计算一下，它这天一共游了多少时间呢？
(一行内输入四个整数)
*/
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int delta, e, f;
    delta = (60 * c + d) - (60 * a + b);    // 转换为分钟统一计算
    e = delta / 60;     // 小时
    f = delta % 60;     // 分钟
    cout << e << " " << f << endl;
    return 0;
}