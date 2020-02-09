/* Author - jarach_2.0.9
Achal Dixit
02/09/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
        #include<stdio.h>
        #include<stdlib.h>
         
        int main()
        {
            int t;
            scanf("%d", &t);
            while(t)
            {
                 char c[200];
                int a[100] = {0};
                int num=0, k=0, p=0, i=0;
                int length=0;
                scanf(" %[^\n]s", c);
                for(i=0; c[i]!=0; i++)
                {
                    if(c[i] == 32)
                    {
                        a[k] = num;
                        k++;
                        length++;
                        num =0;
                        p=0;
                    }
                    else
                    {
                        num = (num*10) + (c[i]-'0');
                        p++;
                    }
         
         
                }
                a[k]=num;
                length++;
         
                int l, r;
                int count =1, j;
                int flag =0;
                int flag2 = 0;
                scanf("%d%d", &l, &r);
                for(i =l-1; i<r; i++)
                {
                    count = 1;
                    for(j = i+1; j < r; j++)
                    {
                        if(a[i] != -1 && a[j] == a[i])
                        {
                            a[j] = -1;
                            count++;
                            flag = 1;
                        }
         
                    }
                    if( (count%2) == 0)
                    {
                        flag2 =1;
                        printf("%d ", a[i]);
                    }
                }
                if(flag == 0 )
                    printf("NULL");
                    if (flag == 1 && flag2 == 0)
                        printf("NULL");
         
                printf("\n");
                t--;
            }
            return 0;
        }