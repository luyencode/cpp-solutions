/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct DaThuc
{
    float a[100];
    int n;
};
typedef struct DaThuc DATHUC;

void NhapDaThuc(DATHUC &);
void XuatDaThuc(DATHUC);

void NhapDaThuc(DATHUC &dt)
{
    printf("\nNhap bac da thuc: ");
    scanf("%d", &dt.n);
    for(int i = dt.n; i >= 0; i--)
    {
        float temp;
        printf("\nNhap he so: ");
        scanf("%f", &temp);
        dt.a[i] = temp;
    }
}

void XuatDaThuc(DATHUC dt)
{
    for(int i = dt.n; i >= 0; i--)
    {
        printf("%8.3fx^%d + ", dt.a[i], i);
    }
}

int main()
{
    DATHUC dt;
    NhapDaThuc(dt);
    XuatDaThuc(dt);

    getch();
    return 0;
}