/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

NODE* getnode(KieuDuLieu x)
{
    NODE* p;
    p = new NODE;
    if(p == NULL)
        return NULL;

    p->info = x;
    p->pNext = NULL;

    return p;
}