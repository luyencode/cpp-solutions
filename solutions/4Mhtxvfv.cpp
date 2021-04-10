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
int KiemTra1HangMaTranCoGiamDan(int a[][MAX], int x, int cot)
{
    int flag = 1;
    for(int j = 0; j < cot - 1; j++)
    {
        for(int k = j + 1; k < cot; k++)
        {
            if(a[x][j] < a[x][k])
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int KiemTra1CotMaTranCoGiamDan(int a[][MAX], int dong, int y)
{
    int flag = 1;
    for(int i = 0; i < dong - 1; i++)
    {
        for(int j = i + 1; j < dong; j++)
        {
            if(a[i][y] < a[j][y])
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}

int KiemTraMaTranCoGiamDanTheoDongVaCot(int a[][MAX], int dong, int cot)
{
    int flag = 1;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(KiemTra1HangMaTranCoGiamDan(a, i, cot) == 0 || KiemTra1CotMaTranCoGiamDan(a, j, dong) == 0) 
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
    int flag = KiemTraMaTranCoGiamDanTheoDongVaCot(a, dong, cot);
    if(flag == 1)
    {
        printf("\nMa tran co giam dan theo dong va cot");
    }
    else
    {
        printf("\nKhong thoa DK");
    }
    getch();
    return 0;
}