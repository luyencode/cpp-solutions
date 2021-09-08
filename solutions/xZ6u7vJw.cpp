/* 
Đề bài: Nhập vào mảng 1 chiều các số nguyên,
xuất ra mảng vừa nhập và thực hiện các thao
tác sau:
a/ Tính tổng các phần tử của mảng.
b/ Tìm Min - Max của mảng.
c/ Đếm số lượng các số chẵn trong mảng.
d/ Sắp xếp mảng tăng dần/giảm dần

Yêu cầu: Làm hoàn toàn bằng đệ quy.
*/

#include <stdio.h>
#include <conio.h>
#include <limits.h>


//void NhapMang(int *a, int n)
//{
//	if(n == 0)
//	{
//		return;
//	}
//
//	NhapMang(a, n - 1);
//	printf("\nNhap vao a[%d] = ", n - 1);
//	scanf("%d", &a[n - 1]);
//}

void NhapMang(int *a, int n, int i = 0)
{
	if(i == n)
	{
		return; // Kết thúc.
	}
	printf("\nNhap vao a[%d] = ", i);
	scanf("%d", &a[i]);
	NhapMang(a, n, i + 1);
}

void XuatMang(int *a, int n, int i = 0)
{
	if(i == n)
	{
		return;
	}
	printf("%4d", a[i]);
	XuatMang(a, n, i + 1);
}

int TinhTong(int *a, int n, int i = 0, int Tong = 0)
{
	if(i == n)
	{
		return Tong;
	}
	return TinhTong(a, n, i + 1, Tong + a[i]);
}

int TimMin(int *a, int n, int i = 0, int Min = INT_MAX)
{
	if(i == n)
	{
		return Min;
	}
	return TimMin(a, n, i + 1, a[i] < Min ? a[i] : Min);
}

int TimMax(int *a, int n, int i = 0, int Max = INT_MIN)
{
	if(i == n)
	{
		return Max;
	}
	return TimMax(a, n, i + 1, a[i] > Max ? a[i] : Max);
}

int DemSoLuongSoChan(int *a, int n, int i = 0, int dem = 0)
{
	if(i == n)
	{
		return dem;
	}
	return DemSoLuongSoChan(a, n, i + 1, a[i] % 2 == 0 ? dem + 1 : dem);
}

void HoanVi(int &a, int &b)
{
	int Temp = a;
	a = b;
	b = Temp;
}

void SapTangDan(int *a, int n, int i = 0)
{
	if(i == n - 1)
	{
		return;
	}

	for(int k = i + 1; k < n; k++)
	{
		if(a[i] > a[k])
		{
			HoanVi(a[i], a[k]);
		}
	}

	SapTangDan(a, n, i + 1);
}

void SapGiamDan(int *a, int n, int i = 0)
{
	if(i == n - 1)
	{
		return;
	}

	for(int k = i + 1; k < n; k++)
	{
		if(a[i] < a[k])
		{
			HoanVi(a[i], a[k]);
		}
	}

	SapGiamDan(a, n, i + 1);
}

int main()
{
	int n = 5;

	int *a = new int[n];

	NhapMang(a, n);
	XuatMang(a, n);

	printf("\nTong la: %d", TinhTong(a, n));
	printf("\nMin = %d & Max = %d", TimMin(a, n), TimMax(a, n));
	printf("\nSo luong so chan = %d", DemSoLuongSoChan(a, n));

	SapGiamDan(a, n);
	printf("\nMang sau khi sap giam dan la: ");
	XuatMang(a, n);

	SapTangDan(a, n);
	printf("\nMang sau khi sap tang dan la: ");
	XuatMang(a, n);

	delete[] a;
	getch();
	return 0;
}