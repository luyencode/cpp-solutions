/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void NhapMang(int a[][MAX], int &dong, int &cot)
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
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMang(int a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%4d", a[i][j]);
        }
            printf("\n\n");
    }
}

int TinhTongCacGiaTriLeTren1Cot(int a[][MAX], int y, int dong)
{
    int tong = 0;
    for(int i = 0; i < dong; i++)
    {
        if(a[i][y] % 2 != 0)
        {
            tong += a[i][y];
        }
    }
    return tong;
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int y;
    do{
        printf("\nNhap vao cot y can tinh tong: ");
        scanf("%d", &y);

        if(y < 0 || y > cot - 1)
        {
            printf("\nChi so cot y khong hop le. Xin kiem tra lai !");
        }
    }while(y < 0 || y > cot - 1);

    int tong = TinhTongCacGiaTriLeTren1Cot(a, y, dong);
    printf("\nTong cac gia tri le tren cot %d = %d", y, tong);
    getch();
    return 0;
}