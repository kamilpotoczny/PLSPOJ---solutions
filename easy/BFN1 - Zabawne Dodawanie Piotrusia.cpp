#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;
int proby,liczba1,ile_dodawania=0,suma=0;

int odwroc_liczbe(int liczba)
{
    int liczba_cyfr = floor(log10(liczba)+1);
    int wynik=0;

    for(int i=1; i<=liczba_cyfr; i++)
    {
        wynik += floor(pow(10,liczba_cyfr-i))* (liczba%10);

        liczba /=10;
    }

    return wynik;
}
bool palindrom(string liczba12)
{
    int ile_liczb = liczba12.length();
    for(int i=0;i<=ile_liczb;i++)
    {
       if(liczba12[i] == liczba12[ile_liczb-i-1])
		{
            if(i==ile_liczb-1)
            {
                return true;

            }
        }
        else
            return false;
    }

}
int main()
{
   string liczba;
   cin>>proby;

   while(proby--)
   {
		cin>>liczba;
        while(1<2)
         {
            if(palindrom(liczba) == true)
            {
				cout<<liczba<<" "<<ile_dodawania<<endl;
                break;
			}
            else
            {
                stringstream ss(liczba);
                ss >> liczba1;
                suma = liczba1 + odwroc_liczbe(liczba1);
                ostringstream ss1;
                ss1 << suma;
                liczba = ss1.str();
                ile_dodawania++;
            }
         }
    ile_dodawania =0 ;
    }

    return 0;
}
