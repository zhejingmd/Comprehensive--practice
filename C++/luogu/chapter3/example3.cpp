#include <iostream>
using namespace std;

/*
    ����һ����ݣ��ж���һ���Ƿ������꣬��������1���������0
*/

int main()
{
    int year; bool ans;
    cin >> year;
    ans = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
    cout << ans << endl;
    return 0;
}