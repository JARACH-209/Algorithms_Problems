/* Author - jarach_2.0.9
Achal Dixit
02/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <algorithm>
using namespace std;
string sorted(string str){
	int i,j,k=-1,n=0;string r,x="";
	for(i=0;i<str.length();i++){
		if(str[i]==' ') ++n;
	}
	++n;
	string s[n],temp[n];int min=0;
	for(i=0;i<str.length();i++){
		if(str[i]==' '){
			s[++k] = x; temp[k] =x; x="";
		}
		else x+=str[i]; 
		if(i==(str.length()-1)) {s[++k] = x;temp[k]=x;}
	}
	for(i=0;i<n;i++) {transform(temp[i].begin(),temp[i].end(),temp[i].begin(),::tolower); 
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			int min= i;
			if(temp[j]<temp[min])
				min =j;
			string tm = temp[i];
			temp[i] = temp[min];
			temp[min]= tm;
			string tm2 = s[i];
			s[i] = s[min];
			s[min]= tm2;
		}
	}
	for(i=0;i<n;i++) {if(i!=0) r+=" ";
	r+=s[i];
	}
	return r;
}
int main(){
	int n,i,t;
	cin>>t;string r[t],c;string str; cin.ignore();
	cin>>ws;
	if(t==0) {
		cout<<"0"<<endl;return 0;
	}
	for(i=0;i<t;i++){
		getline(cin,str);
		//r[i] = sorted(str);
		cout<<sorted(str)<<endl;
	}
	//for(i=0;i<t;i++) cout<<r[i]<<endl;
	return 0;
}
