/*4/15/2026
11. The conditional statemetn shown below has been
 writen by an inexpreienced C/C++ programmer.
  The behaior of the statement is not correcly 
  rpressented by the formatting
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter Number :";
	cin>>n;
	if(n < 10){
		if(n > 0){
			cout<<"The number is positive. "<<endl;
		}else{
			cout<<"The number is _________."<<endl;
		}
	}
	
	return 0;
}