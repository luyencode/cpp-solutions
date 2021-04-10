/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

NODE* GetNode(HOCSINH DATA)
{
    NODE *p = new NODE; // Khởi tạo con trỏ p

    // Nếu trường hợp máy tính hết bộ nhớ.
    if(p == NULL)
    {
        printf("\nKhong du bo nho de cap phat con tro");
        getch();
        return NULL; // trả về rỗng.
    }
    p ->data = DATA; // Đưa data vào trong Node.
    p ->pNext = NULL; // Khởi tạo mối liên kết
    return p; // Trả Node p về.
}