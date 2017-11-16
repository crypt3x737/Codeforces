#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int start,end, time,visitors;
    cin>>start>>end>>time>>visitors;
    vector<long long int> queue;
    int cond=0;
    for(long long int i=0;i<visitors;i++)
    {
        long long int input;
        cin>>input;
        queue.push_back(input);

    }
    long long int sum=start;
    long long int vis_sum=start;
    long long int ans;
    
    if(queue[0]<start && queue[0]-time>=0)
    {
       ans=queue[0]-time;
            cout<<ans<<endl;
            return 0;
            
    }

 

        for(long long int i=0;i<visitors;i++)
        {
            sum=sum+(time*i);
               int b=0;
            for(long long int j=0;j<visitors;j++)
        {
            if( sum==queue[j])
            {
            b=1;
            break;
            }
        }
            if(b==0)
            {
            cout<<sum<<endl;
            return 0;
            }
        }
        
        for(long long int i=0;i<visitors;i++)
        {
            sum=sum+(time*i)-1;
               int b=0;
            for(long long int j=0;j<visitors;j++)
        {
            if( sum==queue[j])
            {
            b=1;
            break;
            }
        }
            if(b==0)
            {
            cout<<sum<<endl;
            return 0;
            }
        }
        
        for(long long int i=0;i<visitors;i++)
        {
            sum=sum+(time*i)+1;
               int b=0;
            for(long long int j=0;j<visitors;j++)
        {
            if( sum==queue[j])
            {
            b=1;
            break;
            }
        }
            if(b==0)
            {
            cout<<sum<<endl;
            return 0;
            }
        }
        
        for(long long int i=0;i<visitors;i++)
        {
            sum=sum+(time*i)-2;
               int b=0;
            for(long long int j=0;j<visitors;j++)
        {
            if( sum==queue[j])
            {
            b=1;
            break;
            }
        }
            if(b==0)
            {
            cout<<sum<<endl;
            return 0;
            }
        }
    
          
    return 0;
}
