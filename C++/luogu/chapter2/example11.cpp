#include <iostream>
using namespace std;

/*
    牛牛最近学习了C++入门课程，这门课程的总成绩计算方法是：
            总成绩=作业成绩× 20%+小测成绩×30%+期末考试成绩×50%
    牛牛想知道，这门课程自己最终能得到多少分
*/

int main()
{
    int a, b, c, ans;
    cin >> a >> b >> c;
    ans = a * 0.2 + b * 0.3 + c * 0.5 + 0.5;
    cout << int(ans) << endl;
    return 0;
}