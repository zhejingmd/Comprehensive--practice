#include <iostream>

using namespace std;

/*
    С B ϲ����ƻ����������Ե��� x ��ƻ����
    ��������� 1 ��ƻ��������� Today, I ate 1 apple.�����û�гԣ���ô�Ͱ� 1 ���� 0��
    ��������˲�ֹһ��ƻ���������� apple ������ʺ���Ҫ���ϴ������� s
    ���ܰ���������������
*/

int main()
{
    int x;
    cin >> x;
    cout << "Today, I ate " << x << " apple";
    if (x != 0 && x != 1)
    {
        cout << "s";
    }
    cout << "." << endl;
    return 0;
}