/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define sizeBuff 'Z' - 'A' + 1

void countAlphabet(FILE* inFile, long Count[])
{
    int n = sizeBuff; int i; char ch;
    for(i = 0; i < n; i++)
    {
        Count[i] = 0;
    }
    while(!feof(inFile))
    {
        ch = fgetc(inFile);
        if(ch == EOF)
            break;
        ch = toupper(ch);
        if('A' <= ch && ch <= 'Z')
            Count[ch - 'A']++;
    }
}

void showCounts(FILE* outFile, long Count[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(Count[i] > 0)
        {
            fprintf(outFile, "Number of %c is %ld\n", 'A' + i, Count[i]);
        }
    }
}

void main()
{
    FILE* inFile = fopen("Data.txt", "rt");
    FILE* outFile = fopen("Result.txt", "wt");
    long Cnt[sizeBuff];
    if(inFile != NULL)
    {
        countAlphabet(inFile, Cnt);
        if(outFile != NULL)
        {
        showCounts(outFile, Cnt, sizeBuff);
        fclose(outFile);
        }
        fclose(inFile);
    }
    getch();
}