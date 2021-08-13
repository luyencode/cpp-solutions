#include<iostream>
using namespace std;
int main(){
	int n,i, t;
	t=0;
	i = 1;
	cout<<"nhap so >0: ";
	cin >>n;
	while(i<=n){
	 if(n % i == 0){
	 t = t+i;	
	 }
	i++;	
	}
cout<<"Tong cac uoc la : "<<t<<"\n";
}
