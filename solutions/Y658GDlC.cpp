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

//trả về vị trí xuất hiện đầu tiên của chuỗi s1 trong chuỗi s và sẽ trả về giá trị NULL trong trường hợp không tìm thấy.
//int strstr(char *s, char *s1);

int STRSTR(char s1[], char s2[])
{
    int length1 = STRLEN(s1);
    int length2 = STRLEN(s2);
    int Start;
    bool Check;
    // duyệt chuỗi s1
    for(int i = 0; i < length1; i++)
    {
        if(s1[i] == s2[0])    // nếu bất kỳ phần tử nào trong s1 == phần tử đầu tiên của s2 
        {
            Start = i;         // bắt đầu đếm tại vị trí đó
            Check = true;
            int Temp = Start;
            for(int j = 1; j < length2; j++)
            {
                if(s1[++Temp] != s2[j])        // Kiểm tra coi có cái nào khác không ?
                {
                    Check = false;
                    break;
                }
            }
            if(Check == true)
            {
                return Start;
            }
        }
    }
    return -1;
}
int main()
{
    char s1[] = "Vuong Tri Tai";
    char s2[] = "Tai";

    int ViTri = STRSTR(s1, s2);
    printf("\nVi tri xuat hien cua chuoi |%s| trong chuoi |%s| la: %d", s2, s1, ViTri);

    getch();
    return 0;
}