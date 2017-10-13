#include <iostream>     //libraria iostream (permite folosirea comenzilor cout/cin)
#include <fstream>      //libraria fstream  (permite folosirea operatiilor matematice de genul sqrt(radical) pow(ridicatul la putere) etc

using namespace std;    //aceasta comanda ne scuteste de a scrie std:: in fata comenzilor cin/cout; fara aceasta comanda cin/cout nu vor fii aceptate de compilator, vor trebui scrise std::cin/std::cout




int main()
{
    int g1,m1,s1,g2,m2,s2,gt=0,mt=0,st=0;       //initializam variabilele
    ifstream f("unghi.in");                     //citim fisierul unghi.in folosind comanda ifstream (sintaxa ifstream este urmatoarea: ifstream nume_functie("nume_fisier.txt")

    f>>g1>>m1>>s1>>g2>>m2>>s2;                  //transmitem datele de la functia f la variabilele g1,m1,s1... (grade1 minute1 secunde1....| gradetotal, minutetotal,...)
    f.close();                                  //inchidem stream-ul de date f

    st+=s2+s1;
    if (st>=60 )        //cand secundele ajung la 60 se scad si se adauga 1 la minut
        {
        st-=60;
        mt++;
    }
    mt+=m2+m1;          //cand minutele ajung la 60 se scad si se adauga 1 la ora
    if (mt>=60 )
    {
        mt-=60;
        gt++;
    }
    gt+=g1+g2;          
   ofstream o("unghi.out");     //scriem in unghi.out variabilele gt,mt,st cu spatiu intre ele
   o<<gt<<" "<<mt<<" "<<st;
   o.close();                   //inchidem stream-ul de date o

   return 0;

}