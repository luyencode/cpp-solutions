/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int STRLEN(char s[])
{
    int dem = 0;
    while (s[dem] != '\0')
    {
        dem++;
    }
    return dem;
}
void HoanVi(char &a, char &b)
{
    char Temp = a;
    a = b;
    b = Temp;
}

void STRREV(char s[])
{
    int length = STRLEN(s);
    for (int i = 0 ; i < length / 2 ; i++)
    {
        HoanVi(s[i], s[length - 1 - i]);
    }
}


void ITOA(int giatri, char ketqua[], int coso)
{
    int idx = 0;
    while(giatri != 0)
    {
        int so = giatri % coso;
        if (so < 9)
        {
            ketqua[idx++] = so + 48;
        }
        else if(so == 10)
        {
            ketqua[idx++] = 'A';
        }
        else if(so == 11)
        {
            ketqua[idx++] = 'B';
        }
        else if(so == 12)
        {
            ketqua[idx++] = 'C';
        }
        else if(so == 13)
        {
            ketqua[idx++] = 'D';
        }
        else if(so == 14)
        {
            ketqua[idx++] = 'E';
        }
        else if(so == 15)
        {
            ketqua[idx++] = 'F';
        }
            giatri /= coso;
    }    
    ketqua[idx] = '\0';
    STRREV(ketqua);
}
int main()
{
    //char ketqua[100];
    // printf("Nhap chuoi: ");
    ////scanf("%s",str2);
 //   gets(ketqua);  // phải dùng gets

    int value = 250;
    char ketqua[100];
    int coso = 16;

    ITOA(value, ketqua, coso);
    printf("\nGia tri %d doi sang he %d = %s",value, coso, ketqua);

    getch();
    return 0;
}