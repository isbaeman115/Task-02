#include<iostream>
using namespace std;
int main(){
	int num,rem,count = 0;
	cout<<"Enter a number you user"<<endl;
	cin>>num;
	rem = num%10;
	while(rem!=0){
		count++;
		num = num/10;
		rem = num%10;
	}
	cout<<count;
}
