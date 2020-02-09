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
int main(){
	int n=0,t=0,i,j=0,k=0,x=0,y=0;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>x;cin>>y;
		int a[x][y];
		for(j=0;j<x;j++)
			for(k=0;k<y;k++){
				cin>>a[j][k];
			}
		for(j=0;j<y;j++){
			for(k=0;k<x;k++){
				if(k!=x-1)cout<<a[k][j]<<" ";
				else
				cout<<a[k][j];
			}
			cout<<endl;
		}
	}
	return 0;
}
