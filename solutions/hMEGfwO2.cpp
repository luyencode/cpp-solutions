/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

void InsertBeforeQ(LIST& L, NODE* p, NODE* q)
{
    if(q == NULL)
        return;
    if(q == L.pHead)  // Nếu q đúng là NODE đầu thì gọi hàm AddHead có sẵn
    {
        AddHead(L, q);
    }
    else
    {
        // Sau khi chạy vòng for thì NODE z sẽ chạy tới trước NODE q
        for(NODE* z = L.pHead; z ->pNext != q; z = z ->pNext);  
        
        z->pNext = p;
        p->pNext = q;
    }
}