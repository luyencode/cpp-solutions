/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

void KiemTraTamGiac(int a, int b, int c)
{
    if(a + b <= c || a + c <= b ||  b + c <= a)
    {
        printf("\nTam giac khong hop le. Xin kiem tra lai !");
    }
    else
    {
        printf("\nDay la tam giac: ");
        if((a == b) && (b == c))
        {
            printf("Deu");
        }
        else
        {
            if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c)
            {
                printf("Vuong");
            }
            if(a == b || a == c || b == c)
            {
                printf("Can");
            }
            else
            {
                printf("Thuong");
            }
        }
    }
        /*else if(a == b || a == c || b == c)
        {
            printf("\nTam giac can");
        }
        
        else if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c)
        {
            printf("\nTam giac vuong");
        }
        else
        {
            printf("\nTam giac thuong");
        }*/
}

int main()
{
    int a, b, c;
    printf("\nNhap canh a: ");
    scanf("%d", &a);

    printf("\nNhap canh b: ");
    scanf("%d", &b);

    printf("\nNhap canh c: ");
    scanf("%d", &c);

     KiemTraTamGiac(a, b, c);


    getch();
    return 0;
}