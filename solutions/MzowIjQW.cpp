/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

double fSum(FILE* inFile)
{
    double sum = 0, num;
    while(fscanf(inFile, "%lf", &num) > 0)
    {
        sum += num;
    }
    return sum;
}

void main()
{
    char* fname = "NumData.txt";
    FILE* fp = fopen(fname, "rt");
    if(fp != NULL)
    {
        double sum = fSum(fp);
        printf("Sum is %lf.\n", sum);
        fclose(fp);
    }
    else
    {
        printf("File %s not found.\n", fname);
    }
    getch();
}