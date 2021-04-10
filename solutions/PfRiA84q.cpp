/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (float a[], int &n)
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
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}
float timduongdautien(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
         if (a[i] > 0)
         {
             return a[i];
         }
    }
    return -1;
}
float timgiatriduongnhonhat(float a[], int n)
{
    float duongnhonhat = timduongdautien(a, n);
    if(duongnhonhat == -1)
        return -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0 && a[i] < duongnhonhat)
        {
            duongnhonhat = a[i];
        }
    }
    return duongnhonhat;
}

// Cách 2:
//float DuongNhoNhat(float a[], int n)
//{
//   float min;
//   int dem= 0;
//   for (int i=0; i<n; i++)
//   {
//       if(a[i]>0)
//       {
//           dem ++;
//           break;
//       }
//   }
//   if (dem !=0)
//   {
//       min = a[i];
//       for (i=i+1; i<n; i++)
//       {
//           if((a[i]>0)&&(min>a[i]))
//           {
//               min = a[i];
//           }
//       }
//       return min;
//   }
//   return -1;
//}
int main()
{
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);

    float duongnhonhat = timgiatriduongnhonhat(a, n);
    printf("\nGia tri duong nho nhat la %.3f", duongnhonhat);

    getch();
    return 0;
}