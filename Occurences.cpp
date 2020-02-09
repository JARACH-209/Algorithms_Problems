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
		char x;
		n=0;
		int arr[1000];
		do{
			scanf("%d%c",&k,&x);
			arr[n]=k;
			++n;
		}while(x!='\n');
		cout<<n<<endl;
		int a[n],ind[n],l,r,f=0;
		for(j=0;j<n;j++){
			a[j] = arr[j];
			cout<<arr[j];
		}
		cout<<endl;
		cin>>l;cin>>r;
		--l;--r;
	}
}
