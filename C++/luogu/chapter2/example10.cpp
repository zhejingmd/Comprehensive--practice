#include <iostream>
using namespace std;

/*
��һ�죬С����Լ�����Ӿʱ�����˾�ȷ�ļ�ʱ�������еļ�ʱ���� 24Сʱ�Ƽ��㣩���������Լ��� a ʱ b ��һֱ��Ӿ�������cʱd�֣�
�����С�����һ�£�������һ�����˶���ʱ���أ�
(һ���������ĸ�����)
*/
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int delta, e, f;
    delta = (60 * c + d) - (60 * a + b);    // ת��Ϊ����ͳһ����
    e = delta / 60;     // Сʱ
    f = delta % 60;     // ����
    cout << e << " " << f << endl;
    return 0;
}