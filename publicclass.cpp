#include<iostream>
using namespace std;
class animal
{
    public:
    int x;

};
int main()
{
    animal a;
    
    cout<<"enter a number";
    cin>>a.x;

    cout<<"the number is:"<<a.x;
    return 0;
    
}