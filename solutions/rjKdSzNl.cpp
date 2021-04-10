/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

void Xuat(LIST l)
{
    for(NODE* p = l.pHead; p != NULL; p = p->pNext)
    {
        printf("%4d", p->info);
    }
}