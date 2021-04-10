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

void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void HoanVi2Dong(int a[][MAX], int dong, int cot, int dong1, int dong2)
{
    if((dong1 >= 0 && dong1 < dong) && (dong2 >= 0 && dong2 < dong))
    {
        for(int j = 0; j < cot; j++)
        {
            HoanVi(a[dong1][j], a[dong2][j]);
        }
    }
}
int main()
{
    int a[MAX][MAX], dong, cot;
    int dong1, dong2;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    do
    {
        printf("\nNhap dong 1: ");
        scanf("%d", &dong1);

        if(dong1 < 0 || dong1 >= dong)
        {
            printf("\nDong khong hop le. Xin Nhap lai!");
        }
    }while(dong1 < 0 || dong1 >= dong);

    do
    {
        printf("\nNhap dong 2: ");
        scanf("%d", &dong2);

        if(dong2 < 0 || dong2 >= dong)
        {
            printf("\nDong khong hop le. Xin Nhap lai!");
        }
    }while(dong2 < 0 || dong2 >= dong);

    HoanVi2Dong(a, dong, cot, dong1, dong2);

    printf("\nMa tran sau khi hoan vi dong %d va dong %d \n", dong1, dong2);
    XuatMang(a, dong, cot);

    getch();
    return 0;
}