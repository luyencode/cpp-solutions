#include<stdio.h>
#include<conio.h>

bool deQuy(int n)
{
	if(n == 0)
		return true;  // toàn lẻ
	if((n % 10) % 2 == 0)
		return false; // sai do đã phát hiện ra có 1 chữ số chẵn
	return deQuy(n / 10); // bỏ đi 1 chữ số
}

bool ToanChuSoLe (int N)
{
	if (N < 10) return (N % 2 == true);
	int HangDonVi = N % 10;
	return (HangDonVi % 2 == true) && ToanChuSoLe(N/10);
}

bool khuDeQuy(int n)
{
	printf("\nSo %d gom toan cac chu so le hay khong ?\n", n);
	bool Check = true;
	while(n /= 10)
	{
		if((n % 10) % 2 == 0)
		{
			Check = false;
		    break;
		}
	}
	return Check;
}
int main()
{
	int n;
	printf("\nNhap n: "); scanf("%d", &n);

	bool check1= deQuy(n);
	if(check1)
		printf("\nToan chu so le!");
	else
		printf("\nKhong !");

	bool check2 = khuDeQuy(n);
	if(check2)
		printf("\nToan chu so le!");
	else
		printf("\nKhong !");

	getch();
	return 0;
}