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
#include <sstream>
#include <string>
using namespace std;
typedef struct node{
	int v;
	struct node* next;
}list;
int mid(list* h){
	list* a=h;list*b=h;
	while(b->next!=NULL&&b->next!=NULL){
		a= a->next;
		b= b->next->next;
	}
	if(b->next==NULL) return a->next->v;
	else return a->v;
}
int main(){
	int i,n,j=0,k,l,fl=0;
	string p;
	cin>>n; int r[n]; cin.ignore();
	list* h;
	list* e;
	for(i=0;i<n;i++){
		int s;char c;
		h = (list*) malloc(sizeof(list));
		e=h;
		list* x=h;
		while(1){
			scanf("%d%c",&s,&c);
			if(c=='\n') break;
			k=s;
			if(fl==0) { 
				fl=1;
				h->v = k;
				h->next = NULL;
			}
			else{
				list* ne = (list*) malloc(sizeof(list));
				h->next = ne;
				ne->v = k;
				ne->next = NULL;
				h=ne;
			}
		}fl=0;
		cout<<mid(x)<<endl;
	}
	return 0;
}
