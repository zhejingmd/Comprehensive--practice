// 2��˳��ṹ�Ŀκ�ϰ��

/*  2-2
    һ�������ε����߳��ֱ���a��b��c����ô�������Ϊ ��p(p��a)(p��b)(p��c)������p =1/2*(a +b+c)��
    �������������֣����������ε�������������뾫ȷ��1λС����
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
    �²������
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
    �����θ�С��һ�����񣬵��ľߵ����������ǩ�ֱʡ���֪һֻǩ�ֱʵļ۸��� 1Ԫ 9�ǣ�
    �������θ�С���Ǯ�� aԪ b�ǣ�С����֪����������������ֻǩ�ֱ���?
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, balance, price, ans;
//     cin >> a >> b;
//     price = 10 + 9;         // һ֧�ʵĵ���
//     balance = a * 10 + b;   // ���е�Ǯ
//     ans = balance / price;
//     cout << ans << endl;
//     return 0;
// }



/*  2-6
    СBϲ����ƻ��,��������m��1�� m ��100����ƻ��������һ��ƻ����Ҫ����t��0�� t ��100�����ӣ�����һ�������̿�ʼ����һ��
    ����ʱ���ȥ��s��1�� s ��10000�����ӣ����������м���������ƻ��?
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
    ����һ����N(N<=100000)�������͹����Σ������κ������Խ��߶����ύ��һ��
    ��������������ڲ��Խ��߽���ĸ���
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