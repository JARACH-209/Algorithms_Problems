/* Author - jarach_2.0.9
Achal Dixit
26/08/2019

Codes were written when I was a rookie

You can push a request after improvement in code, will be appreciated.

Don't copy rather contribute and learn

*/
    #include <iostream>
    #include <string>
    #include <bits/stdc++.h> 
     
    using namespace std;
     
    int main() 
    {
    	int t;
    	cin >> t ;
    	cin.ignore();
    	while(t--)
    	{
    	    string str;
    	    getline(cin, str);
    	    string words[100];
    	    int p=0;
    	    words[0]="";
    	    if (str.length()<=2)
    	    {
    	        cout << endl;
    	        continue;
    	    }
    	    for (int i = 1; i < str.length()-1; i++)
    	    {
    	        if(str[i]==',')
    	        {
    	            p++;
    	            words[p]="";
    	        }
    	        else words[p]+=str[i];
    	    }
    	    string words_1[100];
    	    for (int i = 0; i<=p; i++)
    	    {
    	        str=words[i];
    	        sort(str.begin(),str.end());
    	        words_1[i]=str;
    	    }
    	    cout << "[";
    	    str="";
    	    int count=0;
    	    for(int i=0;i<=p;i++)
    	    {
    	    	if(words_1[i].compare("$")==0)continue;
    	    	str+="["+words[i]+",";
    	        for(int j=i+1;j<=p;j++)
    	        {
    	            if(words_1[i].compare(words_1[j])==0)
    	            {
    	            	str+=words[j]+",";
    	                words_1[j]="$";
    	            } 
    	        }
    	        str[str.length()-1]=']';
    	        str+=",";
    	        count ++;
    	    }
    	   if(count==1)
    	    {
    	    	string str1="";
    	    	for(int i=1;i<str.length()-1;i++)
    	    	{
    	    		str1+=str[i];
    			}
    			cout << str1 << endl;
    		}
    		else
    		{
    			str[str.length()-1]=']';	    
    	    	cout << str << endl;
    		}
    	}
    	return 0;
    }
