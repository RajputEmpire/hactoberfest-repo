// Addition from external files in c++

#include<iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif
    
int a,b,c;
//cout<<"Enter numbers for addition:";
cin>>a,b;
c=a+b;
cout<<"Total = "<<c<<endl;
    return 0;
}
