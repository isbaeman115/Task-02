#include<iostream>
using namespace std;
int main(){
	int num,x,temp=0;
	cout<<"Enter a number you user"<<endl;
	cin>>num;
	for(x=1;x<=num;x++)
	{
		temp+=x;
	}
	cout<<temp;
	return 0;
	
}
