#include <iostream>
using namespace std;

/*
    P5716
    ������ݺ��·ݣ������һ�����һ���ж����졣��Ҫ��������
*/

int main()
{
    int arr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month;
    cin >> year >> month;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) // �޸��������ж�����
        arr[2] = 29;
    
    cout << arr[month];
    return 0;
}