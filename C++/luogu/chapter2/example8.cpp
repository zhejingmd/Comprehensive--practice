#include <cstdio>
using namespace std;

/*
������ t ������լ����ˮ��Ҫ���ָ� n ��ͬѧ��ÿ��ͬѧ��Ҫ2�����ӡ�
������֪��ÿ��ͬѧ���Ի�ö��ٺ������ϣ��ϸ�ȷ��С�����3λ�����Լ�һ����Ҫ���ٸ����ӡ�
*/

int main()
{
    double water;
    int num;

    scanf("%lf%d", &water, &num);
    printf("%.3f\n%d", water / num, num * 2);
    return 0;
}