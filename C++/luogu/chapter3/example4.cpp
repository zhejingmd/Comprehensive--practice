#include <iostream>

using namespace std;

/*
    小 B 喜欢吃苹果。她今天吃掉了 x 个苹果。
    如果她吃了 1 个苹果，就输出 Today, I ate 1 apple.如果她没有吃，那么就把 1 换成 0；
    如果她吃了不止一个苹果，别忘了 apple 这个单词后面要加上代表复数的 s
    你能帮她完成这个句子吗？
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