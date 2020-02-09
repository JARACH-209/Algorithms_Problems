/* Author - jarach_2.0.9
Achal Dixit
25/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
/*unsigned long long int fac(long long int n){
	unsigned long long int s=1;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	return s;
}
unsigned long long int bst(long long int n){
	return (fac(2*n)/(fac(n+1)*fac(n)));
}
*/
unsigned long int bst(unsigned int n){
	if(n<=1) return 1;
	unsigned long int r=0;
	for(int i=0;i<n;i++){
		r+=bst(i)*bst(n-i-1);
	}
	return r;
}
int main(){
	int n=0,i=0,j=0,k=0,t=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		if(n==0||n==1) cout<<"1"<<endl;
		else
		cout<<bst(n)<<endl;	
	}
	return 0;
}
