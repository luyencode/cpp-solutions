/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

void CapPhat(int*& a, int n)  // Cách 1 dùng tham chiếu
{
    //a = new int[n];
    a = (int*)malloc(n * sizeof(int));
}

int* CapPhat(int n)   // Cách 2 Không thay đổi trực tiếp tham số mà trả về
{
    int* a = new int[n];
    //int* a = (int*)malloc(n * sizeof(int));
    return a;
}
void CapPhat(int** p,int n)   // Cách 3 Sử dụng con trỏ p trỏ đến con trỏ a này. Hàm sẽ thay đổi giá trị của con trỏ a gián tiếp thông qua con trỏ p.
{
    //*p = new int[n];
    int* a = (int*)malloc(n * sizeof(int));
}

int main()
{
    int n = 5;
    int* a = CapPhat(n);

    //CapPhat(a, n);      // Sử dụng hàm truyền đối số kiểu tham chiếu
    


    //CapPhat(&a,n);        // Sử dụng hàm với tham số là con trỏ trỏ cấp n + 1
    if(a == NULL)
        printf("Cap phat thai bai!");
    else 
    {
            printf("Cap phat thanh cong");
            delete []a;
    }
    getch();
    return 0;
}