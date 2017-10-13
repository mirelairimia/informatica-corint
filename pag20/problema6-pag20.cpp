#include <iostream>
#include <fstream>

using namespace std;

float x,tvarate,tva,pret;

int main()
{
    cout<<"Pret= ";
    cin>>x;
    cout<<"TVA(%)= ";
    cin>>tvarate;
    tva=x*(tvarate/100);    
    pret=x+tva;
    cout<<"Pret= "<<pret<<"lei";
    return 0;

}