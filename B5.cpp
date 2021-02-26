#include <iostream>
#include <cmath>
using namespace std;
bool ktnt(int n)
{
    if(n<=1) return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return false;
    return true;
}
main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(ktnt(i)) cout<<i<<' ';
    }
}
