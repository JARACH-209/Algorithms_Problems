
/* Author - jarach_2.0.9
Achal Dixit
24/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct node{
	struct node* next;
	int v;
}list;
void add(list* h,int v){
	if(h->v==-999){
		h->next = NULL;
		h->v = v;
		return;
	} 
	else {
		while(h->next!=NULL) h=h->next;
		list* ne = (list*) malloc(sizeof(list));
		h->next = ne;
		ne->v = v;
		ne->next=NULL;
	}
}
int main(){
	int n=0,i=0,j=0,k=0,t=0;
	cin>>t;
	list* h;
	list* e;
	for(int i=0;i<t;i++){
		cin>>n;
		h = (list*) malloc(sizeof(list));
		h->v=-999;
		e=h;
		for(int j=0;j<n;j++){
			cin>>k;
			add(h,k);
		}
		for(int j=0;j<n;j+=2){
			if(j==0||j==n-2){h=h->next->next; continue;}
				k=h->v;
				h->v = h->next->v;
				h->next->v = k;
				h=h->next->next;
		}
		for(int j=0;j<n;j++){
			if(j==n-1) cout<<e->v<<endl;
			else cout<<e->v<<" ";
			e=e->next;
		}
	}
	return 0;
}
	

