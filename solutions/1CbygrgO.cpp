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
void TaoMaTranXoanOc(int a[][MAX], int dong, int cot)
{
    int trai = 0, tren = 0, duoi = dong, phai = cot, dem = 0, n = dong * cot;
    while(dem < n)
    {
        // chạy hàng trên
        for(int i = trai; i < phai; i++)
        {
            if(dem < n)
            {
                a[tren][i] = dem++;
            }
        }
        tren++; 
        // chạy cột phải
        for(int i = tren; i < duoi; i++)
        {
            if(dem < n)
            {
                a[i][phai - 1] = dem++;
            }
        }
        phai--;
        // chạy hàng dưới
        for(int i = phai - 1; i >= trai; i--)
        {
            if(dem < n)
            {
                a[duoi - 1][i] = dem++;
            }
        }
        duoi--;
        // chạy cột trái
        for(int i = duoi - 1; i >= tren; i--)
        {
            if(dem < n)
            {
                a[i][trai] = dem++;
            }
        }
        trai++;
    }
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    TaoMaTranXoanOc(a, dong, cot);
    XuatMang(a, dong, cot);
    getch();
    return 0;
}