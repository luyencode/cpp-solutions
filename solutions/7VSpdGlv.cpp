#include<stdio.h>
#include<conio.h>

float deQuy(int n)
{
	if(n == 1)
		return 0.5;
	return 1.0 / (1 + deQuy(n - 1));
}

float deQuyDuoi(int n, float x = 0.5)
{
	if(n == 1)
		return x;
	return deQuyDuoi(n - 1, 1.0 / (1 + x));
}

float khuDeQuy(int n)
{
	float tong = 0.5;
	for(int i = 2; i <= n; i++)
	{
		tong = 1.0 / (1 + tong);
	}
	return tong;
}
int main()
{
	int n;
	printf("\nNhap n: "); scanf("%d", &n);

	printf("\nDe quy %d = %f", n, deQuy(n));
	printf("\nDe quy duoi %d = %f", n, deQuyDuoi(n));
	printf("\nKhu de quy %d = %f", n, khuDeQuy(n));

	getch();
	return 0;
}