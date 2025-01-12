#include <iostream>
using namespace std;

/*
    P1085
*/

int main()
{
    int t1, t2, max_time = 8, max_day = 0;
    for (int i = 1; i < 8; i++)
    {
        cin >> t1 >> t2;
        if ((t1 + t2) > max_time)
            max_time = t1 + t2, max_day = i;
    }
    cout << max_day << endl;
    return 0;
}