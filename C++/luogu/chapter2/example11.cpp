#include <iostream>
using namespace std;

/*
    ţţ���ѧϰ��C++���ſγ̣����ſγ̵��ܳɼ����㷽���ǣ�
            �ܳɼ�=��ҵ�ɼ��� 20%+С��ɼ���30%+��ĩ���Գɼ���50%
    ţţ��֪�������ſγ��Լ������ܵõ����ٷ�
*/

int main()
{
    int a, b, c, ans;
    cin >> a >> b >> c;
    ans = a * 0.2 + b * 0.3 + c * 0.5 + 0.5;
    cout << int(ans) << endl;
    return 0;
}