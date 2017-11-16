#include<iostream>
#include<vector>
#include <algorithm>
#include<math.h>

using namespace std;

int main()
{
    double x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<"3"<<endl;
    double diffx12=x1-x2;
    double diffy12=y1-y2;
    cout<<x3+diffx12<<" " <<y3+diffy12<<endl;
    
    double diffx23=x2-x3;
    double diffy23=y2-y3;
    cout<<x1+diffx23<<" " <<y1+diffy23<<endl;
    
     double diffx31=x3-x1;
    double diffy31=y3-y1;
    cout<<x2+diffx31<<" " <<y2+diffy31<<endl;
    
    
    
    
    return 0;
}
