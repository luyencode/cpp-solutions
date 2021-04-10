/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
int main()
{
/*
a  b  c
5  4  7
Giống Interchange sort
a so sánh với b và c
b so sánh với c
*/
    int a, b, c, temp;
    printf("\nNhap a: ");
    scanf("%d", &a);

    printf("\nNhap b: ");
    scanf("%d", &b);

    printf("\nNhap c: ");
    scanf("%d", &c);
    
    if(a > b) 
    {
        temp = a; a = b; b = temp;
    }
    if(a > c)
    {
        temp = a; a = c; c = temp;
    }
    if(b > c)
    {
        temp = b; b = c; c = temp;
    }

    printf("\nTang dan: %d %d %d ",a, b, c);


    getch();
    return 0;
}