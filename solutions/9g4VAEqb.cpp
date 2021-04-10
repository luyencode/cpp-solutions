/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

void ProcessList(LIST l)
{
    NODE* p;
    p = l.pHead;
    while(p != NULL)
    {
        ProcessNode(p);
        p = p->pNext;
    }
}

// Cách viết khác

void ProcessList(LIST l)
{
    for(NODE* p = l.pHead; p != NULL; p = p->pNext)
    {
        ProcessNode(p);
    }
}