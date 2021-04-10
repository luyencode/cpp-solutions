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
void HoanVi2Cot(int a[][MAX], int x, int y, int dong)
{
    for(int i = 0; i < dong; i++)
    {
        HoanVi2So(a[i][x],a[i][y]);
    }
}

// Cách 1:
void XoaCot(int a[][MAX], int dong, int &cot, int vitrixoa)
{
    for(int i = vitrixoa + 1; i < cot; i++)
    {
        HoanVi2Cot(a, i - 1, i, dong);
    }
    cot--;
}

// Cách 2:

void XoaCot_Cach2(int a[][MAX], int dong, int &cot, int vitrixoa)
{
    for(int i = vitrixoa; i < cot - 1; i++)
    {
        for(int j = 0; j < dong; j++)
        {
            a[j][i] = a[j][i + 1];
        }
    }
    cot--;
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int vitricotcanxoa;
    do{
        printf("\nNhap vao vi tri cot can xoa: ");
        scanf("%d", &vitricotcanxoa);

        if(vitricotcanxoa < 0 || vitricotcanxoa > cot - 1)
        {
            printf("\nVi tri xoa khong hop le. Xin kiem tra lai !");
        }
    }while(vitricotcanxoa < 0 || vitricotcanxoa > cot - 1);

    XoaCot(a, dong, cot, vitricotcanxoa);
    printf("\nMa tran sau khi xoa cot %d\n", vitricotcanxoa);
    XuatMang(a,dong,cot);

    getch();
    return 0;
}