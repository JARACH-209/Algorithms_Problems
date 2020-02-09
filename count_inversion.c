/* Author - jarach_2.0.9
Achal Dixit
02/09/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
#include<stdio.h> 
int main(){
int a,A[100],b,i,j,c=0;
scanf("%d",&a);
while(a--){
    scanf("%d",&b);
    for(i=0;i<b;i++){
    scanf("%d",&A[i]);}
    i=0;
    for(i=0;i<b;i++){
    for(j=0;j<b;j++){
        if(i<j && A[i]>A[j]){
            c++;
            
        }
        
}    }
    printf("%d\n",c);
    c=0;
}
return 0;
}