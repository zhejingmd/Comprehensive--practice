#include <iostream>
using namespace std;

/*
    P5715
    给出三个整数a,b,c (0 ≤a,b,c ≤ 100)，要求把这三位整数从小到大排序
*/

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
        swap(a, b);
    if (b > c)
        swap(b, c);
    if (a > b)
        swap(a, b);
    cout << a << ' ' << b << ' ' << c;
}