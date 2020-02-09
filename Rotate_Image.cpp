
/* Author - jarach_2.0.9
Achal Dixit
26/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
	int n=0,t=0,i,j=0,k=0,f,g=0,p=1;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		int a[n][n];
		char c; cin>>c;
		for(int j=0;j<n;j++){
		for(int k=0;k<n;k++)
		{
			cin>>c;cin>>f;
			a[j][k] = f;
		}
		cin>>c; cin>>c;
		} 
		/*for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				a[j][k] = a[k][j];
			}
		}*/
		cout<<"[";
		for(int j=0;j<n;j++){
			for(int k=n-1;k>-1;k--){
				if(k==n-1) cout<<"["<<a[k][j]<<",";
				else if(k==0) cout<<a[k][j]<<"]";
				else cout<<a[k][j]<<",";
			}
			if(j!=n-1)cout<<",";
		}
		cout<<"]";
		cout<<endl;
	}
	return 0;
}
