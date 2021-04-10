/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

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

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

int KiemTraTinhChatLe(int a[], int n)
{
    int flag = 1;
    for(int i = 0; i < n; i++)
    {
        if((a[i] + a[i + 1] % 2) == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);

    int flag = KiemTraTinhChatLe(a, n);
    if(flag == 1)
    {
        printf("\nMang co tinh chat le");
    }
    else
    {
    printf("\nKhong thoa DK");
    }
    
    

    getch();
    return 0;
}