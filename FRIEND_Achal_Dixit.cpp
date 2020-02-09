/* Author - jarach_2.0.9
Achal Dixit
02/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
typedef struct node{
	int n;
	int p;
	struct node* next;
}list;

int main(){
	int n,t,i,j,k,x,f,y;
	cin>>t;
	list* h;
	list* e=h;
	for(i=0;i<t;i++){
		cin>>n;int l=n,a[n],b[n];
		cin>>f;
		if(n==f){
			cout<<"0 0"<<endl; continue;
		}
		for(j=0;j<n;j++){
			cin>>x;
			cin>>y;
			a[j] = x; 
			b[j] = y;
		} 
		for(j=0;j<n-1;j++)
			for(k=0;k<n-j-1;k++)
				if(b[k]>b[k+1]){
					int tm = b[k];
					b[k] = b[k+1];
					b[k+1] = tm;
					int tm2 = a[k];
					a[k] = a[k+1];
					a[k+1] = tm2;
				}
				
		for(j=0;j<f;j++)
			b[j] = -1;
			
		for(j=0;j<n-1;j++)
			for(k=0;k<n-1-j;k++)
				if(a[k]>a[k+1]){
					int tm = b[k];
					b[k] = b[k+1];
					b[k+1] = tm;
					int tm2 = a[k];
					a[k] = a[k+1];
					a[k+1] = tm2;
				}
				
		for(j=0;j<n;j++) {
			if(b[j]==-1)
			 continue;
			cout<<a[j]<<" "<<b[j]<<endl;
			}
		}
		return 0;
		
	}
	
