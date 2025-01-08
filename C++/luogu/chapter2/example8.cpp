#include <cstdio>
using namespace std;

/*
现在有 t 毫升肥宅快乐水，要均分给 n 名同学。每名同学需要2个杯子。
现在想知道每名同学可以获得多少毫升饮料（严格精确到小数点后3位），以及一共需要多少个杯子。
*/

int main()
{
    double water;
    int num;

    scanf("%lf%d", &water, &num);
    printf("%.3f\n%d", water / num, num * 2);
    return 0;
}