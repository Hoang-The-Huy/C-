//nhap n va tinh tong 1+2+3+...+n

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	
	int sum=0; //khoi tao tong
	
	for(int i=1;i<=n;i++){
		sum+=i;  //no chinh la sum=sum+i moi lan lap + them i vao sum
	}
	
	cout<<"Tong= "<<sum;
	
	return 0;
}
