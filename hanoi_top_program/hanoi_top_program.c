//이름: 박노현
//학번: 202010553
//문제: 하노이 탑 문제 프로그램
//실습일: 20230504

#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to)
{
    if( n == 1)
        printf("원판 1을 %c에서 %c로 옮긴다.\n", n, from, to);
    else
    {
        hanoi_tower(n-1, from, to, tmp);
        printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);
        hanoi_tower(n-1, tmp, from, to);
    }
}

int main(void)
{
    hanoi_tower(4, 'A', 'B', 'C');
    return 0;
}