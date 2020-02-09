/* Author - jarach_2.0.9
Achal Dixit
05/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/

    #include <stdio.h>
    #include <string>
    #include <iostream>
    #include <stdlib.h>
    using namespace std;
    int* rev(int a[],int n,int f){
    	int Q[f];
    	for(int i=0;i<f;i++)				//EnQueue
    		Q[i] = a[i];						
    	int j=0;
    	for(int i=f-1;i>=0;i--)				//DeQueue
    		a[j++] = Q[i];
    	return a;
    }
    int main(){
    	int n=0,t=0,i=0,j=0,k=0,f=0;
    	cin>>t;
    	for(i=0;i<t;i++){
    		cin>>n;
    		cin>>k;
    		int a[n];
    		for(j=0;j<n;j++){
    			cin>>f;
    			a[j] = f;
    		}
    		int *z = rev(a,n,k);
    		for(int j=0;j<n;j++){
    			cout<<z[j]<<" ";
    		}
    		cout<<endl;
    	}
    	return 0;
    }
