/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include <stdio.h>
#include <conio.h>
 
int  check(int n);
int main()
{
    int i;
    int max = 10000;
 
    printf("cac so co dang 2^k trong khoang [0, %d]:\n", max);
    for(i = 0; i < 10000; i++)
         check(i) ?   printf("%5d", i) : printf("");      
    getch();
    return 0;
}
/* Số có dạng 2^k
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16

VD: kiểm tra số 81
16 % 2 = 8 dư 0
8 % 2 = 4 dư 0
4 % 2 = 2 dư 0
2 % 2 = 1 dư 0 => hết

VD: kiểm tra số 12
12 % 2 = 6 dư 0
6 % 2 = 3 dư 0 
3 % 2 = 1 dư 1 => sai !
*/
int check(int n)
{
    int flag = 1;
    n = n < 0 ? -n : n;
    if(n < 2)
        return 1;
    /*while(n > 1)
    {
        if(n % 2)
            return 0;
        n /= 2;
    }
    return 1;*/
    while(n > 1)
    {
        int du = n % 2;
        if(du != 0)  // nếu dư mà khác 0. lập tức báo sai
            flag = 0;
        n /= 2;
    }
    if(flag==1)
      return 1;
    else
      return 0;
}