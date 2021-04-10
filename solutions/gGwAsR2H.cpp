/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    long S;
    S = 0;
    i = 1;
    printf("\nNhap n: ");
    scanf("%d", &n);

    while(i <= n)
    {
        S = S + i * i;
        i++;
    }
    printf("i = %d", i);
    printf("\nTong 1^2 + 2^2 + ... + %d^2 la: %ld", n, S);

    /*int n,i;
    int sum=0;

    printf("Enter the n i.e. max values of series: ");
    scanf("%d",&n);

    sum = (n * (n + 1) * (2 * n + 1 )) / 6;

    printf("Sum of the series : ");

    for(i =1;i<=n;i++){
         if (i != n)
             printf("%d^2 + ",i);
         else
             printf("%d^2 = %d ",i,sum);
    }*/



    getch();
    return 0;
}