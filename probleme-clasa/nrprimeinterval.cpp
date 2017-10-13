#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,i,d,ok,s=0;
    cin>>a,b;
    for (i=a;i<=b;i++)
    {
        if (i%2==0)
        {
            if (i==2)
                s++;
        }
        else
        {
            ok=0;
            d=3;
            while (ok==0 && d<=sqrt(i))
            {
                if (i%d==0)
                    ok=1;
                d=d+2;
            }
            if (ok==0)
                s++;
        }
    }
    cout<<s;
    return 0;
}
