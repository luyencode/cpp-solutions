/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int a = 5, *pa = &a;
    printf("\nGia tri bien pa: %d", pa);
    printf("\nDia chi cua bien a: %d", &a);
    // -> pa và &a đều chỉ địa chỉ của biến a

    printf("\nGia tri vung nho pa tro den: %d", *pa);
    printf("\nGia tri cua bien a: %d", a);
    // -> *pa và a đều chỉ nội dung của biến a

    printf("\nDia chi bien pa: %d", &pa);
    // -> địa chỉ biến pa, 

    // có 2 cái địa chỉ
    // 1 là địa chỉ của biến con trỏ pa
    // 2 là địa chỉ mà con trỏ pa trỏ đến
// Toán tử * để lấy ra giá trị mà con trỏ đang trỏ đến
// Ko để toán tử gì cả thì lấy ra địa chỉ mà con trỏ đang trỏ đến
// Nếu để cả dấu & trước tên con trỏ thì ta đang lấy ra "địa chỉ của riêng" con trỏ.
  getch();
  return 0;
}