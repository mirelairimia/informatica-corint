#include <iostream>
#include <fstream>

using namespace std;

int a,s=0,n=0;

int main()
{
    ifstream f("numar.in");
    f>>a;
    s+=a%10+(a/10%10)+(a/100%10);
    ofstream o("numar.out");
    o<<a<<"\n";
    o<<s;
    return 0;

}