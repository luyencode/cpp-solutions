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
void TaoMaTranZicZacNgang(int a[][MAX],int dong, int cot)
{
    int dem = 1;
    for(int i = 0; i < dong; i++)
    {
        // Với mỗi dòng chẵn, dem sẽ được gán vào từng phần tử của các cột từ trái sang phải
        if(i % 2 == 0)
        {
            for(int j = 0; j < cot; j++)
            {
                a[i][j] = dem++;
            }
        }
        // Với mỗi dòng lẻ, dem sẽ được gán vào từng phần tử của các cột từ phải sang trái
        else
        {
            for(int j = cot - 1; j >= 0; j--)
            {
                a[i][j] = dem++;
            }
        }
    }
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    TaoMaTranZicZacNgang(a, dong, cot);
    XuatMang(a, dong, cot);
    getch();
    return 0;
}