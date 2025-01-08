#include <iostream>
// int main()
// {
//     using namespace std;
//     cout << "come up to c++";
//     cout << endl;
//     cout << "you not know" << endl;
//     return 0;
// }

// int main()
// {
//     using namespace std;

//     int carrots;

//     carrots = 25;
//     cout << "I have ";
//     cout << carrots;
//     cout << " carrots." << endl;
//     carrots -= 1;
//     cout << "Crunch, now I have " << carrots << " carrots." << endl;
//     return 0;
// }

// int main()
// {
//     using namespace std;

//     int carrots;

//     cout << "How many carrots ?" << endl;
//     cin >> carrots;
//     cout << "Here are two more.";
//     carrots += 2;
//     cout << "Now you have " << carrots << " carrtos" << endl;
//     return 0;
// }

// #include <cmath>
// int main()
// {
//     using namespace std;

//     double area;
//     cout << "Enter the floor area: ";
//     cin >> area;
//     double side;
//     side = sqrt(area);
//     cout << "square " << side << " feet to the side" << endl;
//     cout << "how fascinating!" << endl;
//     return 0;
// }

// #include <cmath>
// int main()
// {
//     using namespace std;

//     double answer = pow(5.0, 3.0);
//     cout << answer << endl;
// }

// void simon(int);
// int main()
// {
//     using namespace std;

//     simon(3);
//     cout << "Pick an integer: ";
//     int count;
//     cin >> count;
//     simon(count);
//     cout << "Done!" << endl;
//     return 0;
// }

// void simon(int n)
// {
//     using namespace std;
//     cout << "Simon says toes " << n << " times." << endl;
// }

// int stonetolb(int);
// int main()
// {
//     using namespace std;
//     int stone;
//     cout << "Enter the weight in stone: ";
//     cin >> stone;
//     int pounds = stonetolb(stone);
//     cout << stone << " stone = ";
//     cout << pounds << " pounds." << endl;
//     return 0;
// }
// int stonetolb(int sts)
// {
//     return 14 * sts;
// }

// --------------------------------------
// 2 chapter 练习题

// int main()
// {
//     using namespace std;

//     cout << "折镜" << endl;
//     cout << "南京" << endl;
//     return 0;
// }

// int main()
// {
//     using namespace std;

//     cout << "输入距离：" << endl;
//     int distance;
//     cin >> distance;
//     int result = distance * 220;
//     cout << "结果：" << result << " 码" << endl;
//     return 0;
// }

// void mice();
// void run();
// int main()
// {
//     mice();
//     mice();
//     run();
//     run();
//     return 0;
// }
// void mice()
// {
//     std::cout << "Three blind mice" << std::endl;
// }
// void run()
// {
//     std::cout << "See how they run" << std::endl;
// }

// int main()
// {
//     std::cout << "输入年龄：" << std::endl;
//     int age;
//     std::cin >> age;
//     age = age * 12;
//     std::cout << "有：" << age << " 个月" << std::endl;
//     return 0;
// }

// double switch_celeius(double);
// int main()
// {
//     using namespace std;

//     cout << "Please enter a Celsius values: ";
//     double n;
//     cin >> n;
//     cout << n << " degrees Celsius is ";
//     n = switch_celeius(n);
//     cout << n << " degrees Fahrenheit." << endl;
//     return 0;
// }
// double switch_celeius(double celsius)
// {
//     double f = 1.8 * celsius + 32.0;
//     return f;
// }

// int main()
// {
//     using namespace std;

//     double light, au;
//     cout << "Enter the number of light years: ";
//     cin >> light;
//     au = light * 63240;
//     cout << light << " light years = " << au << " astronomy units." << endl;
//     return 0;
// }

// void show_time(int, int);
// int main()
// {
//     using namespace std;

//     int hour, minute;
//     cout << "Enter the number of hours: ";
//     cin >> hour;
//     cout << "Enter the number of minutes: ";
//     cin >> minute;
//     show_time(hour, minute);
//     return 0;
// }
// void show_time(int h, int m)
// {
//     std::cout << "Time: " << h << ":" << m << std::endl;
// }

// 2 chaputer over
// -----------------------------------------
// 3.数据处理

