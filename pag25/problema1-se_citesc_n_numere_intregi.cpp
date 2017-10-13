#include <iostream>

using namespace std;

int n,a,i,nrpare,nrpoz,valmax=0;

int main()
{
    cout<<"Numarul de numere citite de la tastatura= "; cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"a= "; cin>>a;
        if(a%2==0)
        {
            nrpare++;
        }
        if(a>2)
        {
            nrpoz++;
        }
        if(a>valmax)
        {
            valmax=a;
        }
    }
    cout<<"Numere pare= "<<nrpare<< endl;
    cout<<"Numere poz= "<<nrpoz<< endl;
    cout<<"Numar maxim= "<<valmax<< endl;


    return 0;
}
