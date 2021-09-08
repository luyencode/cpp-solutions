#include<stdio.h>
#include<conio.h>

int deQuy(int n)
{
	if(n < 10)
	{
		return n;
	}
	return deQuy(n / 10);
}

int main()
{
	int n;
	printf("\nNhap n: "); scanf("%d", &n);

	printf("\nDe quy %d chu so dau tien = %d", n, deQuy(n));
	

	getch();
	return 0;
}