#include <iostream>
using namespace std;

// solution 1
int main()
{
    double n;   // ���������
    int x, a, b, c, d;  // ת�����4λ�� �� ���������4λ����
    cin >> n;
    x = int(n * 10);
    a = x / 1000;       // ǧλ
    b = x / 100 % 10;   // ��λ
    c = x / 10 % 10;    // ʮλ
    d = x % 10;         // ��λ
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