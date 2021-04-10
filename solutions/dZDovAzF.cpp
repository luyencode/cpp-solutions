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
    FILE* fpIn, *fpOut;
    char* fname = "Data.txt"; char* fcopy = "DataCopy.txt";
    fpIn = fopen(fname, "rt");
    if(fpIn == NULL)
    {
        printf("File %s not found!\n", fname);
        return;
    }
    fpOut = fopen(fcopy, "wt");
    if(fpOut == NULL)
    {
        printf("Can not open file %s!\n", fcopy);
        fclose(fpIn);
        return;
    }
    transFile(fpIn, fpOut);
    fclose(fpIn);
    fclose(fpOut);

    getch();

}