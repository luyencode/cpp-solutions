/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

// Thêm NODE p sau NODE q
void InserAfterQ(LIST& L, NODE* p, NODE* q)
{
    if(q == NULL)
        return;
    if(q == L.pTail)  // Nếu q đúng là NODE cuối thì gọi hàm AddTail có sẵn
    {
        AddTail(L, p);
    }
    else
    {
        p->pNext = q->pNext;
        q->pNext = p;
    }
}