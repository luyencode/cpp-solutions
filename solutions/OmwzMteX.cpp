/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include <iostream>
using namespace std;
void main()
{
       
    int* pointer = NULL; // Khai báo con trỏ pointer có thể trỏ đến ô nhớ kiểu int. Con trỏ này chưa được khởi tạo vì pointer chưa trỏ đi đâu cả

    int x = 1;
    int* q = NULL; // q là con trỏ NULL. Cách làm việc với con trỏ an toàn là tốt nhất khai báo và cho con trỏ trỏ đến NULL

    // Cho con trỏ q trỏ đến biến x
    q = &x;

    // Toán tử * là toán tử lấy ra giá trị mà con trỏ đang trỏ đến
    int y = 2;
    q = &y;
    cout<<*q;

    pointer = q;
    
    cout<<"Gia tri ma con tro pointer dang tro den la "<<*pointer<<endl;
    cout<<"Dia chi cua bien y la "<<&y<<endl;
    cout<<"Dia chi ma con tro pointer dang tro den la "<<pointer<<endl; 
    cout<<"Dia chi cua chinh con tro la "<<&pointer;
    system("pause");
}