// #include <climits>
// int main()
// {
//     using namespace std;
//     int n_int = INT_MAX;        // 将n_int初始化为最大整数值
//     short n_short = SHRT_MAX;   // 在climits文件中定义的符号
//     long n_long = LONG_MAX;
//     long long n_llong = LLONG_MAX;

//     // sizeof运算符返回类型或变量的大小
//     cout << "int是" << sizeof (int) << "字节。" << endl;
//     cout << "short是" << sizeof n_short << "字节。" << endl;
//     cout << "long是" << sizeof n_long << "字节。" << endl;
//     cout << "long long是" << sizeof n_llong << "字节。" << endl;
//     cout << endl;

//     cout << "最大值：" << endl;
//     cout << "int: " << n_int << endl;
//     cout << "short: " << n_short << endl;
//     cout << "long: " << n_long << endl;
//     cout << "long long: " << n_llong << endl << endl;

//     cout << "最小int值 = " << INT_MIN << endl;
//     cout << "每字节的位数 = " << CHAR_BIT << endl;
//     // cin.get();
//     return 0;
// }

// #define ZERO 0     // makes ZERO symbol for 0 value
// #include <climits> // defines INT_MAX as largest int value
// int main()
// {
//     using namespace std;
//     short sam = SHRT_MAX;     // initialize a variable to max value
//     unsigned short sue = sam; // okay if variable sam already defined

//     cout << "Sam has " << sam << " dollars and Sue has " << sue;
//     cout << " dollars deposited." << endl
//          << "Add $1 to each account." << endl
//          << "Now ";
//     sam = sam + 1;
//     sue = sue + 1;
//     cout << "Sam has " << sam << " dollars and Sue has " << sue;
//     cout << " dollars deposited.\nPoor Sam!" << endl;
//     sam = ZERO;
//     sue = ZERO;
//     cout << "Sam has " << sam << " dollars and Sue has " << sue;
//     cout << " dollars deposited." << endl;
//     cout << "Take $1 from each account." << endl
//          << "Now ";
//     sam = sam - 1;
//     sue = sue - 1;
//     cout << "Sam has " << sam << " dollars and Sue has " << sue;
//     cout << " dollars deposited." << endl
//          << "Lucky Sue!" << endl;
//     // cin.get();
//     return 0;
// }



// int main()
// {
//     using namespace std;
//     int chest = 42;
//     int waist = 42;
//     int inseam = 42;

//     cout << "Mon......!" << endl;
//     cout << "chest = " << chest << " {decimal for 42}" << endl;
//     cout << hex;
//     cout << "waist = " << waist << " {hexadecimal for 42}" << endl;
//     cout << oct;
//     cout << "inseam = " << inseam << " {octal for 42}" << endl;
//     return 0;
// }



// int main()
// {
//     using namespace std; 
//     cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
//     float tub = 10.0 / 3.0;     // good to about 6 places
//     double mint = 10.0 / 3.0;   // good to about 15 places
//     const float million = 1.0e6;

//     cout << "tub = " << tub;
//     cout << ", a million tubs = " << million * tub;
//     cout << ",\nand ten million tubs = ";
//     cout << 10 * million * tub << endl;

//     cout << "mint = " << mint << " and a million mints = ";
//     cout << million * mint << endl;
//     // cin.get();
//     return 0;
// }



// int main()
// {
//     using namespace std;
//     float hats, heads;

//     cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
//     cout << "Enter a number: ";
//     cin >> hats;
//     cout << "Enter another number: ";
//     cin >> heads;

//     cout << "hats = " << hats << "; heads = " << heads << endl;
//     cout << "hats + heads = " << hats + heads << endl;
//     cout << "hats - heads = " << hats - heads << endl;
//     cout << "hats * heads = " << hats * heads << endl;
//     cout << "hats / heads = " << hats / heads << endl;
//     // cin.get();
//     // cin.get();
//     return 0;
// }


// int main()
// {
//     using namespace std;
//     const int Lbs_per_stn = 14;
//     int lbs;

//     cout << "Enter your weight in pounds: ";
//     cin >> lbs;
//     int stone = lbs / Lbs_per_stn;
//     int pounds = lbs % Lbs_per_stn;
//     cout << lbs << " pounds are " << stone << " stone, " << pounds << " pounds.\n";
//     return 0;
// }