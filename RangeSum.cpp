/* Author - jarach_2.0.9
Achal Dixit
26/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
    #include <iostream>
    #include <string>
    #include <sstream> 
    #include <stdlib.h>
     
     struct node
     {
     	int x;
     	struct node *left;
     	struct node *right;
     };
     
    using namespace std;
     
     struct node* insert_node(struct node *root, int x)
     {
     	if(root==NULL)
     	{
     		struct node *temp=(struct node *)malloc(sizeof(struct node));
     		temp->x=x;
     		temp->left=temp->right=NULL;
     		return temp;
    	}
    	if(root->x > x)
    	{
    		root->left=insert_node(root->left,x);
    	}
    	else
    	{
    		root->right=insert_node(root->right,x);
    	}
    	return root;
     }
     
    int main() 
    {
    	int t;
    	cin >> t ;
    	cin.ignore();
    	while(t--)
    	{
    		struct node *root=NULL;
    	    string str;
    	    getline(cin, str);
    	    int sub,p=0;
            string num="";
            for(int i=0;i<=str.length();i++)
            {
                if(str[i]==' ' || i==str.length())
                {
                    if(!(num.compare("null")==0))
                    {
                        stringstream help(num);
    	                help >> sub;
    	                root=insert_node(root,sub);
    	                p++;
                    }
                    num="";
                }
                else
                num+=str[i];
            }
            int l,r,sum=0;
            cin >> l >> r;
            struct node *temp1=root,*temp2=root;
            if(temp1->x >=l && temp1->x <=r)
            sum=temp1->x;
            while(1)
            {
                if(temp1->x > l)
                {
                    temp1=temp1->left;
                    if(temp1->x >=l && temp1->x <=r)
                    sum+=temp1->x;
                }
                else if(temp1->x < l)
                {
                    temp1=temp1->right;
                    if(temp1->x >=l && temp1->x <=r)
                    sum+=temp1->x;
                }
                
                if(temp2->x > r)
                {
                    temp2=temp2->left;
                    if(temp2->x >=l && temp2->x <=r && temp1!=temp2)
                    sum+=temp2->x;
                }
                else if(temp2->x < r)
                {
                    temp2=temp2->right;
                    if(temp2->x >=l && temp2->x <=r)
                    sum+=temp2->x;
                }
                if(temp1->x==l && temp2->x==r)break;
            }
    		cout << sum << endl;
    		cin.ignore();
    	}
    	return 0;
    }
