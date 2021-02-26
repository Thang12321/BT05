#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void bo3(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int z=j+1;z<n;z++)
                if((a[i]+a[j]+a[z]%25)==0)cout<<a[i]<<' '<<a[j]<<' '<<a[z]<<endl;
        }
    }
}
main()
{
    srand(time(0));
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=rand()%50;
   bo3(a,n);
}
