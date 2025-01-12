// 2章顺序结构的课后习题

/*  2-2
    一个三角形的三边长分别是a、b、c，那么它的面积为 √p(p－a)(p－b)(p－c)，其中p =1/2*(a +b+c)。
    输入这三个数字，计算三角形的面积，四舍五入精确到1位小数。
*/
// #include <iostream>
// #include <cstdio>
// #include <cmath>
// using namespace std;
// int main()
// {
//     double a, b, c, p, ans;
//     cin >> a >> b >> c;
//     p = (a + b + c) / 2;
//     ans = sqrt(p*(p-a)*(p-b)*(p-c));
//     printf("%.1f", ans);
//     return 0;
// }


/*  2-4
    猜测代码结果
*/
// #include <cstdio>
// using namespace std;
// int main()
// {
//     float a = 0.1;
//     printf("%.10f\n", 2-a*a*100);   // 0.999999999
//     printf("%d", int(2-a*a*100));   // 0
//     return 0;
// }



/*  2-5
    班主任给小玉一个任务，到文具店里买尽量多的签字笔。已知一只签字笔的价格是 1元 9角，
    而班主任给小玉的钱是 a元 b角，小玉想知道，她最多能买多少只签字笔呢?
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, balance, price, ans;
//     cin >> a >> b;
//     price = 10 + 9;         // 一支笔的单价
//     balance = a * 10 + b;   // 共有的钱
//     ans = balance / price;
//     cout << ans << endl;
//     return 0;
// }



/*  2-6
    小B喜欢吃苹果,她现在有m（1≤ m ≤100）个苹果，吃完一个苹果需要花费t（0≤ t ≤100）分钟，吃完一个后立刻开始吃下一个
    现在时间过去了s（1≤ s ≤10000）分钟，请问她还有几个完整的苹果?
*/
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int m, t, s, ans;
//     cin >> m >> t >> s;
//     int spend_time = m * t;
//     ans = (s - spend_time);
//     if (ans > 0)
//     {
//         cout << 0 << endl;
//     }
//     else
//     {
//         cout << abs(ans / t) << endl;
//     }
//     return 0;
// }



/*  2-7
    对于一个有N(N<=100000)个顶点的凸多边形，它的任何三条对角线都不会交于一点
    请求出这个多边形内部对角线交点的个数
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     unsigned long long n;
//     cin >> n;
//     cout << n*(n-1)/2*(n-2)/3*(n-3)/4 << endl;
//     return 0;
// }