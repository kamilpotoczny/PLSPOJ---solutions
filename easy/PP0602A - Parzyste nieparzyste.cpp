#include <iostream>

using namespace std;

int main()
{
    int testy, liczby[100]{0},ile_liczb,pozycja=1, liczby1[100]{0},licznik=0;
    cin>>testy;
    while(testy--)
    {	    
	licznik=0;
	cin>>ile_liczb;
	pozycja=1;
        for(int i=0;i<ile_liczb;i++)
        {
            	cin>>liczby[i];
            	if(pozycja%2==0)
			cout<<liczby[i]<<" ";
        	else
            	{
			liczby1[licznik] = liczby[i];
                	licznik++;
		}
		pozycja++;
        }
        for(int j=0;j<licznik;j++)
            cout<<liczby1[j]<<" ";	
	cout<<endl;
    }
    return 0;
}
