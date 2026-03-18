//nhap n va kiem tra n co phai so chan ko

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	
	if(n%2==0){   //luu y gan gia tr dung = con neu so sanh dung ==
		cout<<"n la so chan";
	}
	else{
		cout<<"n la so le";
	}
	
	return 0;
}
