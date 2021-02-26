#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
    srand(time(0));
    int n;
    cin>>n;
    cout<<rand()%n;
}
