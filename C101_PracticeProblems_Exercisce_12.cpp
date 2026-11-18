/*
	8/18/2026/06:06pm
*/
#include<iostream>
using namespace std;
int main(){
	
	cout<<"Hello Programing:"<<endl;
	// Variable
	float income;
	
	cout<<endl<<"Enter your monthly income :";cin>>income;
	
	if(income < 0.0){
		cout<<"You are living below the poverty line."<<endl;
	}else if(income >= 0.0 && income < 1200.00){
		cout<<"Yout are living in below the poverty"<<endl;
	}else if(income >= 1200.0 && income < 2500.00){
		cout<<"Your are living in moderate comfort."<<endl;
	}else if(income >= 2500.00){
		cout<<"You are well off."<<endl;
	}
		
	return 0;
}