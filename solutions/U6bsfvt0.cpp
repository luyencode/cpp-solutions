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

void LietKePhanTuXuatHien1Trong2Mang(int a[], int b[], int na, int nb)
{
    int i, j, flag;
    for(i = 0; i < na; i++)
    {
        flag = 1;
        for(j = 0; j < nb; j++)
        {
            if(a[i] == b[j])
            {
                flag = 0;
                printf("\nTrong mang A co phan tu a[%d] = %d nam trong mang B\n", i, a[i]);
                break;
            }
        }
        if(flag == 1)
        printf("\n%d", a[i]);
    }
    for(i = 0; i < nb; i++)
    {
        flag = 1;
        for(j = 0; j < na; j++)
        {
            if(b[i] == a[j])
            {
                flag = 0;
                printf("\nTrong mang B co phan tu a[%d] = %d nam trong mang A\n", i, b[i]);
                break;
            }
        }
        if(flag == 1)
        printf("\n%d", b[i]);
    }
}
int main()
{
    int na, nb;
    int a[MAX], b[MAX];

    printf("\nNhap mang a:");
    nhap(a, na);
    xuat(a, na);

    printf("\nNhap mang b:");
    nhap(b, nb);
    xuat(b, nb);
    
    printf("\nCac phan tu xuat hien 1 trong 2 mang: ");
    LietKePhanTuXuatHien1Trong2Mang(a, b, na, nb);
    
    getch();
    return 0;
}