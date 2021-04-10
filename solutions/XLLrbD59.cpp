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

int DemSoLanXuatHienCuaMangATrongMangB(int a[], int b[], int na, int nb)
{
    int i, j, Start, flag, dem = 0;
    for(i = 0; i < nb; i++)        // duyệt mảng b
    {
        if(a[0] == b[i] && nb - i >= na)  // nếu mà phần tử đầu tiên của mảng a bằng với 1 phần tử bất kỳ của mảng b
        {                                   // và số phần tử mảng b đó trừ đi i lớn hơn hoặc bằng số phần tử mảng a
            Start = i;            // biến Start sẽ là biến bắt đầu để đếm, khởi tạo ngay tại i thỏa DK
            flag = 1;
            for(j = 0; j < na; j++)
            {
                if(a[j] != b[Start++])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                dem++;
            }
        }
    }
    return dem;
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
    
    
    int dem = DemSoLanXuatHienCuaMangATrongMangB(a, b, na, nb);
    printf("\nSo lan xuat hien cua mang a trong mang b = %d", dem);

    getch();
    return 0;
}