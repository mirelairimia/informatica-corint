2/23

#include <iostream>
#include <fstream>

using namespace std;
ifstream f("max_min.in");
ofstream g("max_min.out");

double x,y,u,v,maax,miin;
int main()
{
    f>>x>>y>>u>>v;
    if (x>maax) maax=x;
    if (y>maax) maax=y;
    if (u>maax) maax=u;
    if (v>maax) maax=v;
    if (x<miin) miin=x;
    if (y<miin) miin=y;
    if (u<miin) miin=u;
    if (v<miin) miin=v;

    cout<<"Min="<<miin<< endl;
    cout<<"Max="<<maax;
    // verificam ca s-a facut corect calcularea

    g<<"Minim="<<miin<<"\n"<<"Maxim="<<maax;
    return 0;
}