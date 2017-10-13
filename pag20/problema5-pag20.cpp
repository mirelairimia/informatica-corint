#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int xa,ya,xb,yb,segment;

int main()
{
    cout<<"xA=";
    cin>>xa;
    cout<<"yA=";
    cin>>ya;
    cout<<"xB=";
    cin>>xb;
    cout<<"yB=";
    cin>>yb;
    segment=sqrt((xa-xb)^2+(ya-yb^2));      //formula matematica
    cout<<"Lungime segment= "<<segment;

    return 0;

}