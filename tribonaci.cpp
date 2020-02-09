/* Author - jarach_2.0.9
Achal Dixit
21/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int tri(int n){
	if(n==0) return 0;
	if(n==1||n==2) return 1;
	else
	return tri(n-3)+tri(n-1)+tri(n-2);
}
int main(){
	int n=0,t=0,i,j=0,k=0,x=0,y=0;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>x;
		cout<<tri(x)<<endl;
	}
	return 0;
}
