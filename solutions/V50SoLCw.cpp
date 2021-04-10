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

int KiemTra1HangMaTranCoTangDan(int a[][MAX], int x, int cot)
{
    int flag = 1;
    for(int j = 0; j < cot - 1; j++)
    {
        for(int k = j + 1; k < cot; k++)
        {
            if(a[x][j] > a[x][k])
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int x;
    do{
        printf("\nNhap vao dong x can kiem tra ");
        scanf("%d", &x);

        if(x < 0 || x > dong - 1)
        {
            printf("\nChi so dong x khong hop le. Xin kiem tra lai !");
        }
    }while(x < 0 || x > dong - 1);

    int flag = KiemTra1HangMaTranCoTangDan(a, x, cot);
    if(flag == 1)
    {
        printf("\nHang %d tang dan", x);
    }
    else
    {
        printf("\nKhong thoa DK");
    }
    getch();
    return 0;
}