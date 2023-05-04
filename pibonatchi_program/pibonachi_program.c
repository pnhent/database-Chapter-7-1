//이름: 박노현
//학번: 202010553
//문제: 피보나치 수열 순환 또는 반복 시간 비교
//실습일: 20230504

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int fib(int n)
{
    if( n == 0) return 0;
    if( n == 1) return 1;
    return (fib(n-1) + fib(n-2));
}

int fib_iter(int n)
{
    int i, temp, current, last;
    if(n < 2) return n;
    else
    {
        last = 0;
        current = 1;
        for(i = 2; i <= n; i++)
        {
            temp = current;
            current += last;
            last = temp;
        }
        return current;
    }
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
    ret1 = fib(n);
    finish = clock();
    duration = (double)(finish-clock_t_start) / CLOCKS_PER_SEC;
    printf("Recurison (fib %d) : %lf \n", n, ret1);
    printf("%f 초입니다.\n", duration);

    clock_t_start = clock();
    ret1 = fib_iter(n);
    finish = clock();
    duration = (double)(finish-clock_t_start) / CLOCKS_PER_SEC;
    printf("iteration (fib %d) : %lf \n", n, ret1);
    printf("%f 초입니다. \n", duration);
    return 0; 
}