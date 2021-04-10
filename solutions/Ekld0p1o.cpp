/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    for(int i = 1; i <= 10; ++i)
    {
        for(int j = 2; j <= 9; ++j)
        {
            printf("%c %d x %2d = %2d", 179, j, i, i * j);
        }
        printf("%c\n", 179);
    }

    getch();
    return 0;
}