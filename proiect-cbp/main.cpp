#include <iostream>
#include <math.h>


using namespace std;

double x;

int main()
{
    cout<<"F : R -> R, x = b. Introduceti x= "; cin>>x;

        if(x < (-12))
        {
            cout<<"Rezultatul functiei= "<<((x*x)+6*x);
        }
        if((-12) >= x && x< (-5))         // sintaxa de comparare interval (x >= margineinterval1 && margineinterval2 <= x)
        {
            cout<<"Rezultatul functiei= "<<((sqrt((x*x*x*x)+12)));
        }




    return 0;
}

