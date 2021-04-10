/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

void AddTail(LIST &l,NODE* new_ele)
{
    if(l.pTail==NULL)
        l.pHead=l.pTail=new_ele;
    else
    {
        l.pTail->pNext=new_ele;
        l.pTail=new_ele;
    }
}