/*  4/10/2026
1. what is the exact ouput of the program below? 
Indicate a blank space int the ouput by writing the symbol |_|.
INdicate a blank line in the ouput by writing blank line.
*/

#include<iostream>
using namespace std;
int main(){
	int n = 4, k = 2;
	
	cout<<++n<<endl;
	cout<<n<<endl;
	
	cout<<n++<<endl;
	cout<<n<<endl;
	
	cout<<-n<<endl;
	cout<<n<<endl;
	
	cout<<--n<<endl;
	cout<<n<<endl;
	
	cout<<n--<<endl;
	cout<<n<<endl;
	
	cout<< n + k <<endl;
	cout<< n <<endl;
	cout<< k <<endl;
	cout<< n << k <<endl;
	
	cout<< n <<endl;
	cout<<" "<< n <<endl;
	cout<<" n" <<endl;
	cout<<" \n" <<endl;
	
	cout<< " n * n = "; // CAREFUL!
	cout<<n * n <<endl;
	cout<< 'n'<<endl;
	
	
	return 0;
}