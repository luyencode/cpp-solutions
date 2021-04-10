/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

void transFile(FILE* inFile, FILE* outFile)
{
    int ch;
    while(1)
    {
        ch = fgetc(inFile);
        if(!feof(inFile))
        {
            fputc(ch, outFile);
        }
        else
            break;
    }
}
void main()
{
    FILE *fpIn;
    char* fname = "Data.txt";
    fpIn = fopen(fname,"rt");
    if(fpIn == NULL)
    {
        printf("FIle %s not found\n", fname);
    }
    transFile(fpIn, stdout);
    fclose(fpIn);

    getch();
}