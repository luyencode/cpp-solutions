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

/*
n = 6.9
phannguyen = (int)(6.9) = 6
phan le = 6.9 - 6 = 0.9

*/
void ThaySoGanNhat(float &n)
{
    int phannguyen = (int)(n);
    float phanle = n - phannguyen;
    // làm tròn
    if(phanle <= 0.5)      
    {
        n = (float)phannguyen;
    }
    else
    {
        n = (float)phannguyen + 1;
    }
}

// Giống như làm tròn
void ThayCacPhanTuTrongMangBangSoNguyenGanNoNhat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        ThaySoGanNhat(a[i]);
    }
}
int main()
{
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    
    ThayCacPhanTuTrongMangBangSoNguyenGanNoNhat(a, n);
    printf("\nMang sau khi lam tron: ");
    xuat(a, n);

    getch();
    return 0;
}