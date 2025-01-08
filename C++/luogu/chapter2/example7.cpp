#include <iostream>
using namespace std;

// solution 1
int main()
{
    double n;   // 输入的数字
    int x, a, b, c, d;  // 转换后的4位数 和 分离出来的4位数字
    cin >> n;
    x = int(n * 10);
    a = x / 1000;       // 千位
    b = x / 100 % 10;   // 百位
    c = x / 10 % 10;    // 十位
    d = x % 10;         // 个位
    cout << d << "." << c << b << a << endl;
    return 0;
}

// solution 2
// int main()
// {
//     char a, b, c, dot , d;
//     cin >> a >> b >> c >> dot >> d;
//     cout << d << dot << c << b << a << endl;
//     return 0;
// }