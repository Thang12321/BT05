#include <iostream>
#include <cmath>
using namespace std;
int rnd(double n)
{
    int x=n;
    double y=x;
    if(n-y>=0.5) return ceil(n);
    else return floor(n);

}
int rndnocmath(double n)
{
    int x=n;
    if(n-x>=0.5) return x+1;
    else return x;
}
main()
{

    double n;
    cin>>n;
    cout<<rnd(n)<<endl<<rndnocmath(n);
}
