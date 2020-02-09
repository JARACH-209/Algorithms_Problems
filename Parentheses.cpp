/* Author - jarach_2.0.9
Achal Dixit
26/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;						// '(' = 40 ; ')' = 41 ;
int main(){									// '[' = 91 ; ']' = 93 ;
	int n=0,i=0,j=0,t=0,f=0;				// '{' = 123 ; '}' = 125 ;
	cin>>t;
	char c;
	string s="";
	for(int i=0;i<t;i++){
		cin>>c;cin>>c;f=0;
		int k=0;
		s = "";
		while(c!='"'){
			s+=c;
			cin>>c;
			++k;
		}
		if(k%2!=0){
			cout<<"invalid"<<endl;continue;
		}
		string op="";
		int f=0;
		for(int j=0;j<k;j++){
			
			if(s[j]=='('||s[j]=='{'||s[j]=='[')
				op+= s[j];
			if(s[j]==')'||s[j]=='}'||s[j]==']'){
				if(op==""){
					++f;break;
				}
				else{
					if(op[op.length()-1]=='['&&s[j]!=']'){
						++f;break; 
					}
					if(op[op.length()-1]=='{'&&s[j]!='}'){
						++f;break; 
					} 
					if(op[op.length()-1]=='('&&s[j]!=')'){
						++f;break; 
					} 
					else{
						op=op.substr(0,op.length()-1);
						
					}
				}
			}
			//else{
			//	cout<<"invalid"<<endl;break;
			//	break;
			//}
		}
		if(op!="")++f;
		if(f==0)
		cout<<"valid"<<endl;
		else cout<<"invalid"<<endl;
		op="";s=""; f=0;
	}
	return 0;
}
