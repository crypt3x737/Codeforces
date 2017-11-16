#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int ir=0;
    int ib=0;
    int ig=0;
    int iy=0;
    int fr=0;
    int fb=0;
    int fg=0;
    int fy=0;
    int pos=0;
    string copy="";
    string temp="";
    cin>>input;
    copy=input;
    temp=input;
    int repeat=1;
    int index=0;
    for(int ini=0;ini<input.length();ini++)
        {
            if(input[ini]=='R')
            ir++;
            else if(input[ini]=='G')
            ig++;
            else if(input[ini]=='B')
            ib++;
            else if(input[ini]=='Y')
            iy++;
        }
    while(repeat!=0)
    {
   

    repeat=0;
        for(int i=0;i<input.length();i++)    
        {
            int unknown=0;
            if(i+4<=input.length())
            {
                 for(int j=i;j<i+4;j++)
                 {
                    if(input[j]=='!')
                    {
                        if(unknown==0)
                        index=j;
                        unknown++;
                    }
                 }
                    if(unknown==1)
                    {
                        int k=i;
                        if((input[k]=='B' || input[k]=='Y' || input[k]=='G' || input[k]=='!' ) &&  (input[k+1]=='B' || input[k+1]=='Y' || input[k+1]=='G' || input[k+1]=='!') && (input[k+2]=='B' || input[k+2]=='Y' || input[k+2]=='G' || input[k+2]=='!') && (input[k+3]=='B' || input[k+3]=='Y' || input[k+3]=='G' || input[k+3]=='!' ))
                            {
                                copy[index]='R';
                            }
                            else  if((input[k]=='R' || input[k]=='Y' || input[k]=='G'|| input[k]=='!' )&&  (input[k+1]=='R' || input[k+1]=='Y' || input[k+1]=='G' || input[k+1]=='!' ) && (input[k+2]=='R' || input[k+2]=='Y' || input[k+2]=='G'|| input[k+2]=='!' ) && (input[k+3]=='R' || input[k+3]=='Y' || input[k+3]=='G' || input[k+3]=='!' ))
                            {
                                copy[index]='B';
                            }
                            else  if((input[k]=='R' || input[k]=='B' || input[k]=='G' || input[k]=='!' ) && (input[k+1]=='B' || input[k+1]=='R' || input[k+1]=='G'|| input[k+1]=='!' ) && (input[k+2]=='B' || input[k+2]=='R' || input[k+2]=='G'|| input[k]=='!' ) && (input[k+3]=='R' || input[k+3]=='B' || input[k+3]=='G' || input[k+3]=='!' ))
                            {
                                copy[index]='Y';
                            }
                            else  if((input[k]=='R' || input[k]=='Y' || input[k]=='B'|| input[k]=='!')&& (input[k+1]=='B' || input[k+1]=='Y' || input[k+1]=='R'|| input[k+1]=='!') && (input[k+2]=='B' || input[k+2]=='Y' || input[k+2]=='R'|| input[k+2]=='!') && (input[k+3]=='R' || input[k+3]=='Y' || input[k+3]=='B'|| input[k+3]=='!'))
                            {
                                copy[index]='G';
                            }
                       
                    }
                    else if(unknown==3 )
                    {
                        if(i+4<input.length() && copy[i+4]!='!')
                        copy[i]=copy[i+4];
                        if(i+5<input.length() && copy[i+5]!='!')
                        copy[i+1]=copy[i+5];
                        if(i+6<input.length()&& copy[i+6]!='!')
                        copy[i+2]=copy[i+6];
                        if(i+7<input.length()&& copy[i+7]!='!')
                        copy[i+3]=copy[i+7];
                        if(i-4>=0 && copy[i-4]!='!')
                        copy[i]=copy[i-4];
                        if(i-3>=0 && copy[i-3]!='!')
                        copy[i+1]=copy[i-3];
                        if(i-2>=0 && copy[i-2]!='!')
                        copy[i+2]=copy[i-2];
                        if(i-1>=0&& copy[i-1]!='!')
                        copy[i+3]=copy[i-1];
                        
                        
                        for(int p=0;p<copy.length();p++)
                        {
                            if(copy[p]=='!' && copy[p+1]=='!' && copy[p+2]=='!')
                            {
                                if(copy[p+3]=='B')
                                {
                                  copy[p]='R';
                                  copy[p+1]='G';
                                  copy[p+2]='Y';
                                }
                                else if(copy[p+3]=='R')
                                {
                                  copy[p]='B';
                                  copy[p+1]='G';
                                  copy[p+2]='Y';
                                }
                                else  if(copy[p+3]=='Y')
                                {
                                  copy[p]='R';
                                  copy[p+1]='G';
                                  copy[p+2]='B';
                                }
                                else if(copy[p+3]=='G')
                                {
                                  copy[p]='R';
                                  copy[p+1]='B';
                                  copy[p+2]='Y';
                                }
                            }
                        }
                    }
                  else if(unknown==4)
                  {
                    copy="RGBY";
                    repeat=0;
                  }
                    
                    
            }
        }
        input=copy;
        for(int z=0;z<input.length();z++)
            if(input[z]=='!')
            repeat++;
    }
    if(copy=="RGBY")
        copy=temp;
    for(int l=0;l<copy.length();l++)
    {
        if(copy[l]=='R')
            fr++;
            else if(copy[l]=='G')
            fg++;
            else if(copy[l]=='B')
            fb++;
            else if(copy[l]=='Y')
            fy++;
    }
    cout<<fr-ir<<" "<<fb-ib<<" "<<fy-iy<<" " << fg-ig<<endl;
    
    return 0;
}
