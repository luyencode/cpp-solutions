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

/*            Chỉ số
            -1
 Chỉ số: -1 0 | 1   2   3
            --------------
            1 |    1    2    3
            2 |    4    5    6
            3 |    7    8    9
    // phần tử cực đại là 9
*/
/*
Đầu tiên đặt flag=1 tức là mặc định giá trị ô a[d][c] là cực đại,
nếu như 1 trong các ô xung quanh ô a[d][c] này có giá trị lớn hơn nó (a[d][c]<=a[d+i][c+j]) thì đặt flag=0 tức là nó ko phải điểm cực đại
 loại trừ trường hợp i=0 và j=0 như trong lệnh if có ghi vì nó trùng với tọa độ của a[d][c]
*/
int KiemTraPhanTuCucDai(float a[][MAX], int sodong, int socot, int dong, int cot)
{
    int flag = 1; // Khởi đầu mặc định ô a[dong][cot] là cực đại
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1; j++)
        {
            if(dong + i >= 0 && cot + j >= 0 && dong + i < sodong && cot + j < socot && !(i == 0 && j == 0))
            {
                  if (a[dong][cot] <= a[dong + i][cot + j])
                  {
                      flag = 0;
                  }
            }
        }
    }
    return flag;
}

/*bool isMaxMatrix(int **a, int m, int n, int ix, int jx)
{
    int di[] = { -1,-1,-1,  0, 0,  1, 1, 1 };
    int dj[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
    int no = a[ix][jx];
    bool CT = true, CD = true;
    for (int i = 0; i < 8; i++)
    {
        if (ix + di[i] >= 0 && ix + di[i] < m && jx + dj[i] >= 0 && jx + dj[i] < n)
        {
            if (no < a[ix + di[i]][jx + dj[i]]) CD = false;
            if (no > a[ix + di[i]][jx + dj[i]]) CT = false;
            if (!CD && !CT) break;
        }
    }
    if (!CD && !CT) return false;
    return true;
}*/
void DemSoPhanTuCucDai(float a[][MAX], int sodong, int socot)
{
    int dem = 0;
    printf("\nCac phan tu cuc dai la: \n");
    for(int i = 0; i < sodong; i++)
    {
        for(int j = 0; j < socot; j++)
        {
            if(KiemTraPhanTuCucDai(a, sodong, socot, i, j) == 1)
            {
                printf("\n%.3f", a[i][j]);
                dem++;
            }
        }
    }
    printf("\nSo phan tu cuc dai = %d", dem);
}


int main()
{
    float a[MAX][MAX];
    int dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    DemSoPhanTuCucDai(a, dong, cot);
    getch();
    return 0;
}