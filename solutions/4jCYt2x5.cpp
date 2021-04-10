/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<time.h>

int tinhTong(int n) // đệ quy
{
    if(n == 1)
        return 1;
    return tinhTong(n - 1) + n;
}

int tinhTong_2(int n, int x = 1)  // đệ quy đuôi
{
    if(n == 1)
        return x;
    return tinhTong_2(n - 1, x + n);
}

int tinhTong_3(int n) // khử đệ quy
{
    int tong = 1;
    for(int i = 2; i <= n; i++)
    {
        tong += i;
    }
    return tong;
}
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    printf("\nKhu de quy(%d) = %d", n, tinhTong_3(n));
    printf("\nDe quy(%d) = %d", n, tinhTong(n));
    printf("\nDe quy duoi(%d) = %d", n, tinhTong_2(n));

    clock_t start1 = clock();  // Bắt đầu tính thời gian
    for(int i = 0; i <= 1000; i++)
        tinhTong_3(n);      // khử đệ quy 
    clock_t finish1 = clock(); // kết thúc tính toán thời gian

    clock_t start2 = clock();  // Bắt đầu tính thời gian
    for(int i = 0; i <= 1000; i++)
        tinhTong(n);         // đệ quy
    clock_t finish2 = clock(); // kết thúc tính toán thời gian

    clock_t start3 = clock();  // Bắt đầu tính thời gian
    for(int i = 0; i <= 1000; i++)
        tinhTong_2(n);       //đệ quy đuôi
    clock_t finish3 = clock(); // kết thúc tính toán thời gian

    double Thoigian1 = (double)(finish1 - start1) / CLOCKS_PER_SEC;
    double Thoigian2 = (double)(finish2 - start2) / CLOCKS_PER_SEC;
    double Thoigian3 = (double)(finish3 - start3) / CLOCKS_PER_SEC;

    printf("\nKhu de quy chay het %lf s", Thoigian1);
    printf("\nDe quy chay het %lf s", Thoigian2);
    printf("\nDe quy duoi chay het %lf s", Thoigian3);
     
    getch();
    return 0;
}