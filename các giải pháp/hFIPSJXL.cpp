#include<iostream>
using namespace std;
int main(){
	int n,i;
	i = 1;
	cout<<"nhap so >0: ";
	cin >>n;
	while(i<=n){
	 if(n % i == 0 && i%2 != 0){
	 cout<<"    "<< i;
	 }
	i++;	
	}

}
