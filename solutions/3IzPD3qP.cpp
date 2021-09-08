#include<stdio.h>
#include<conio.h>


int deQuy(int n)
{
	int Tong = 0;
	if(n == 0)
		return 0;
	Tong = Tong * 10 + n % 10;
	return deQuy(n / 10);
}
int deQuyDuoi(int n, float tong = 0)
{
	if(n == 0)
		return tong;
	return deQuyDuoi(n / 10, tong * 10 + n % 10);
}

int khuDeQuy(int n)
{
	int tong = 0;
	while(n != 0)
	{
		tong = tong * 10 + n % 10;
		n /= 10;
	}
	return tong;
}
int main()
{
	int n;
	printf("\nNhap n: "); scanf("%d", &n);
	printf("\nDe quy %d so dao nguoc = %d", n, deQuy(n));
	printf("\nDe quy duoi %d so dao nguoc = %d", n, deQuyDuoi(n));
	printf("\nKhu de quy %d so dao nguoc = %d", n, khuDeQuy(n));

	getch();
	return 0;
}