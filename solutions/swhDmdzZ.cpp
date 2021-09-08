#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (float a[], int &n)
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
		scanf("%f", &a[i]);
	}
}

void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%8.3f", a[i]);
	}
}

int kiemTraToanAm(float a[], int n)
{
	/*if(n == 0)
		return 0;
	if(n == 1)
	{
		if(a[0] < 0)
			return 1;
		return 0;
	}
	if(kiemTraToanAm(a, n - 1) && a[n - 1] < 0)
		return 1;
	return 0;*/

	if(n == 0)
		return 0;
	if(n == 1)
	{
		if(a[0] < 0)
			return 1;
		 return 0;
	}
	if(a[n - 1] >= 0)
		return 0;
	return kiemTraToanAm(a, n - 1);
}
int main()
{
	int n;
	float a[MAX];

	nhap(a, n);
	xuat(a, n);

	int check = kiemTraToanAm(a, n);
	if(check)
		printf("\nMang toan am ! ");
	else
		printf("\nKhong thoa");

	getch();
	return 0;
}