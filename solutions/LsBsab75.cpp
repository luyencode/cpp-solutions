/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;

void TaoMangNgauNhien(int* a, int n)
{
    srand(time(0));
    for(int i = 0; i < n; i++)
    {
        // Random từ 1 đến 50
        a[i] = rand() % 50 + 1;
    }
}

void NhapMang(int*a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d] = ", i);
        scanf("%d", a++);
    }
}

void XuatMang(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", *(a++));
    }
}

bool KiemTraDoiXung(int x)
{
    int sodaonguoc = 0;
    int temp = x;
    while(temp != 0)
    {
        sodaonguoc = sodaonguoc * 10 + temp % 10;
        temp = temp / 10;
    }
    if(sodaonguoc == x)
        return true;
    return false;
}

int TimSoDoiXungDauTien(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        bool checkdoixung = KiemTraDoiXung(a[i]);
        if(checkdoixung == true)
            return a[i];
    }
    return -1;
}

bool KiemTraSoCoChuSoDauLe(int x)
{
    int temp = x;
    while(temp > 9)
    {
        temp /= 10;
    }
    if(temp % 2 == 0)
        return true;
    return false;
}

int TimSoCoChuSoDauTienLe(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        bool checkchusodaule = KiemTraSoCoChuSoDauLe(a[i]);
        if(checkchusodaule)
            return a[i];
    }
    return -1;
}

bool KiemTraSoCoDang2Mu(int x)
{
    int i = 0;
    while(true)    // Mặc định chạy vô tận
    {
        if(pow(2, i) == x)    // Chứng tỏ x có dạng 2^k
            return true;
        if(pow(2, i) > x)
            return false;    // ĐK để thoát vòng lặp
        i++;
    }
    return false;
}

void LietKeSoCoDang2Mu(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        bool checksodang2mu = KiemTraSoCoDang2Mu(a[i]);
        if(checksodang2mu == true)
            cout<<a[i]<<" ";
    }
}
int TimMax(int* a, int n)
{
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int TimBCNN(int* a, int n)
{
    int max = TimMax(a, n);
    int BCNN = max;

    while(true)
    {
        bool check = true;
        for(int i = 0; i < n; i++)
        {
            if(BCNN % a[i] != 0)
            {
                check = false;
                break;
            }
        }
        if(check == true)
            return BCNN;
        BCNN += max;
    }
}

void LietKeChuSoXuatHienItNhat(int* a, int n)
{
    int demchuso[10] = {0};  // Mảng có công dụng đếm số lần xuất hien cua mỗi chữ số
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            demchuso[0]++;
        }
        else
        {
            int temp = a[i];
            while(temp != 0)
            {
                int chuso = temp % 10;
                demchuso[chuso]++;
                temp /= 10;
            }
        }
    }
    int min = 0;
    for(int i = 0; i < 10; i++)
    {
        if(demchuso[i] != 0)
        {
            if(min == 0)
                min = demchuso[i];
            else
            {
                if(demchuso[i] < min)
                {
                    min = demchuso[i];
                }
            }
        }
    }
    cout << "Nhung chu so xuat hien it nhat trong mang la: ";
    for(int i = 0; i < 10; i++)
    {
        if(demchuso[i] == min)
            cout << i <<" ";
    }
}
int TongPhanTuChuSoDauLe(int* a, int n)
{
    int tong = 0;
    for(int i = 0; i < n; i++)
    {
        bool checkchusodaule = KiemTraSoCoChuSoDauLe(a[i]);
        if(checkchusodaule)
            tong += a[i];
    }
    return tong;
}
bool KiemTraNT(int x)
{
    if(x < 2)
    {
        return false;
    }
    if(x > 2)
    {
        if(x % 2 == 0)
            return false;
        else 
        {
            for(int i = 3; i <= (int) sqrt(x); i += 2)
            {
                if(x % 2 == 0)
                    return false;
            }
        }
    }
    return true;
}
int TongNguyenToTrongMang(int* a, int n)
{
    int tong = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraNT(a[i]))
            tong += a[i];
    }
    return tong;
}
int DemNguyenTo(int* a, int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraNT(a[i]))
            dem++;
    }
    return dem;
}

void XoaPhanTu(int*& a, int& n, int vitrixoa)
{
    for(int i = vitrixoa; i < n - 1; i++)
    {
        a[i] = a[i+1];
    }
    n--;
    a = (int*)realloc(a, n * sizeof(int));
}

