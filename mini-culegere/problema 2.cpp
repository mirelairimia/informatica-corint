#include <iostream>
using namespace std;
int n,c1,c2,c3,x;
main()
{
    cout<<"n= "; cin>>n;
    // 123 - 1=c1,2=c2,3=c3
    c1=n/100;
    c2=n/10%10;
    c3=n%10;
    x=c1+c2+c3;
    if(x%4==0)
    {
        cout<<"Nr e divizibil cu 4";
    }
    else
    {
        cout<<"Nr nu e divizibil cu 4";
    }
    return 0;
}
