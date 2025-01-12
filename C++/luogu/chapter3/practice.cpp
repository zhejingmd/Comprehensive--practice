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
    ��һֻС�㣬��ƽ��ÿ����Ӿ 250 �����ĩ��Ϣ��ʵ��˫����)��
    ������� x ��ʼ���𣬹���n ���Ժ�С��һ���ۼ���Ӿ�˶��ٹ�����?
*/
// int main()
// {
//     int begin, n;
//     int sum = 0;   // ��¼��Ӿ���ܹ���
//     int count = 0; // ��¼�ѹ�����
//     cin >> begin >> n;
//     // i��ǵ�ǰ���ڼ�
//     int i = begin;
//     while (count < n)
//     {
//         // ˫���ղ���Ӿ�ܹ����0
//         if (i == 6 || i == 7)
//             sum += 0;
//         else
//             sum += 250;
//         count++;
//         i++;
//         // ������Ч����1~7���Դ���7��ʱ����Ҫȡ����
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