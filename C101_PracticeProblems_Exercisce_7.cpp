/* 4/10/2026 
 What is the ouput when the following code fragment is executed?
*/

#include<iostream>
using namespace std;

int main(){
	char ch;
	char title[] = "Titanic";
	
	ch = title[1];
	title[3] = ch;
	
	cout<<title<<endl;
	cout<<ch<<endl;
	
	return 0;
}