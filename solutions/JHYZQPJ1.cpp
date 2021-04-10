/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int thang;
    printf("\nNhap thang: ");
    scanf("%d", &thang);
    switch (thang)
    {
    case 1:
    case 2:
    case 3:
        printf("\nQui mot");
        break;
    case 4:
    case 5:
    case 6:
        printf("\nQui hai");
        break;
    case 7:
    case 8:
    case 9:
        printf("\nQui ba");
        break;
    case 10:
    case 11:
    case 12:
        printf("\nQui bon");
        break;
    }
    getch();
    return 0;

}