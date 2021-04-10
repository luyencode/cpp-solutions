/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    float y = 2;
    char c = 'A';

    // Con trỏ void đọc là con trỏ vô kiểu. Nó có thể trỏ đến bất cứ ô nhớ kiểu nào. Nhưng khi lấy ra giá trị nó trỏ đến
    // thì ta phải ép kiểu.
    void* p;
    p = &x;
    cout<<*((int*)p); // 1

    p = &y;
    cout<<endl<<*((float*)p);

    p = &c;
    cout<<endl<<*((char*)p);

    system("pause");
    return 0;
}