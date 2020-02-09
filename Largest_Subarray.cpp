/* Author - jarach_2.0.9
Achal Dixit
02/09/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
#include <iostream>
using namespace std;
int main(){
	int n,i,j,k,t;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		int a[n],s,e,r,l,m=1,max=-1;
		for(j=0;j<n;j++)
			cin>>a[j];

		for(j=0;j<n;j++){
			s=j;m=0;
			for(k=j;k<n-1;k++){
				if(a[k]<a[k+1]){
					//e=k+1;
					++m;
				}
				else break;
			}
			if(m>max){
				max = m;
				l=j;
				r=e;
			}
		}
		for(j=l;j<l+max+1;j++){
			if(j!=l+max)cout<<a[j]<<" ";
			else
			cout<<a[j]<<endl;
		}
		cout<<max+1<<endl;
	}
}
