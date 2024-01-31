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
	int x=5;
	int y=0;
	int z;
	
	try{
	if(y==0){
		throw 4;
	}else{
		z=x/y;
		cout<<z<<endl;
	}
}
	catch(...){
		cout<<"ENTER VALID CHOICE...."<<endl;
	}
	

}
