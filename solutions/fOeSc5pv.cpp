/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

double fMinPositive(FILE* inFile)
{
    double Min = -1, num;
    while(fscanf(inFile, "%lf", &num) > 0)
    {
        if(num > 0)
        {
            if(Min == -1 || num < Min)
                Min = num;
        }
    }
    return Min;
}
void main()
{
    char* fname = "MinData.txt";
    double Min;
    FILE* fp = fopen(fname, "rt");
    if(fp == NULL)
    {
        printf("File %s not found.\n", fname);
        return;
    }
    Min = fMinPositive(fp);
    if(Min > 0)
        printf("Positive min is %lf.\n", Min);
    else
        printf("Positive number(s) not found!\n");
    fclose(fp);
    getch();
}