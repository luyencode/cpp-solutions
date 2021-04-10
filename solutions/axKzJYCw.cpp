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
/*
Khái niệm hoán vị diễn tả ý tưởng rằng những đối tượng phân biệt có thể được sắp xếp theo những thứ tự khác nhau.
Ví dụ, với các số từ một đến sáu, mỗi cách sắp thứ tự sẽ tạo thành một dãy các số không lặp lại. 
Một hoán vị như thế là: "3, 4, 6, 1, 2, 5".

*/
void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void SapXepTangDan(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                HoanVi(a[i], a[j]);
            }
        }
    }
}

void KiemTraBCoPhaiLaHoanViCuaA(int a[],int b[], int na, int nb)
{
    if(na != nb)
    {
        printf("\nKhong phai");      // Số lượng phần tử phải bằng nhau
        return;
    }
    SapXepTangDan(a, na);           // Sắp xếp mảng a
    SapXepTangDan(b, nb);           // Sắp xếp mảng b
    for(int i = 0; i < na; i++)
    {
        if(a[i] != b[i])              
        {
            printf("\nKhong phai");
            return;
        }
    }
    printf("\nPhai");
    return;
}
int main()
{
    int na, nb;
    int a[MAX], b[MAX];

    nhap(a, na);
    xuat(a, na);

    nhap(b, nb);
    xuat(b, nb);

    KiemTraBCoPhaiLaHoanViCuaA(a, b, na, nb);

    getch();
    return 0;
}