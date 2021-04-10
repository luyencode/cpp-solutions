/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void NhapMang(float a[][MAX], int &dong, int &cot)
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
            float temp;
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%f", &temp);
            a[i][j] = temp;
        }
    }
}

void XuatMang(float a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%8.3f", a[i][j]);
        }
            printf("\n\n");
    }
}
void HoanVi(float &a, float &b)
{
    a = a + b; // Cho đại
    b = a - b;  // 
    a = a - b;  // lấy trên trừ dưới
}
void SapXepKhongDungMangPhu(float a[][MAX], int dong, int cot)
{
    int n = dong * cot;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i / cot][i % cot] > a[j / cot][j % cot])
            {
                HoanVi(a[i / cot][i % cot], a[j / cot][j % cot]);
            }
        }
    }
}

void SapXepDungMangPhu(float a[][MAX], int dong, int cot)
{
    // Bước 1: Đổ dữ liệu từ mảng 2 chiều qua mảng 1 chiều (mảng phụ)
    float temp[MAX];
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
            if(temp[i] > temp[j])
            {
                HoanVi(temp[i], temp[j]);
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
    float a[MAX][MAX];
    int dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    SapXepDungMangPhu(a, dong, cot);
    printf("\nMang sau khi sap xep\n");
    XuatMang(a, dong, cot);
    getch();
    return 0;
}