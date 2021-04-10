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

int SoSanhChanLe(int a[], int n)
{
    int demchan = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            demchan++;
        }
    }
    if(demchan > n - demchan)
    {
        return -1;
    }
    else if(n - demchan == demchan)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    int Kq = SoSanhChanLe(a, n);
    printf("\nSo sanh so luong so chan va so le: %d", Kq);

    getch();
    return 0;
}