#include<bits/stdc++.h>

using namespace std;

int main()
{
        long long int m,n;
        cin>>n>>m;
        vector<int> array;
        vector<long long int>start;
        vector<long long int>endd;
        long long int start_pos,end_pos;
        long long int s,e,diff=9999999;
        
        for(long long int i=0;i<n;i++)
        array.push_back(i );
        
        long long int count=0;
       
       for(long long int j=0;j<m;j++)
       {
           cin>>start_pos>>end_pos;
           start.push_back(start_pos-1);
           endd.push_back(end_pos-1);
           if(end_pos-start_pos<diff)
           {
            diff=end_pos-start_pos;
            s=start_pos-1;
            e=end_pos-1;           
           }
       }
       
       cout<<diff+1<<endl;
       long long int c=0;
       for(int i=s;i<=e;i++)
       {
        
        array[c]=array[i];
        array[i]=c;
        
        c++;
      }
      
        for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
        cout<<endl;
        return 0;
}
