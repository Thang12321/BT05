#include <iostream>
using namespace std;
string np(int n)
{
    string s;
    while(n>0)
    {
        if(n%2==1) s='1' +s;
        else s='0'+s;
        n=n/2;
    }
return s;
}
main()
{
    int n;
    cin>>n;
    cout<<np(n);
}
