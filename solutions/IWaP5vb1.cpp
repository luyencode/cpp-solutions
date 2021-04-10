/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

float Tinh(float x)
{
    float ketqua;
    if(x >= 5)
        ketqua = 2 * x * x + 5 * x + 9;
    else
        ketqua = -2 * x * x + 4 * x - 9;
    return ketqua;

}
int main()
{
    float x;
    printf("\nNhap x: ");
    scanf("%f", &x);
    float ketqua = Tinh(x);
    printf("\nKet qua = %f", ketqua);

    getch();
    return 0;
}