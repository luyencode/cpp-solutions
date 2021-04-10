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

int TimMaxThu2TrongMaTran(int a[][MAX], int dong, int cot) 
{ 
    int Max = a[0][0]; 
    for (int i = 0; i < dong; i++) 
    { 
        for(int j = 0; j < cot; j++) 
        { 
            Max = (a[i][j] > Max) ? a[i][j] : Max; 
        } 
    } 
    int Max2 = a[0][0]; 
    for (int i = 0; i < dong; i++) 
    { 
        for(int j = 0; j < cot; j++) 
        { 
            if (Max2 < Max && a[i][j]!= Max && Max2 < a[i][j]) 
            { 
                Max2 = a[i][j]; 
            } 
        } 
    } 
    return Max2; 
} 
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    int max = TimMaxThu2TrongMaTran(a, dong, cot);
    printf("\nPhan tu lon thu 2 trong ma tran = %d", max);
    getch();
    return 0;
}