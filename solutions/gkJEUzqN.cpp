/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

void XoaDau(LIST &l)
{
    if(l.pHead != NULL)
    {
        NODE *p = l.pHead;
        l.pHead = l.pHead ->pNext;
        delete p;
    }
}