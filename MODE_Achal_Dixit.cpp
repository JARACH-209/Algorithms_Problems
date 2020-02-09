
/* Author - jarach_2.0.9
Achal Dixit
02/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int mode(int a[],int n)
{
	int l=n,s=0,m=l/n;
	while(s<=l)
	{
		m=(l+s)/2;
		if(a[m]>a[m+1]&&a[m]>a[m-1])
		return a[m];
		else if(a[m]<a[m+1]&&a[m]>a[m-1]) s=m;
		else if(a[m]>a[m+1]&&a[m]<a[m-1]) l=m;
		else return 0;
	}
}
int main(){
	int n,t,j,i,x;
	cin>>t;int r[t];
	if(t==0){
		cout<<"0"<<endl;
	}
	for(i=0;i<t;i++){
		cin>>n;
		if(n==0){ cout<<"0"<<endl;return 0;
		}
		if(n==1){
			cin>>n;cout<<n<<endl;return 0;
		}
		if(n==2){
			int a,b;
			cin>>a;cin>>b; cout<<((a>b)?a:b)<<endl;
			return 0;
		}
		int a[n];
		for(int j=0;j<n;j++){
			cin>>x; a[j]=x;
		}
		r[i] = mode(a,n);
	}
	for(i=0;i<t;i++) cout<<r[i]<<endl;
	return 0;
}
