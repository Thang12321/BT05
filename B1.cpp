#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
void nhapdulieu(int &n,int &m,int &k)
{
    cin>>n>>m>>k;
}
char **sinhbandoHienMin (int n,int m,int k)
{
    char **bando = new char*[n+5];
    for(int i=0; i<m+5; i++)
        bando[i]=new char;
    for(int i=0; i<=n+2; i++)
        for(int j=0; j<=m+2; j++)
            bando[i][j]='#';
    for(int i=0; i<k; i++)
    {
        int x,y;
        do
        {
            x=rand()%n +1;
            y=rand()%m +1;
        }
        while(bando[x][y]!='#');
        bando[x][y]='*';
    }
    return bando;
}
char ** sinhbandoKhongHienMin(int n,int m)
{
    char **bando = new char*[n+5];
    for(int i=0; i<m+5; i++)
        bando[i]=new char;
    for(int i=0; i<=n+2; i++)
        for(int j=0; j<=m+2; j++)
            bando[i][j]='#';
    return bando;
}
void inbando(char **bando,int n,int m)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cout<<bando[i][j]<<' ';
        cout<<endl;
    }
}
int demxungquanh(char ** Map,int x,int y )
{
    int demminxungquanh=0;
    if(Map[x+1][y]=='*')
        demminxungquanh++;
    if(Map[x+1][y+1]=='*')
        demminxungquanh++;
    if(Map[x+1][y-1]=='*')
        demminxungquanh++;
    if(Map[x][y+1]=='*')
        demminxungquanh++;
    if(Map[x][y-1]=='*')
        demminxungquanh++;
    if(Map[x-1][y]=='*')
        demminxungquanh++;
    if(Map[x-1][y-1]=='*')
        demminxungquanh++;
    if(Map[x-1][y+1]=='*')
        demminxungquanh++;
    return demminxungquanh;
}
bool damphaimin(char **Map,int x,int y)
{
    if(Map[x][y]=='*')
        return true;
        else return false;
}
void choigame(char ** Map, char ** MapDisplay, int n,int m)
{
    while(true)
    {
        inbando(MapDisplay,m,n);
        int x,y;
        cout<<"Nhap toa do (x;y) :";
        cin>>x>>y;
        if(damphaimin(Map,x,y)==true)
        {
            cout<<"YOU'RE DEAD!"<<endl;
            inbando(Map,n,m);
            exit(0);
        }
        else
        {
            int demmin=demxungquanh(Map,x,y);
            MapDisplay[x][y]=char(demmin+48);
        }
    }
}
int main()
{
    srand(time(0));
    int n,m,k;
    nhapdulieu(n,m,k);
    char ** Map=sinhbandoHienMin(n,m,k);
    inbando(Map,n,m);
    cout<<endl;
    char ** MapDisplay=sinhbandoKhongHienMin(n,m);
    choigame(Map,MapDisplay,n,m);

}
