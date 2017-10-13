#include <iostream>
#include <fstream>

using namespace std;

int numar,h,m,s;

int main()
{
    cin>>numar;
    h=numar/3600;
    m=(numar-(h*3600))/60;
    s=numar-(h*3600)-m*60;
    cout<<h<<" "<<m<<" "<<s;

    return 0;

}