/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void NhapMang(float a[][MAX], int &dong, int &cot)
{
    //Nhập số dòng
    do
    {
        printf("\nNhap vao so dong: ");
        // Cách tà đạo: scanf("dong =%d",&dong);  // Lúc nhập phải viết thêm  chữ ( dong =  ) ở khung console
        scanf("%d",&dong);

        if(dong < 1 || dong > MAX)
        {
            printf("\nSo dong khong hop le. Xin kiem tra lai!");
        }

    }while(dong < 1 || dong > MAX);

    //Nhập số cột
    do
    {
        printf("\nNhap vao so cot: ");
        scanf("%d",&cot);

        if(cot < 1 || cot > MAX)
        {
            printf("\nSo cot khong hop le. Xin kiem tra lai!");

        }

    }while(cot < 1 || cot > MAX);
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            float temp;
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%f", &temp);
            a[i][j] = temp;
        }
    }
}

void XuatMang(float a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%8.3f", a[i][j]);
        }
        printf("\n\n");
    }
}

float TinhTongGiaTriDuongTren1Dong(float a[][MAX], int x, int cot)
{
    float tong = 0;
    for(int j = 0; j < cot; j++)
    {
        if(a[x][j] > 0)
        {
            tong += a[x][j];
        }
    }
    return tong;
}
int main()
{
    float a[MAX][MAX];
    int dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int x;
    do{
        printf("\nNhap vao dong x can tinh tong: ");
        scanf("%d", &x);

        if(x < 0 || x > dong - 1)
        {
            printf("\nChi so dong x khong hop le. Xin kiem tra lai !");
        }
    }while(x < 0 || x > dong - 1);

    float tong = TinhTongGiaTriDuongTren1Dong(a, x, dong);
    printf("\nTong dong %d = %f",x, tong);
    getch();
    return 0;
}