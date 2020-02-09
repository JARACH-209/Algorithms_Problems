/* Author - jarach_2.0.9
Achal Dixit
04/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct node{
	int n;
	struct node* next;
}list;
int main(){
	int t=0,n=0,i=0,j=0,f=0,k=0,x;
	cin>>t;int ar[t];
	list* h;
	list* e;
	for(i=0;i<t;i++){
		cin>>n;x=n;
		if(n==0){
			cout<<"0"<<endl; return 0;
		}
		if(n==1){int pi;
			cin>>pi;
			cout<<pi<<endl; return 0;
		}
		h=(list*) malloc(sizeof(list));
		e=h;
		while(x--!=0){ 
			cin>>k; 
			if(f==0) {f=1;
				h->n = k;
			}
			else{
			list* ne = (list*) malloc(sizeof(list));
			h->next = ne;
			ne->n = k;
			ne->next = NULL;
			h= ne;
			}
		} f=0;
		cin>>x;
		int index = n-x;
		for(j=0;j<index-1;j++) {
			e = e->next;
		}
		ar[i] = e->n;
	}
	for(i=0;i<t;i++) cout<<ar[i]<<endl;
	return 0;
	
}
