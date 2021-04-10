/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

double fMax(FILE* inFile, int& Error)
{
    Error = 0;
    double Max = 0, num;
    if(fscanf(inFile, "%lf", &num) <= 0)
    {
        Error = 1;
        return Max;
    }
    Max = num;
    while(fscanf(inFile, "%lf", &num) > 0)
    {
        if(num > Max)
            Max = num;
    }
    return Max;
}
void main()
{
    char* fname = "MaxData.txt";
    int Error; double Max;
    FILE* fp = fopen(fname, "rt");
    if(fp == NULL)
    {
        printf("File %s not found.\n", fname);
        return;
    }
    Max = fMax(fp, Error);
    if(!Error)
        printf("Max is %lf.\n", Max);
    else
        printf("Number(s) not found.\n");
    fclose(fp);
    getch();
}