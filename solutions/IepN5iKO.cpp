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

//int KiemTraChan(int n)
//{
//    for(int i = 0; i < n; i++)
//    {
//        if(n % 2 != 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
int TimChanDau(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            return a[i];
        }
    }
    return -1;
}

int TimChanLonNhat(int a[], int n)
{
    int ChanMax = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i] > ChanMax)
        {
             ChanMax = a[i];
        }
    }
    return ChanMax;
}

void LietKeViTriChanLonNhat(int a[], int n)
{
    int ChanMax = TimChanLonNhat(a, n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == ChanMax)
        {
            printf("%4d", i);
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int ViTriChanDau = TimChanDau(a, n);

    if(ViTriChanDau == -1)
    {
        printf("\nMang khong co so chan");
    }
    else
    {
        printf("\nCac vi tri co gia tri bang gia tri chan lon nhat la");
        LietKeViTriChanLonNhat(a, n);
    }

    getch();
    return 0;
}