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

int KiemTraDang5K(int n)
{
    if (n <= 1)
      return 1;
    while(n > 1)  // vòng lặp kết thúc khi n == 5
    {
        if(n % 5 != 0)  // Có thể viết n % 5
            return 0;
        n /= 5;
    }
    return 1;
}

int TimGiaTri5kLonNhat(int a[], int n)
{
    int max;
    int dem = 0;
    for(int i = 0; i < n; i++)
   {
       if (KiemTraDang5K(a[i]) == 1)
       {
           max = a[i];
           dem ++;
           break;
       }
   }
   if (dem == 0)
       return 0;
   for(int i = 0; i < n; i++)
       if (KiemTraDang5K(a[i]) == 1)
          max = (max > a[i]) ? max : a[i] ;
   return max;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    
    int KetQua = TimGiaTri5kLonNhat(a, n);
    printf("\nGia tri 5k lon nhat la %d", KetQua);
     
    getch();
    return 0;
}