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

void HoanVi(int &a, int &b)
{
    a = a + b; // Cho đại
    b = a - b;  // 
    a = a - b;  // lấy trên trừ dưới
}
void SapXepKhongDungMangPhu(int a[][MAX], int dong, int cot)
{
    int n = dong * cot;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i / cot][i % cot] % 2 == 0)
            {
                if(a[i / cot][i % cot] < a[j / cot][j % cot])
                {
                    HoanVi(a[i / cot][i % cot], a[j / cot][j % cot]);
                }
            }
        }
    }
}

void SapXepDungMangPhu(int a[][MAX], int dong, int cot)
{
    // Bước 1: Đổ dữ liệu từ mảng 2 chiều qua mảng 1 chiều (mảng phụ)
    int temp[MAX];
    int idx = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            temp[idx++] = a[i][j];
        }
    }

    // Bước 2: Sắp xếp mảng 1 chiều tăng dần
    for(int i = 0; i < idx - 1; i++)
    {
        for(int j = i + 1; j < idx; j++)
        {
            if(temp[i] % 2 == 0)
            {
                if(temp[i] < temp[j])
                {
                    HoanVi(temp[i], temp[j]);
                }
            }
        }
    }

    // Bước 3: Đổ lại dữ liệu từ mảng 1 chiều sang mảng 2 chiều
    idx = 0; // Reset lại chỉ số mảng phụ

    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            a[i][j] = temp[idx++];
        }
    }
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    SapXepKhongDungMangPhu(a, dong, cot);
    printf("\nMa tran sau khi sap xep\n");
    XuatMang(a, dong, cot);
    getch();
    return 0;
}