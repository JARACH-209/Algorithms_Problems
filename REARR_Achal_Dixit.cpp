/* Author - jarach_2.0.9
Achal Dixit
02/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
void rearr(int a[],int n){
	int S[n/2],P[n/2];
	for(int i=0;i<n/2;i++)	
		S[i] = a[i];
	for(int j=n/2;j<n;j++)				
		P[j-n/2] = a[j];
	for(int i=0;i<n/2;i++){
		if(i==n-1) cout<<S[i]<<" "<<P[i];
		else cout<<S[i]<<" "<<P[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n=0,t=0,i=0,j=0,k=0,f=0;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		int a[n];
		for(j=0;j<n;j++){
			cin>>f;
			a[j] = f;
		}
		rearr(a,n);
		}
	return 0;
}
