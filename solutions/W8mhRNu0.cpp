#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
		}
	}while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	if(n == 0)
		return;
	xuat(a, n - 1);
	printf("%4d", a[n - 1]);
}

void sapXep(int a[], int n)
{
	if(n == 1)
		return;
	for(int i = 0; i <= n - 2; i++)
	{
		if(a[i] > a[n - 1] && a[i] % 2 == 0 && a[n - 1] % 2 == 0)
		{
			int temp = a[i];
			a[i] = a[n - 1];
			a[n - 1] = temp;
		}
	}
	sapXep(a, n - 1);
}
//void sapXep(int a[], int n)
//{
//	if(n == 1)
//		return;
//	if(a[n - 1] % 2 == 0)
//	{
//		for(int i = 0; i <= n - 2; i++)
//		{
//			if(a[i] > a[n - 1] && a[i] % 2 == 0 )
//			{
//				int temp = a[i];
//				a[i] = a[n - 1];
//				a[n - 1] = temp;
//			}
//		}
//	}
//	sapXep(a, n - 1);
//}
int main()
{
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);
	sapXep(a, n);

	printf("\nMang sau khi sap xep cac gia tri chan tang dan, le giu nguyen");
	xuat(a, n);

	getch();
	return 0;
}