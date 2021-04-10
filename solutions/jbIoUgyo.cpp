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

void DichTraiXoayVongTheoChieuKimDongHoCacGiaTriNamTrenBien(int a[][MAX], int dong, int cot)
{
    int i, j;
    int temp = a[0][0]; // lấy đi 1 ô tạo chỗ trống để dịch chuyển
    
    for(i = 0, j = 0; j < cot - 1; j++)
    {
        a[i][j] = a[i][j + 1];
    }
    for(i, j; i < dong - 1; i++)
    {
        a[i][j] = a[i + 1][j];
    }
    for(i, j; j > 0; j--)
    {
        a[i][j] = a[i][j - 1];
    }
    for(i, j; i > 1; i--)
    {
        a[i][j] = a[i - 1][j];
    }
    a[1][0] = temp;
}
int main()
{
    int a[MAX][MAX], dong, cot;
    int cot1, cot2;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    DichTraiXoayVongTheoChieuKimDongHoCacGiaTriNamTrenBien(a, dong, cot);
    printf("\nMa tran sau khi bien doi\n");
    XuatMang(a, dong, cot);
    getch();
    return 0;
}