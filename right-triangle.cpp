#include<iostream>
using namespace std;

int main()
{
    int l,i,j,k;
    cout<<"enter a limit:";
    cin>>l;
    for(i=0;i<=l;i++)
    {
       
        
       for(j=i;j<l;j++) 
       {

         cout<<" ";
        
          }
           
    for(k=0;k<i;k++)
    {
      cout<<"*";
    }
    cout<<"\n";
    }
    return 0;
    
}