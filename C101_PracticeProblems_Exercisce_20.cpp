/*
	7:58am /8/19/2026
*/
#include<iostream>
using namespace std;
int main(){
	
	cout<<"Here's a list of the ASCII values of all the upper"
		<<"case latters."<<endl;
	char letter ='A';
	while(letter <='X'){
		cout<<letter<<"  "<<int(letter)<<endl;
	}	
	
	return 0;
}