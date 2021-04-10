/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char kytu;
    for(kytu = 'A'; kytu <= 'Z'; kytu++)
    {
        printf("%4c", kytu);
    }
    getch();
    return 0;
}