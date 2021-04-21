#include <iostream>
#include<cstdlib>
using namespace std;


void zamiana(long long n, int p)
{
     if(n>0)
     {
         zamiana(n/p,p); //dzieki rekurencjji liczby sa wyswietlane w poprawnej kolejnosci
         if(n%p>9)
//dla systemów o podstawie większej niż 9 cyfry są literami
            switch(n%p)
            {
               case 10:
                  cout<<"A"; break;
               case 11:
                  cout<<"B"; break;
               case 12:
                  cout<<"C"; break;
               case 13:
                  cout<<"D"; break;
               case 14:
                  cout<<"E"; break;
               case 15:
                  cout<<"F"; break;
            }
         else
               cout << n%p;
     }
}


int main()
{
    int proby,liczba;
    cin>>proby;
    while(proby--)
	{
		cin>>liczba;
		zamiana(liczba, 16);
		cout<<" ";
		zamiana(liczba, 11);
		cout<<endl;
	}
    return 0;
}
