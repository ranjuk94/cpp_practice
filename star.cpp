#include<iostream>
using namespace std;

int main()
{
    int l,i,j,k;
    cout<<"enter a limit:";
    cin>>l;
    for(i=0;i<=l-1;i++)
    {
 
    
      if(i==0||i==l-1)
      {
      for(j=1;j<l;j++) 
       {
      
        cout<<"* ";
      
      }
          
      }
          else
     {
        cout<<"*";
        for(k=0;k<l;k++)
        {
            cout<<" ";
        
        }
        cout<<"*";
       }
      
    cout<<"\n";
    
    
    }
    
    return 0;
    
}