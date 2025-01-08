#include <iostream>
using namespace std;

/*
    一些整数可能拥有以下的性质：
        ·性质 1：是偶数;
        ·性质 2：大于4且不大于12。
    小A 喜欢这两个性质同时成立的整数；
    Uim喜欢这至少符合其中一种性质的整数；
    小B 喜欢刚好有符合其中一个性质的整数；
    正妹喜欢不符合这两个性质的整数
    现在给出一个整数a，请问他们是否喜欢这个整数?
*/

int main()
{
    int x; bool p1, p2;
    cin >> x;
    p1 = x % 2 == 0;
    p2 = 4 < x && x <= 12;
    cout << (p1 && p2) << ' ';
    cout << (p1 || p2) << ' ';
    cout << (p1 ^ p2) << ' ';
    cout << (!p1 && !p2) << endl;
    return 0;
}