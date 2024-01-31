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
	int x;
	cout<<"ENTER AGE"<<endl;
	cin>>x;
	
	
	try{
	if(x>18){
		throw 18;
		cout<<"YOURE VOTE VALID.."<<endl;
		cout<<x<<endl;
	}else{
		cout<<"YOURE NOT VALID FOR VOTE.."<<endl;
		cout<<x<<endl;
	}
}
	catch(...){
		cout<<"YOURE NOT VALID FOR VOTE ...."<<endl;
	}
	

}
