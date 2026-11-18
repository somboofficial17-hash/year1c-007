/* 4/10/2026
6. What is the ouptu when the following code frament is executed?
*/

#include<iostream>
using namespace std;

int main(){
	int found =0 , count = 5;
	
	if(!found || --count ==0){
		cout<<"danger"<<endl;
	}
	cout<<"count ="<<count <<endl;
	
	return 0;
}