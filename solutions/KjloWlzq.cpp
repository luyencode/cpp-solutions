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
 
    printf("cac so co dang 3^k trong khoang [0, %d]:\n", max);
    for(i = 0; i < 10000; i++)
         check(i) ?   printf("%5d", i) : printf("");      
    getch();
    return 0;
}

/* Số có dạng 3^k
3^1 = 3
3^2 = 9
3^3 = 27
3^4 = 81

VD: kiểm tra số 81
81 % 3 = 27 dư 0
27 % 3 = 9 dư 0
9 % 3 = 3 dư 0
3 % 3 = 1 dư 0 => hết

VD: kiểm tra số 12
12 % 3 = 4 dư 0
4 % 3 = 1 dư 1 ==> sai
*/
int check(int n)
{
    int flag=1;
    n = n < 0 ? -n : n;
    if(n < 2)
        return 1;

   /* while(n > 1)
    {
        if(n % 3)  
            return 0;
        n /= 3;
    }
    return 1;*/
    while(n > 1)
    {
        int du = n % 3;
        if(du != 0)  // nếu dư mà khác 0. lập tức báo sai
            flag = 0;
        n /= 3;
    }
    if(flag==1)
      return 1;
    else
      return 0;
}