//Nhap n va tinh 1^2 + 2^2 + 3^2 + ... + n^2

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	
	int sum=0;
	
	for(int i=1;i<=n;i++){
		sum=sum+i*2;
	}
	
	cout<<"ket qua= "<<sum;
	
	return 0;
}
