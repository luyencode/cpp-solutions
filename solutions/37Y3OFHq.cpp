/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

// Giải hệ
/*
ax + by = c
dx + ey = f
*/
const int VoNghiem = 0, KhongXacDinh = -1;
int GiaiHePhuongTrinh(int a, int b, int c, int d, int e, int f, int &x, int &y)
{
    int D = a * e - d * b;
    int Dx = c * e - f * b;
    int Dy = a * f - d * c;

    int SoNghiem;
    if(D != 0)
    {
        x = Dx / D;
        y = Dy / D;
        printf("\nHe phuong trinh co 1 nghiem duy nhat: %d va %d", x, y);
        SoNghiem = 1;
    }
    else
    {
        if(Dx != 0 || Dy != 0)
        {
            printf("\nHe phuong trinh vo nghiem");
            SoNghiem = 0;
        }
        else if(Dx == Dy == 0)
        {
            printf("\nHe phuong trinh co vo so nghiem");
            SoNghiem = -1;
        }
    }
    return SoNghiem;
}
int main()
{
    int a, b, c, d, e, f, x, y;
    
    printf("\nNhap a: ");
    scanf("%d", &a);
    printf("\nNhap b: ");
    scanf("%d", &b);
    printf("\nNhap c: ");
    scanf("%d", &c);
    printf("\nNhap d: ");
    scanf("%d", &d);
    printf("\nNhap e: ");
    scanf("%d", &e);
    printf("\nNhap f: ");
    scanf("%d", &f);

    int SoNghiem = GiaiHePhuongTrinh(a, b, c, d, e, f, x, y);
    

    getch();
    return 0;
}

/*

*/