#include<bits/stdc++.h>

using namespace std;

int main()
{
        int n,n1,n2;
        cin>>n>>n1>>n2;
        long long int counter=0;
        long long int sum_n1=0,sum_n2=0; 
        vector<int> num;
        while(counter<n)
        {
            int input;
            cin>>input;
            num.push_back(input);
            counter++;
        }
        sort(num.begin(),num.end()); 
        if(n1<n2)
        {
            for(int i=0;i<n1;i++)
            {
                sum_n1=sum_n1+num[num.size()-i-1];
            }
            
            for(int i=0;i<n2;i++)
            {
                sum_n2=sum_n2+num[num.size()-1-n1-i];
            }
           
            
        }
        else  if(n1>n2)
        {
            for(int i=0;i<n2;i++)
            {
                sum_n2=sum_n2+num[num.size()-i-1];
            }
            
            for(int i=0;i<n1;i++)
            {
                sum_n1=sum_n1+num[num.size()-1-n2-i];
            }
            
        }
        else
        {
        for(int i=0;i<n2;i++)
            {
                sum_n2=sum_n2+num[num.size()-i-1];
            }
            
            for(int i=0;i<n1;i++)
            {
                sum_n1=sum_n1+num[num.size()-1-n2-i];
            }
            
        }
           cout <<setprecision(6)<<fixed<<((double)sum_n1/n1)+((double)sum_n2/n2)<<endl;
        return 0;
}
