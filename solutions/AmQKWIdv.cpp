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

int TimSoDuongDauTien(int a[][MAX], int dong, int cot)
{
    for (int i = 0; i < dong; i++) 
    { 
        for (int j = 0; j < cot; j++) 
        { 
            if (a[i][j] > 0) 
            { 
                return a[i][j]; 
            } 
        } 
    } 
    return -1; 
} 

int TimSoDuongNhoNhat(int a[][MAX], int dong, int cot)
{
    int DuongMin = TimSoDuongDauTien(a, dong, cot);
    if (DuongMin == -1) 
    { 
        return -1; 
    } 
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(a[i][j] > 0)
            {
                DuongMin = (DuongMin < a[i][j]) ? DuongMin : a[i][j]; 
            }
        }
    }
    return DuongMin; 
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    int DuongMin = TimSoDuongNhoNhat(a, dong, cot);
    printf("\nSo duong nho nhat trong ma tran = %d", DuongMin);

    getch();
    return 0;
}