#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int citizens;
    int burl;
    vector<int> money;
    cin>>citizens;
    int counter=0;
    while(counter<citizens)
    {
        cin>>burl;
        money.push_back(burl);
        counter++;
    }
    int max=-1;
    for(int i=0;i<money.size();i++)
    {
        if(money.at(i)>max)
            max=money.at(i);
    }
    int spent=0;
    for(int i=0;i<money.size();i++)
    {
        spent=spent+max-money.at(i);
    }
    cout<<spent<<endl;
    return 0;
    
}

