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
#include <string>
using namespace std;

int main() {
	int i,x,f,n,max=-1;
	scanf("%d",&x);
	string s;char r[x];
	if(x==0){
		cout<<"0"<<endl; return 0;
	}
	cin.ignore();
	for(i=0;i<x;i++){
		int a[256] = {0};
	    getline(cin,s);
	    int l = s.length();
	    for(int j=0;j<l;j++){
            if(s[j]>64&&s[j]<91) s[j]+=32;
	        ++a[s[j]];
	        if(a[s[j]]>max) {
			max = a[s[j]];
			f=j;
			}
	    }
	    r[i]= s[f];
	    max = -1;
	}
	for(i=0;i<x;i++){
		if(r[i]==' ') printf("sp\n");
		else printf("%c\n",r[i]);
		}
	return 0;
}
