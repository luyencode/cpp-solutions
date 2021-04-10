/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void UpcaseFile(FILE* inoutFile)
{
    char ch;
    long pos;
    while(!feof(inoutFile))
    {
        ch = fgetc(inoutFile);            // đọc ký tự hiện hành
        if(feof(inoutFile)){
            break;
        }
        pos = ftell(inoutFile);              // ghi nhận vị trí đọc ghi hiện tại
        fseek(inoutFile, pos - 1, SEEK_SET); // dời vị trí đọc ghi lên trước
        ch = toupper(ch);                    // đổi sang ký tự hoa
        fputc(ch, inoutFile);                // ghi ký tự
        fseek(inoutFile, pos, SEEK_SET);    // dời vị trí đọc ghi về chỗ cũ
    }
}
void main()
{
    char* fname = "Data.txt";
    FILE* fpInOut = fopen(fname, "r + b");
    if(fpInOut == NULL)
    {
        printf("File %s not found!\n", fname);
        return;
    }
    UpcaseFile(fpInOut);
    fclose(fpInOut);
    getch();
}