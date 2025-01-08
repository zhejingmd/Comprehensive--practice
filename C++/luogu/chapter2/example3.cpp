#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.141593

int main()
{
    int r1 = 4, r2 = 10;
    double volume, length;
    volume = 4.0 / 3 * PI * (pow(r1, 3) + pow(r2, 3));
    length = pow(volume, 1.0 / 3);
    cout << int(length) << endl;
    return 0;
}