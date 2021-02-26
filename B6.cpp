#include <iostream>
#include <cmath>
using namespace std;
int UCLN(int a,int b)
{
    if(a%b==0) return b;
    if(b%a==0) return a;
    if(a>b) a=a%b;
    else b=b%a;
    UCLN(a,b);
}

main()
{
int a,b;
cin>>a>>b;
if(UCLN(a,b)==1) cout<<"a va b nguyen to cung nhau";
else cout<<"a va b KHONG nguyen to cung nhau";
}
