#include<iostream>
using namespace std;

int main()
{
    int l,i,j,k;
    cout<<"enter a limit:";
    cin>>l;
    for(i=1;i<=l;i++)
    {
         
       for(j=1;j<=i;j++) 
       {
        cout<<" ";
          }
           for(k=i;k<=l;k++)
           {
            cout<<"*";
           }
    
    cout<<"\n";
    }
    return 0;
    
}