/* Author - jarach_2.0.9
Achal Dixit
02/09/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
        #include<stdio.h>
        #include<math.h>
         
        int main()
        {
            int t;
            scanf("%d",&t);
            while(t--){
        	long int i,n,m,x=0,y=0,a,b;
        	scanf("%ld",&n);
        	scanf("%ld",&m);
        	for(i=0;n!=0;++i)
        	{
        		a=n%10;
        		x=(a)*(pow(2,i))+x;
        		n=n/10;
        	}
        	for(i=0;m!=0;++i)
        	{
        		b=m%10;
        		y=(b)*(pow(2,i))+y;
        		m=m/10;
        	}
        	long int k=0;
        	k=x*y;
        	printf("%ld",k);
            }
        	return 0;
        }