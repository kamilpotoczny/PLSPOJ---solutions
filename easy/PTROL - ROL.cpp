#include <iostream>

using namespace std;

int main()
{

	int proby,ile_liczb,liczba[100];
	cin>>proby;

	while(proby--)
	{
		cin>>ile_liczb;
		for(int i=0;i<ile_liczb;i++)
			cin>>liczba[i];
		
		for(int j=1;j<ile_liczb;j++)
		{	
			cout<<liczba[j]<<endl;
			if(j==ile_liczb-1)
				cout<<liczba[0]<<endl;
		}
   }


    return 0;
}
