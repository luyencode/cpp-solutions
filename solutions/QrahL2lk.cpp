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

void HoanVi2So(int &a, int &b)
{
    a = a + b; // a = a + b
    b = a - b; // b = a
    a = a - b; // a = b
}
void HoanVi2Dong(int a[][MAX], int x, int y, int cot)
{
    for(int i = 0; i < cot; i++)
    {
        HoanVi2So(a[x][i],a[y][i]);
    }
}

// Cách 1:
void XoaDong(int a[][MAX], int &dong, int cot, int vitrixoa)
{
    for(int i = vitrixoa + 1; i < dong; i++)
    {
        HoanVi2Dong(a, i - 1, i, cot);
    }
    dong--;
}

// Cách 2:

void XoaDong_Cach2(int a[][MAX], int &dong, int cot, int vitrixoa)
{
    for(int i = vitrixoa; i < dong - 1; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            a[i][j] = a[i + 1][j];
        }
    }
    dong--;
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int vitridongcanxoa;
    do{
        printf("\nNhap vao vi tri dong can xoa: ");
        scanf("%d", &vitridongcanxoa);

        if(vitridongcanxoa < 0 || vitridongcanxoa > dong - 1)
        {
            printf("\nVi tri xoa khong hop le. Xin kiem tra lai !");
        }
    }while(vitridongcanxoa < 0 || vitridongcanxoa > dong - 1);

    XoaDong_Cach2(a, dong, cot, vitridongcanxoa);
    printf("\nMa tran sau khi xoa dong %d\n", vitridongcanxoa);
    XuatMang(a,dong,cot);

    getch();
    return 0;
}