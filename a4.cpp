//nhap n va in ra bang cuu chuong

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	
	for(int i=1;i<=10;i++){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
	
	return 0;
}
