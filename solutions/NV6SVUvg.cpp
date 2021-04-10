/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b;
    printf("\nNhap a: ");
    scanf("%d", &a);

    printf("\nNhap b: ");
    scanf("%d", &b);

    printf("\nUCLN cua %d va %d la: ", a, b);
    while(a != b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    printf("%d", a);
    
    getch();
    return 0;
}