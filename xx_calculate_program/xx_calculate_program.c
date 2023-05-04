//�̸�: �ڳ���
//�й�: 202010553
//����: �ŵ����� ��ȯ �Ǵ� �ݺ��� ���� �ð� ���
//�ǽ���: 20230504

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

double slow_power(double x, int n)
{
    int i;
    double result = 1.0;
    for(i = 0; i < n; i++)
        result = result * x;
    return result;
}

double power(double x, int n)
{
    if(n == 0) return 0;
    else if( (n%2)==0 )
        return power(x*x, n/2);
    else
        return x*power(x*x, (n-1)/2);
}

int main(void)
{
    int ret, n;
    int clock_t_start, finish;
    double duration;
    double ret1;

    printf("please enter a number > > ");
    scanf("%d", &n);

    clock_t_start = clock();
    ret1 = power(2,n);
    finish = clock();
    duration = (double)(finish-clock_t_start) / CLOCKS_PER_SEC;
    printf("Recurison (power %d) : %lf \n", n, ret1);
    printf("%f ���Դϴ�.\n", duration);

    clock_t_start = clock();
    ret1 = slow_power(2, n);
    finish = clock();
    duration = (double)(finish-clock_t_start) / CLOCKS_PER_SEC;
    printf("iteration (power %d) : %lf \n", n, ret1);
    printf("%f ���Դϴ�. \n", duration);
    return 0; 
}