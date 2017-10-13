#include <iostream>
#include <math.h>


using namespace std;

int a,b,c,triplet;
int main()

{
    cout<<"A="; cin>>a;
    cout<<"B="; cin>>b;
    cout<<"C="; cin>>c;
    cout<<"Media aritmetica= "<<a+b+c/3<< endl;
    cout<<"Media geometrica= "<<sqrt((a*b*c))<< endl;

    if((c^2)==(a^2)+(b^2))  //conditia tripletului pitagoric
    {
        cout<<"Tripletul pitagoric este realizabil.";
    }
        else
        {
            cout<<"Tripletul pitagoric nu este realizabil.";
        }

    return 0;

}