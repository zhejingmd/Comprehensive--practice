#include <iostream>
#include <cstdio>
using namespace std;

// P1422
// int main(){
// 	int expense; double ans = 0;
//     const double LOW =  0.4463, MID = 0.4663, HIGH = 0.5663;
//     cin >> expense;
//     if (expense <= 150)
//         ans = expense * LOW;
//     else if (expense > 150 && expense <= 400)
//         ans = 150 * LOW + (expense - 150) * MID;
//     else
//         ans = 150 * LOW + 250 * MID + (expense - 400) * HIGH;
//     printf("%.1f\n", ans);
//     return 0;
// }

/*
    P1424
    有一只小鱼，它平日每天游泳 250 公里，周末休息（实行双休日)，
    假设从周 x 开始算起，过了n 天以后，小鱼一共累计游泳了多少公里呢?
*/
// int main()
// {
//     int begin, n;
//     int sum = 0;   // 记录游泳的总公里
//     int count = 0; // 记录已过天数
//     cin >> begin >> n;
//     // i标记当前星期几
//     int i = begin;
//     while (count < n)
//     {
//         // 双休日不游泳总公里加0
//         if (i == 6 || i == 7)
//             sum += 0;
//         else
//             sum += 250;
//         count++;
//         i++;
//         // 星期有效数是1~7所以大于7的时候需要取余七
//         if (i > 7)
//             i %= 7;
//     }
//     cout << sum << endl;
//     return 0;
// }


/*
    P1888
*/
// #include <algorithm>
// int gcd(int x, int y)
// {
//     int z;
//     while (x % y != 0)
//     {
//         z = x % y;
//         x = y;
//         y = z;
//     }
//     return z;
// }

// int main()
// {
//     int arr[3], i;
//     for (i = 0; i < 3; i++)
//         cin >> arr[i];
//     sort(arr, arr+3);
//     cout << arr[0]/gcd(arr[0], arr[2]) << "/" << arr[2]/gcd(arr[0], arr[2]);
//     return 0;
// }


/*
    P1046
*/
// int main()
// {
//     int arr[10];
//     for (int i = 0; i < 10; i++)
//         cin >> arr[i];

//     int max_hand;
//     cin >> max_hand;

//     max_hand += 30;
//     int count = 0;
//     for (int j = 0; j < 10; j++)
//     {
//         if (max_hand >= arr[j])
//             count++;
//     }
//     cout << count << endl;
//     return 0;
// }



/*
    P5717
*/
// #include <algorithm>
// int main()
// {
//     int arr[3], a, b, c;
//     for (int i = 0; i < 3; i++)
//         cin >> arr[i];

//     sort(arr, arr+3);

//     a = arr[0], b = arr[1], c = arr[2];
//     if (a == 0 || b == 0 || c == 0 || a + b <= c)
//         cout << "Not triangle" << endl;
//     else
//     {
//         if (a * a + b * b == c * c)
//             cout << "Right triangle" << endl;
//         if (a * a + b * b > c * c)
//             cout << "Acute triangle" << endl;
//         if (a * a + b * b < c * c)
//             cout << "Obtuse triangle" << endl;
//         if (a == b)
//             cout << "Isosceles triangle" << endl;
//         if (a == b && a == c)
//             cout << "Equilateral triangle" << endl;
//     }
//     return 0;
// }



/*
    P4414
*/
// #include <algorithm>
// int main()
// {
//     int arr[3];
//     char a, b, c;

//     cin >> arr[0] >> arr[1] >> arr[2];
//     cin >> a >> b >> c;

//     sort(arr, arr+3);
//     cout << arr[a-'A'] << " " << arr[b-'A'] << " " << arr[c-'A'] << endl;
//     return 0;
// }