void XoaPhanTuTrungGiuLai1(int a[], int& n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i  + 1; j < n; j++)      // Duyệt kiểm tra những đứa đứng sau xem có đứa nào trùng với
            // a[i] không?
        {
            if(a[j] == a[i])
            {
                XoaPhanTu(a, n, j);
                j--;
            }
        }
    }
}

void ThemPhanTu(int*& a,int& n, int vitrithem, int giatrithem)
{
    n++;
    a = (int*)realloc(a, n * sizeof(int));
    for(int i = n - 1; i > vitrithem; i--)
    {
        a[i] = a[i - 1];
    }
    a[vitrithem] = giatrithem;
}

void Them0VaoSauChanDuong(int*& a, int& n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i] > 0)
        {
            ThemPhanTu(a, n, i + 1, 0);
            i++;
        }
    }
}

int TimMinLe(int* a, int n)
{
    int min = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            min = a[i];
            break;
        }
    }
    if(min == 0)
        return min;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < min && a[i] % 2 != 0)
        {
            min = a[i];
        }
    }
    return min;
}
void HoanVi(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void SapXepGiamDan(int* a, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                HoanVi(&a[i], &a[j]);
            }
        }
    }
}
// Hàm huyền thoại 
bool KiemTraTrung(int* a, int n, int index)
{
    for(int i = 0; i < index; i++)
    {
        if(a[i] == a[index])
            return true;         // Bị trùng số đằng trước
    }
    return false;
}
int DemSoLanXuatHienCuax(int* a, int n, int x)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
            dem++;
    }
    return dem;
}
void LietKeTanXuat(int* a, int n)
{
    SapXepGiamDan(a, n);
    printf("\n");
    XuatMang(a, n);
    for(int i = 0; i < n; i++)
    {
        if(KiemTraTrung(a, n, i))
            continue;
        else 
        {
            int dem = DemSoLanXuatHienCuax(a, n, a[i]);
            printf("%d xuat hien %d lan\n",a[i],dem);
        }
    }
}

bool KiemTraMangDoiXung(int* a, int n)
{
    for(int i = 0; i < n / 2; i++)
    {
        if(a[i] != a[n - 1 - i])
            return false;
    }
    return true;
}
int main()
{
    int* a = NULL;
    int n = 0;
    int chon;
    system("color 1f");
    do 
    {
        system("cls");
        cout<<"0. Thoat\n\n";
        cout<<"1. Nhap Mang\t\t\t\t";
        cout<<"2. Xuat Mang\n\n";
        cout<<"3. Tim So Doi Xung Dau Tien\t\t";
        cout<<"4. Tim So Co Chu So Dau Le Dau Tien\n\n";
        cout<<"5. Liet Ke Cac So Co Dang 2^k\t\t";
        cout<<"6. Tim So Chan Lon Nhat Nho < ALL So Le\n\n";
        cout<<"7. Tim BCNN Cua Cac Phan Tu\t\t";
        cout<<"8. Liet Ke Chu So Xuat Hien It Nhat\n\n";
        cout<<"9. Tong Phan Tu Co Chu So Dau Le\t";
        cout<<"10. Tinh Trung Binh Cong Cac So NT\n\n";
        cout<<"11. Xoa Trung Chi Giu Lai 1\t\t";
        cout<<"12. Them 0 Vao Sau Phan Tu Chan Duong\n\n";
        cout<<"Moi ban chon menu:\n";
        cin>>chon;
        switch (chon)
        {
        case 0:break;
        case 1:
            {
                do 
                {
                    cout<<"Nhap so luong phan tu:\n";
                    cin>>n;
                    if(n < 0)
                        cout<<"So luong khong hop le. Nhap lai\n";
                }while(n < 0);
                // Cấp phát bộ nhớ cho con trỏ
                a = new int[n];
                NhapMang(a, n);
                break;
            }
        case 2:XuatMang(a, n); system("pause"); break;
        case 3: break;
        case 4: break;
        case 5: break;
        case 6: break;
        case 7: break;
        case 8: break;
        case 9: break;
        case 10: break;
        case 11: break;
        case 12: break;
        default:cout<<"Chon menu sai!"; system("pause");break;
        }
    }while(chon != 0);
    // Thu hồi những ô nhớ ở vùng HEAP con trỏ a đang tham chiếu đến
    if(a != NULL)
        delete []a;
    system("pause");
    return 0;
}