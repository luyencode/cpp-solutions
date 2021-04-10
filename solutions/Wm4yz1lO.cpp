/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#define MAXLENGTH 128

long countWords(FILE* inFile)
{
    long count = 0;
    char word[MAXLENGTH];
    while(!feof(inFile))
    {
        int nRec = fscanf(inFile, "%s", word);
        if(nRec > 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

long countWords2(FILE* inFile)
{
    long count = 0;
    char word[MAXLENGTH];
    while(fscanf(inFile, "%s", word) > 0)
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
        long cnt = countWords(fp);
        printf("\nSo tu trong van ban = %d\n", cnt);
    }

    getch();
}