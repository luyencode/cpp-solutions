/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void NhapMaTran(int a[][MAX], int &dong, int &cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMaTran(int a[][MAX], int dong, int cot)
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

void TinhTong2MaTran(int a[][MAX], int b[][MAX], int c[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
int main()
{
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], dong, cot;
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
    printf("\nNhap vao ma tran A: \n");
    NhapMaTran(a, dong, cot);

    printf("\nNhap vao ma tran B: \n");
    NhapMaTran(b, dong, cot);

    printf("\nMa tran A vua nhap: \n");
    XuatMaTran(a, dong, cot);

    printf("\nMa tran B vua nhap: \n");
    XuatMaTran(b, dong, cot);
    
    TinhTong2MaTran(a, b, c, dong, cot);
    printf("\nMa tran C = A + B \n");
    XuatMaTran(c, dong, cot);

    getch();
    return 0;
}