#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    vector<long long int>lengths;
    cin>>n;
    long long int counter=0;
    long long int input=0;
    double p;
    while(counter<n)
    {
        cin>>input;
        lengths.push_back(input);
        counter++;
    }
    
    sort(lengths.begin(),lengths.end());

        p=(lengths[lengths.size()-3]+lengths[lengths.size()-2]+lengths[lengths.size()-1])/2;
        
            if(p>lengths[lengths.size()-1])
             {
            cout<<"YES"<<endl;
            return 0;
            }
            else
         cout<<"NO"<<endl;
    
  
    
    
    return 0;
}
