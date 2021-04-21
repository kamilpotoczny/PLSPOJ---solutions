#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



string dodaj(string a, string b)
{
	int dlugosc_a = a.length()-1;
	int dlugosc_b = b.length()-1;
	string wynik = "";
	int przeniesienie = 0;
	while(dlugosc_a >= 0 || dlugosc_b >= 0)
	{
		int liczba_a, liczba_b, w;
		if(dlugosc_a >= 0) liczba_a = a[dlugosc_a] - 48; else liczba_a = 0;
		if(dlugosc_b >= 0) liczba_b = b[dlugosc_b] - 48; else liczba_b = 0;
		w= liczba_a + liczba_b + przeniesienie;
		wynik = "0" + wynik;
		wynik[0] = 48 + w%10;
		przeniesienie = w/10;

		dlugosc_a--;
		dlugosc_b--;
	}
	if(przeniesienie) wynik = "1" + wynik;
	return wynik;
}
int main()
{
	int proby;
	string a,b;
	cin>>proby;
	while(proby--)
	{
		cin>>a>>b;
		cout<<dodaj(a,b)<<endl;
	}
    return 0;
}
