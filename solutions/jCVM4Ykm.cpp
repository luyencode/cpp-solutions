#include<stdio.h>
#include<conio.h>
#include<math.h>


float deQuy(int n)
{
	if(n == 1)
		return 1;
	return sqrt(n + deQuy(n - 1));
}


float khuDeQuy(int n)
{
	float S = 1;
	for(int i = 2; i <= n; i++)
	{
		S = sqrt(i + S);
	}
	return S;
}
int main()
{
	int n;
	printf("\nNhap n: "); scanf("%d", &n);

	printf("\nDe quy %d = %f", n, deQuy(n));
	//printf("\nDe quy duoi %d = %f", n, deQuyDuoi(n));
	printf("\nKhu de quy %d = %f", n,khuDeQuy(n));

	getch();
	return 0;
}