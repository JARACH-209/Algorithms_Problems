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
#include <algorithm>
using namespace std;
typedef struct node{
	struct node* next;
	int v;
}list;
 int main(){
 	int n=0,x=0,f=0,fl=0,i=0,j,t,l;
 	cin>>t;
 	if(t==0) { 
 		cout<<"0"<<endl; return 0;
	 }
	 list* h;
	 list* e;
 	for(i=0;i<t;i++){
		cin>>l;
		h= (list*)malloc(sizeof(list));
		e=h;
		for(j=0;j<l;j++){
			cin>>x;
			n+=x;
			while(x-->0){
 				cin>>f;
 				if(fl==0){
				 	fl=1;
 					h->v = f;
				}
				else{
 					list* node = (list*)malloc(sizeof(list));
 					h->next = node;
 					node->next = NULL;
 					h = node;
 					h->v = f;
 				}
 			}
 		}
 		int a[n];
 		for(int k=0;k<n;k++) {
 			a[k] = e->v;
 			e = e->next;
		}
		sort(a,a+n);
		for(int k=0;k<n;k++) {
		cout<<a[k];
		if(k!=n-1) cout<<" ";
		}
		n=0;
		fl=0;
		free(h);
		cout<<endl;

	}
 	return 0;
 }

