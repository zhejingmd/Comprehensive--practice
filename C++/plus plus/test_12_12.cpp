#include <iostream>



// int main()
// {
//     using namespace std;
//     // 12英寸 = 1英尺
//     cout << "输入身高(英寸)：";
//     int high;
//     cin >> high;
//     int f_high;
//     const int switch_ac = 12;
//     f_high = high / switch_ac;
//     high %= switch_ac;
//     cout << "转换后 " << f_high << " 英尺 " << high << "英寸" << endl;
//     return 0;
// }



// int main()
// {
//     using namespace std;

//     const int switch_yc = 12;
//     const float switch_m = 0.0254;
//     const float switch_b = 2.2;
//     int chi, cun;
//     float wight;
//     cout << "输入身高(英尺和英寸)：";
//     cin >> chi >> cun;
//     cout << "输入体重(磅)：";
//     cin >> wight;

//     double BMI, hight;
//     hight = (chi * switch_yc + cun) * switch_m;
//     wight /= switch_b;
//     BMI = wight / (hight * hight);
//     cout << "身高：" << hight << endl;
//     cout << "体重：" << wight << endl;
//     cout << "BMI: " << BMI << endl;
//     return 0;
// }



// int main()
// {
//     using namespace std;

//     const double s_degree = 60;
//     const double s_min = 60;

//     double degree, min, s;
//     cout << "输入度、分、秒：";
//     cin >> degree >> min >> s;

//     double formal;
//     formal = degree + min / s_degree + s / s_min / s_degree;

//     cout << degree << " degrees, " << min << " min, " << s << " s = " << formal << " degrees" << endl;
//     return 0;
// }
