#include<stdio.h>
#include<conio.h>

int deQuy(int n)
{
	if(n % 2 != 0)
		return n;
	return deQuy(n/2);
}

int main()
{
	int n;
	printf("\nNhap n: "); scanf("%d", &n);

	printf("\nUoc so le lon nhat cua %d la %d", n, deQuy(n));

	getch();
	return 0;
}