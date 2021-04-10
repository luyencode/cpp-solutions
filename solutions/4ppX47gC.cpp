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

void TinhTich2MaTran(int a[][MAX], int b[][MAX], int t[][MAX], int donga, int cota, int cotb)
{
    for(int i = 0; i < donga; i++)
    {
        for(int j = 0; j < cotb; j++)
        {
            t[i][j] = 0;
            for(int k = 0; k < cota; k++)
            {
                t[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main()
{
    int a[MAX][MAX], b[MAX][MAX], t[MAX][MAX]; 
    int da, ca, cb; 

    do{
        printf("Nhap vao so dong ma tran a:"); scanf("%d", &da); 
    }while((da < 1 || da > MAX)  && printf("\nSo dong khong hop le!"));

    do{
        printf("Nhap vao so cot ma tran a:"); scanf("%d", &ca); 
    }while((ca < 1 || ca > MAX)  && printf("\nSo cot khong hop le!"));

    NhapMaTran(a, da, ca); 
    printf("A:\n"); XuatMaTran(a, da, ca); 
    do{
    printf("Nhap vao so cot cua ma tran b:"); scanf("%d", &cb); 
    }while((cb < 1 || cb > MAX)  && printf("\nSo cot khong hop le!"));
    NhapMaTran(b, ca, cb); 
    printf("B:\n"); XuatMaTran(b, ca, cb); 

    TinhTich2MaTran(a, b, t, da, ca, cb); 
    printf("Tich cua 2 ma tran la:\n"); XuatMaTran(t, da, cb); 

    getch();
    return 0;
}