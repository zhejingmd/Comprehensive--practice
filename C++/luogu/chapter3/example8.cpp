#include <iostream>
using namespace std;

/*
    P5715
    ������������a,b,c (0 ��a,b,c �� 100)��Ҫ�������λ������С��������
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