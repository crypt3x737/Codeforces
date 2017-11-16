#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string a=s;
    string b;
    int start;
    for(int i=0;i<s.length();i++)
    {
        b=s.substr(i,3);
        start=i;
        int d=0;
        if(b.compare("ogo")==0)
        {
            d=3;
           for(int j=i+3;j<s.length()-1;j=j+2)
           {
                if(s[j]=='g' && s[j+1]=='o')
                {
                    d=d+2;        
                    }
                else
                    j=s.length()-1;
           }
           cout<<"***";
           i=start+d-1;
        }
            else
            {
                cout<<s[start];
            }
        
       
       
    }
cout<<endl;
    return 0;
}
