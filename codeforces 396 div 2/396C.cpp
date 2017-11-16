#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m,q;
    cin>>n>>m,q;
    long long int counter=0;
    vector<string>dict;
    vector<string> figured;
    while(counter<n)
    {
        string s;
        cin>>s;
        dict.push_back(s);
        counter++;
    }
    counter=0;
    
    while(counter<m)
    { 
        string s;
        cin.readline(s);
        figured.push_back(s);
        counter++;
    }
    
    counter=0;
    
    while(counter<q)
    { 
        string s;
        cin.readline(s);
        figured.push_back(s);
        counter++;
    }
   
    
  
    
    
    return 0;
}
