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

int KiemTraMangACoPhaiLaMangConCuaMangB(int a[], int b[], int na, int nb)
{
    int i, j, Check = 0;
    for(i = 0; i < nb; i++)            // Duyệt mảng b coi
    {
        if(b[i] == a[0])        // Nếu mà thấy bất kỳ phần tử nào của mảng b
        {                       // mà bằng phần tử đầu tiên của mảng a
            int Start = i;      // bắt đầu đếm tại vị trí đó
            Check = 1;
            for(j = 0; j < na; j++)
            {
                if(a[j] != b[Start++])      // Kiểm tra coi có cái nào khác không ?
                {
                    Check = 0;               // Nếu có thì biến
                    break;
                }
            }
            if(Check == 1)      // đi hết vòng lặp nếu mà không có cái nào khác
            {
                return Check; // Mảng a là mảng con của b
            }
        }
    }
    return Check;
}
int main()
{
    int na, nb;
    int a[MAX], b[MAX];

    nhap(a, na);
    xuat(a, na);

    nhap(b, nb);
    xuat(b, nb);

    int Check = KiemTraMangACoPhaiLaMangConCuaMangB(a, b, na, nb);
    if(Check != 1)
    {
        printf("\nMang a khong la mang con cua b!");
    }
    else
    {
        printf("\nMang a la mang con cua b");
    }
    getch();
    return 0;
}