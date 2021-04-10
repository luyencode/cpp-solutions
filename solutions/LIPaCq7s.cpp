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
        printf("%8d", a[i]);
    }
}
/*

VD: 12 34 134
thì ta dc 1 mảng số:
Trị số : 0 1 2 3 4 5 6 7 8 9
Giá trị: 0 2 1 2 2 0 0 0 0 0

*/
void DemChuSo(int a[], int n, int b[])
{
    // Duyệt mảng a
    for (int i = 0; i < n; i++)
    {
        int themang = abs(a[i]);
        while (themang != 0)
        {
            int ChuSo = themang % 10;
            themang /= 10;

            b[ChuSo]++;
        }
    }
}
int TimChuSoXuatItNhat(int a[], int n, int b[])
{
    int ChuSoMin = abs(a[0] % 10);
    for (int i = 0; i < 10 ; i++)
    {
        if (b[i] != 0)
        {
            ChuSoMin = (b[ChuSoMin] < b[i]) ? ChuSoMin : i;
        }
    }
    return ChuSoMin;
 }


int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int b[10] = {0};
    DemChuSo(a, n, b);
    for (int i = 0; i < 10; i++)
    {
        // Chỉ xét những chữ số có số lần xuất hiện > 0
        if (b[i] != 0)
        {
            printf("\nChu so %d xuat hien %d lan", i, b[i]);

        }
    }

    int ChuSoMin = TimChuSoXuatItNhat(a, n, b);
        printf ("\nChu so xuat hien it nhat la %d",ChuSoMin);

    getch();
    return 0;
}