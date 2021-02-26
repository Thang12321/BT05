#include <iostream>
using namespace std;
void nhapKN(int k[], int n[], int *soPhanTu)
{bool kt=1;
    while(kt)
    {cin>>k[*soPhanTu]>>n[*soPhanTu];
    if(k[*soPhanTu]==-1&&n[*soPhanTu]==-1) kt=0;
    (*soPhanTu)++;
    }
}
int tohop(int k,int n)
{int sum=1;
for(int i=n-k+1;i<=n;i++) sum*=i;
for(int i=1;i<=k;i++) sum/=i;
return sum;
}
main()
{
   int k[1000],n[1000],soPhanTu=0;
   nhapKN(k,n,&soPhanTu);

for(int i=0;i<soPhanTu-1;i++)
{
    cout<<tohop(k[i],n[i])<<endl;
}
}
