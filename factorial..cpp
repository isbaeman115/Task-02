#include<iostream>
using namespace std;
int main(){
	int num, x, temp=1, y;
	cout<<"Enter your number you user"<<endl;
	cin>>num;
	y = num;
	for(x=y;x>=1;x--){
		temp*=x;
	}
	cout<<"Factorial = "<<temp;
	return 0;
}
