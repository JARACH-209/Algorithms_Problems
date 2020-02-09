/* Author - jarach_2.0.9
Achal Dixit
01/09/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int i,j,k,t,n,x,y;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;x=0;
		int a[n];
		for(j=0;j<n;j++){
			cin>>a[j];
		}
		//int max_so_far = -999999 , max_ending_here = 0; 
  
    	/*for (int j = 0; j < n; j++) 
    	{ 
        max_ending_here = max_ending_here + a[j];
        if (max_so_far < max_ending_here){ 
            max_so_far = max_ending_here; ++x;
		  }
        if (max_ending_here < 0) {
            max_ending_here = 0;}
    	}*/
    	int max_so_far = a[0]; 
   		int curr_max = a[0]; 
  
   		for (int j = 1; j < n; j++) 
   		{ 
   		if(a[j]<curr_max+a[j]) ++x;
        curr_max = max(a[j], curr_max+a[j]); 
        if(max_so_far<curr_max) x=0;
        max_so_far = max(max_so_far, curr_max); 
   		} 
   		if(x==0) ++x;
    	cout<<x<<" "<<max_so_far<<endl;
	}
	return 0;
}
