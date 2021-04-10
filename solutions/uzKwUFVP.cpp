/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<Windows.h>
#define MAX 100


// Hàm tô màu
void textcolor(int x)
{
    HANDLE mau;
    mau = GetStdHandle
        (STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(mau, x);
}
void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void XuatChanVangLeTrang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            textcolor(14);
            printf("%4d", a[i]);
        }
        else
        {
            textcolor(7);
            printf("%4d", a[i]);
        }
    }
}


int main()
{
    int n, k;
    int a[MAX];

    nhap(a, n);
    XuatChanVangLeTrang(a, n);


    getch();
    return 0;
}