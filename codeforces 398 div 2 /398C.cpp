#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s,x1,x2;
    int t1,t2;
    int p,d;
    cin>>s>>x1>>x2>>t1>>t2>>p>>d;
    int min;
    int train_time=0;
    int walk_time=0;
    int mix_time=0;
    int ans=0;
    int direction=x2-x1;
        if(direction<0)
            direction=-1
        else if(direction>0)
            direction=1;
        else
            direction=0;
    if(x1==p && direction==d)
        {
            if(t1<t2)
            {
                cout<<abs(x2-x1)*t1<<endl;
            }
            else
            {
                cout<<abs(x2-x1)*t2<<endl;
            }
            
        }
        else if(direction==d)
        {
             int curr_pos=x1;
            int train_pos=p;
            train_time=((x1-p)*t1) +abs(x2-x1)*t1;
            walk_time=abs(x2-x1)*t2;
            if(train_time<walk_time)
                min=train_time;
                else
                min=walk_time;
            for(int i=1;i<=walk_time;i++)
            {
                curr_pos=x1+(i/t2);
                ans=i;
                if(i>=((x1-p)*t1))
                {
                    int train=p+(i/t1);
                    
                    if(train==curr_pos && t1<t2)
                        ans=ans+((x2-curr_pos)*t1);
                }
                
            }
        }
      else if(direction>0 && d<0)
      {     
            int curr_pos=x1;
            int train_pos=p+(x2-0);
            int origin_time=abs(p*t1)+(x1*t1);
            train_time=(p*t1) +abs(x2-x1)*t1;
            walk_time=abs(x2-x1)*t2;
            if(train_time<walk_time)
                min=train_time;
                else
                min=walk_time;
            for(int i=1;i<=walk_time;i++)
            {
                curr_pos=x1+(i/t2);
                ans=i;
                if(i>=origin_time)
                {
                    int train=(i-origin_time)/t1;
                    
                    if(train==curr_pos && t1<t2)
                        ans=ans+((x2-curr_pos)*t1);
                }
                
            }
      }
        
    return 0;
}
