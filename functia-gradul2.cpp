#include <iostream>
#include <math.h>

using namespace std;

int a,b,c,delta,x1,x2;

int main()
{
    cout<<"Forma functiei: ax^2+bx+c=0"<< endl;
    cout<<"Introduceti parametrii a,b,c"<< endl;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;
    cout<<"c= "; cin>>c;
    delta=(b^2)+(4*a*c);
    if(delta>0)
    {
    x1=(-b-sqrt(delta)/2*a);
    x2=(b-sqrt(delta)/2*a);
    cout<<"Radaciniile functiei:"<< endl;
    cout<<"x1= "<<x1<< endl;
    cout<<"x2= "<<x2;
    }
    else
    {
    cout<<"Delta nu este mai mare ca 0, functia nu are radacini.";    
    }
    
    return 0;
}
