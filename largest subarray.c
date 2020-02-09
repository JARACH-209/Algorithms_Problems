/* Author - jarach_2.0.9
Achal Dixit
02/09/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
        #include<stdio.h>
         
         int main()
         {
             int t;
             scanf("%d", &t);
             while(t)
             {
                 int a[1000];
                 int i = 0;
                 int k1 = 0, m1 = 0, k2 = 0, m2 = 0;
                 int length = 0;
                 int n;
                 scanf("%d", &n);
                 for (i=0; i<n; i++)
                 {
                     scanf("%d", &a[i]);
                 }
         
                 for (i=1; i<n; i++)
                 {
                     if(a[i] > a[i-1])
                     {
                         m2 = i;
                     }
         
                     else
                     {
                         if((m2-k2) > (m1-k1))
                         {
                             m1 = m2;
                             k1 = k2;
                         }
         
                         m2 = i;
                         k2 = i;
                     }
                 }
                 if((m2-k2) > (m1-k1))
                 {
                     m1 = m2;
                     k1 = k2;
                 }
                 for (i=k1; i<(m1+1); i++)
                 {
                     printf("%d ",a[i]);
                 }
                 printf("\n%d", (m1-k1+1));
                 printf("\n");
                 t--;
             }
             return 0;
         }