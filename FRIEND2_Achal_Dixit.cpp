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
int min(list* h){
	int n=0,min=h->p; 
	while(h->next!=NULL){ 
		if(h->p<min) min=h->p;
		h=h->next;
	} 
	return min;
}
void del(list* h,int x){
	while(h->next!=NULL){
		if(h->next->p==x) break;
		h = h->next;
	}
	list* tem = h->next->next;
	free(h->next);
	h->next = tem;
}
int main(){
	int n,t,i,j,k,x,f,y,fl=0;
	cin>>t;
	list* h;
	list* e;
	for(i=0;i<t;i++){
		cin>>n;int l=n,a[n],b[n];
		cin>>f;
		h = (list*) malloc(sizeof(list));
		e=h;
		if(n==f){
			cout<<"0 0"<<endl; continue;
		}
		for(j=0;j<n;j++){
			cin>>x;
			cin>>y;
			if(fl==0){
				fl=1;
				h->next = NULL;
				h->n = x;
				h->p = y;
			}
			else{ 
			list* ne = (list*) malloc(sizeof(list));
			h->next = ne;
			ne->n = x;
			ne->p = y;
			ne->next = NULL;
			h= ne;
			}
		}
		list* R = e; 
		for(j=0;j<f;j++){
			x = min(e);
			del(e,x);
		}
		while(R->next!=NULL){
			cout<<R->n<<" "<<R->p<<endl;
			R=R->next;
		}
		fl=0;
	}
	return 0;
}
	
