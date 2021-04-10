/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int isPrime(long n)
{
    if(n < 2)
    {
        return 0;
    }
    else if(n > 2)
    {
        if(n % 2 == 0)
        {
            return 0;
        }
        for(int i = 3; i <= sqrt((float)n); i += 2)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
void selectPrime(FILE* fpIn, FILE* fpOut)
{
    long p;
    while(fscanf(fpIn, "%ld", &p) > 0)
    {
        if(isPrime(p))
        {
            fprintf(fpOut, "%ld\t", p);
        }
    }
}
void main()
{
    int n; 
    FILE* fpIn = fopen("Numbers.txt", "rt");
    FILE* fpOut = fopen("Primes.txt", "wt");

    if(fpIn != NULL)
    {
        if(fpOut != NULL)
        {
            selectPrime(fpIn, fpOut);
            fclose(fpOut);
        }
        fclose(fpIn);
    }
    getch();
}