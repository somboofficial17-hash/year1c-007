/* 4/10/2026
2. What is the ouput of the program below?
*/

#include<iostream>
using namespace std;

int main(){
	int n = 3;
	while (n >= 0){
		cout<< n * n <<endl;
		--n;
	}
	
	cout << n << endl;
	
	while (n < 4){
		cout<< ++n <<endl;
	}
	cout<<n<<endl;
	
	while (n >= 0){
		
	 cout<<(n /= 2)<<endl;
		
	
	return 0;
}