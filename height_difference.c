/* Author - jarach_2.0.9
Achal Dixit
02/09/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
        #include<stdio.h>
        #include<stdlib.h>
        #include<math.h>
         
        int main()
        {
            int t;
            scanf("%d",&t);
            while(t--)
            {
                int a[100];
                int i,n;
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                }
                int min=a[0];
                int max=a[0];
                for(i=0;i<n;i++)
                {
                   if(min>a[i])
                   {
                       min=a[i];
                   }
                   if(max<a[i])
                   {
                       max=a[i];
                   }
                }
                int k,l;
                k=max-min;
                l=pow(k,2);
                 printf("%d\n",l);
         
            }
            return 0;
        }