/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, i;

    do{
        printf("\nNhap vao so nguyen duong a = ");
        scanf_s("%4d", &a);
        if (a < 0)
        {
            printf("\nGia tri nhap vao khong hop le. Xin kiem tra lai !");
        }
    } while (a < 0);

    do{
        printf("\nNhap vao so nguyen duong b = ");
        scanf_s("%4d", &b);
        if (b < 0)
        {
            printf("\nGia tri nhap vao khong hop le. Xin kiem tra lai !");
        }
    } while (b < 0);

    int Max = a > b ? a : b;
    int Min = a < b ? a : b;
    if(a == b)
        return a;
    else
    {
        for(i = Max; i < a * b; i++)
            if(i % a == 0 && i % b == 0)
            {
                return i;
                break;
            }
    }
    printf("\nBCNN la %d", i);
    getch();
    return 0;
}