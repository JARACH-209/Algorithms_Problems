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
	 list* h[t];
	 list* e[t];
 	for(i=0;i<t;i++){
		cin>>l;
		h[i]= (list*)malloc(sizeof(list));
		e[0]=h[0];
		for(j=0;j<l;j++){
			cin>>x;
			n+=x;
			while(x-->0){
 				cin>>f;
 				if(fl==0){
				 	fl=1;
 					h[i]->v = f;
				}
				else{
 					list* node = (list*)malloc(sizeof(list));
 					h[i]->next = node;
 					node->next = NULL;
 					h[i] = node;
 					h[i]->v = f;
 				}
 			}
 		}
 		int a[n];
 		for(int k=0;k<n;k++) {
 			a[k] = e[i]->v;
 			e[i] = e[i]->next;
		}
		sort(a,a+n);
		for(int k=0;k<n;k++) {
			cout<<a[k];
			if(k!=n-1) cout<<" ";
		}
		n=0;
		fl=0;
		//list* c1=h;list* c2=e;list* n1;list* n2;
			/*for(i=0;i<n;i++){
				n1 = c1->next;n2=c2->next;
				free(c1);free(c2);
				c1=n1;c2=n2;
			}*/
		free(h);free(e);
	}
			
		cout<<endl;
 	return 0;
 }

