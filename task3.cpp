/*1. WAP to implement exception handling mechanism for
different types of scenarios:
- a number cannot be divide by zero
- a person cannot be able to vote if his/her age is less
than 18
- a password cannot be validate if it doesn’t contains
an uppercase letter*/

#include<iostream>
using namespace std;

int main(){
	char a[100];

	cout<<"ENTER PASS...."<<endl;
	cin>>a[100];
	
	try{
	if(a[100]<97 && a[100]>122){
		throw a[100];
		cout<<"STRONG"<<endl;
	}else{
			cout<<"WEAK"<<endl;
	}
}
	catch(...){
		cout<<"STRONG...."<<endl;
	}
	

}
