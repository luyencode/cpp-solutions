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
int TimViTriChanDau(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            return i;
        }
    }
    return -1;
}

int TimChanNhoNhat(int a[], int n, int ViTriChanDau)
{
    int ChanMin = a[ViTriChanDau];
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i] < ChanMin)
        {
            a[i] = ChanMin;
        }
    }
    return ChanMin;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int ViTriChanDau = TimViTriChanDau(a, n);

    if(ViTriChanDau == -1)
    {
        printf("\nMang khong co so chan");
    }
    else
    {
        int ChanMin = TimChanNhoNhat(a, n, ViTriChanDau);
        printf("\nGia tri chan be nhat la %d", ChanMin);
    }

    getch();
    return 0;
}