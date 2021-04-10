/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#define maxN 2048

long countLines(FILE* inFile)
{
    long count = 0; char line[maxN];
    while(fgets(line, maxN - 1, inFile) != NULL)
    {
        count++;
    }
    return count;
}
void main()
{
    FILE* fp = fopen("Data.txt", "rt");
    if(fp != NULL)
    {
        long cnt = countLines(fp);
        printf("\nSo dong trong van ban = %d\n", cnt);
    }
    getch();
}