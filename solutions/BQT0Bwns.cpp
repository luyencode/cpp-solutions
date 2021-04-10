/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    for(i = 1; i < 100; i+=2)
    {
        if((i == 5) || (i == 7) || (i == 93))
            continue;
        printf("%5d", i);
    }
    getch();
    return 0;
}