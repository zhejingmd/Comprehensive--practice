#include <cstdio>
#include <cmath>
using namespace std;

/*
    ѧУ�� yyy �ļ�֮��ľ���Ϊ s �ף��� yyy �� v ��ÿ���ӵ��ٶ���������ѧУ��
    ����ѧ��·�ϣ�yyy ��Ҫ���⻨��10 ���ӵ�ʱ������������ࡣ
    ѧУҪ����������� 8:00 ���������ڲ��ٵ���ǰ���£�yyy ������ʲôʱ����š�
    ����·;ңԶ��yyy���ܲ��ò���ǰһ�������������ǰ��ʱ�䲻�ᳬ��һ�졣
*/

int main()
{
    int s, v, delta;
    scanf("%d %d", &s, &v);
    delta = ceil(1.0 * s / v) + 10;  // �ߵ�ѧУ���ѵ�ʱ��
    int time_zero = 60 * (24 + 8) - delta;  // ���㵽ǰһ������ʱ��
    int h = (time_zero / 60) % 24;
    int m = time_zero % 60;
    printf("%02d:%02d\n", h, m);
    return 0;
}