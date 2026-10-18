#include<iostream>
using namespace std;
int main(){
	int num, x;
		cout<<"Enter a number"<<endl;
		cin>>num;
	for(x = 1; x<=10; x++){
		cout<<num<<"X"<<x<<"="<<num*x<<endl;
	}
	return 0;
}
