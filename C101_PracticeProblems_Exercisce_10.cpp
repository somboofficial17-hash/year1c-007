/* 4/10/2026 
10f. Suppose that the following code fragment is executed.
*/
#include<iostream>
using namespace std;
int main(){
	
	const int LENGTH =21;
	char message [LENGTH];
	int i;
	
	cout<<"Enter a sentence on the line below."<<endl;
	cin>>message[0];
	
	i = 0;
	while (i < LENGTH - 1 && message[i] != '\n'){
		++i;
		cin>>message[i];
	}
	message[i]= '\0'; 
	
	cout<<message<<endl;
		
	return 0;
	
}