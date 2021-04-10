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
#define NUMBERLINE 20
void PrimeListing(int n, FILE* outFile)
{
    long p = 2, countPrime = 1, nextNum = 3;
    fprintf(outFile, "%ld\t", p);
    while(countPrime < n)
    {
        if(isPrime(nextNum))
        {
            fprintf(outFile, "%ld\t", nextNum);
            countPrime++;
            if(countPrime % NUMBERLINE == 0)
            {
                fprintf(outFile, "\n");
            }
        }
        nextNum += 2;
    }
}
void main()
{
    int n; FILE* fp = fopen("PrimeData.txt", "wt");
    printf("n = ");
    scanf("%ld", &n);
    if(fp != NULL)
    {
        PrimeListing(n, fp);
        fclose(fp);
    }
    getch();
}