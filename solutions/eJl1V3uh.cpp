/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    long n;
    int sochuso;
    
    // Nhap so n
    do
    {
    printf("\nNhap n: ");
    scanf("%ld", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    sochuso = 1;  //so chu so mac dinh de la 1 neu n < 1

    //Kiem tra so chu so cua n
    while(n >= 10)
    {
        sochuso = sochuso + 1;
        n = n / 10;
    }
    printf("\nSo chu so cua %ld la %d", n, sochuso);

    //int sochuso = n == 0 ? 1 : (int)log10((float)n) + 1;

    getch();
    return 0;
}
