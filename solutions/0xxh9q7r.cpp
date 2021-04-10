/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
void CapPhat(int**& a, int sodong,int socot)
{
    a = new int* [sodong];     // Cấp phát tạo ra các dòng
    for(int i = 0; i < sodong; i++)
    {
        a[i] = new int[socot];
    }
}
*/
void CapPhat(int**& a, int sodong, int socot)
{
    a = (int**)calloc(sodong, sizeof(int*));
    for(int i = 0; i < sodong; i++)
    {
        a[i] = (int*)calloc(socot, sizeof(int));
    }
}
void NhapMaTran(int** a, int sodong, int socot)
{
    for(int i = 0; i < sodong * socot; i++)
    {
        printf("Nhap vao a[%d][%d]: ",i / socot, i % socot);
        scanf("%4d", &a[i / socot][i % socot]);
    }
}
void XuatMaTran(int** a, int sodong, int socot)
{
    for(int i = 0; i < sodong * socot; i++)
    {
        printf("%4d", a[i / socot][i % socot]);
        if((i + 1) % socot == 0)
            printf("\n\n");
    }
}
void ThuHoi(int** a, int sodong)
{
    for(int i = 0; i < sodong; i++)
    {
        free(a[i]);
    }
    free(a);
}
/*
void ThuHoi(int*** a, int sodong)
{
    for(int i = 0; i < sodong; i++)
    {
        delete [](*a)[i]; 
    }
    delete [](*a);
}
*/
int main()
{
    int** a = NULL;
    int sodong = 3, socot = 3;
    CapPhat(a, sodong, socot);
    NhapMaTran(a, sodong, socot);
    XuatMaTran(a, sodong, socot);
    if(a != NULL)
    {
        ThuHoi(a, sodong);
    }
    getch();
    return 0;
}