#include<stdio.h>
#include<conio.h>
#include<math.h>


float deQuy(int n)
{
	if(n == 1)
		return sqrt(2.0);
	return sqrt(2 + deQuy(n - 1));
}

float deQuyDuoi(int n, float x = sqrt(2.0))
{
	if(n == 1)
		return x;
	return deQuyDuoi(n - 1, sqrt(2.0 + x));
}

float khuDeQuy(int n)
{
	float S;
	S = sqrt((float)2);
	for(int i = 2; i <= n; i++)
	{
		S = sqrt(2 + S);
	}
	return S;
}
int main()
{
	int n;
	printf("\nNhap n: "); scanf("%d", &n);

	printf("\nDe quy %d = %f", n, deQuy(n));
	printf("\nDe quy duoi %d = %f", n, deQuyDuoi(n));
	printf("\nKhu de quy %d = %f", n,khuDeQuy(n));

	getch();
	return 0;
}