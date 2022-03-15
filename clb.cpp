#include <iostream.h>
#include <stdio.h>
using namespace std;

int main(){
	int n;
	cout<<"nhap n: ";
	cin>>n;
	
	if(n>=1 && n<=7)
	{
		if(n=1){
				cout<<"Monday";
			}
		else{ if(n=2)
		
				cout<<"Tuesday";
			}
		if(n=3){
				cout<<"Wednesday";
			}
	
		
	}else if(n>7 && n<1){
		cout<<"moi ban nhap lai";
	}		

}