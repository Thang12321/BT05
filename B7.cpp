#include <iostream>
using namespace std;
void intamgiac(int m,int n)
{
    for(int i=0;i<m;i++) cout<<' ';
    for(int i=0;i<n;i++) cout<<'*';
    cout<<endl;
}


main()
{
    int n;
    cin>>n;
    int m=2*n-1;

    for(int i=1;i<=n;i++)
    {
        int x= n-i;
        intamgiac(x,2*i-1);
    }
}
