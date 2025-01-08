#include <cstdio>
#include <cmath>
using namespace std;

/*
    学校和 yyy 的家之间的距离为 s 米，而 yyy 以 v 米每分钟的速度匀速走向学校。
    在上学的路上，yyy 还要额外花费10 分钟的时间进行垃圾分类。
    学校要求必须在上午 8:00 到达，请计算在不迟到的前提下，yyy 最晚能什么时候出门。
    由于路途遥远，yyy可能不得不提前一点出发，但是提前的时间不会超过一天。
*/

int main()
{
    int s, v, delta;
    scanf("%d %d", &s, &v);
    delta = ceil(1.0 * s / v) + 10;  // 走到学校花费的时间
    int time_zero = 60 * (24 + 8) - delta;  // 计算到前一天零点的时间
    int h = (time_zero / 60) % 24;
    int m = time_zero % 60;
    printf("%02d:%02d\n", h, m);
    return 0;
}