#include<stdio.h>
#include<conio.h>

int deQuy(int n)
{
	if(n == 0)
		return 0;
	return deQuy(n / 10) + n % 10;
}

int deQuyDuoi(int n, int x = 0)
{
	if(n == 0)
		return x;
	return deQuyDuoi(n / 10, x + n % 10);
}

int khuDeQuy(int n)
{
	int tong = 0;
	do
	{
		tong += n % 10;
	}while(n /= 10);
	return tong;
}
int main()
{
	int n;
	printf("\nNhap n: "); scanf("%d", &n);

	printf("\nDe quy %d tong cac chu so = %d", n, deQuy(n));
	printf("\nDe quy duoi %d tong cac chu so = %d", n, deQuyDuoi(n));
	printf("\nKhu de quy %d tong cac chu so = %d", n, khuDeQuy(n));

	getch();
	return 0;
}