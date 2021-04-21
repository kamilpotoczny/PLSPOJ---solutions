#include <iostream>
#include <string>
using namespace std;

int main()
{
    string wyraz;
    char wycinanie;
    while(cin>>wycinanie>>wyraz)
    {
		for(int i=0;i<wyraz.length();i++)
			if(wyraz[i] == wycinanie)
			{
				wyraz.erase(i, 1);
				i--;
			}
		cout<<wyraz<<endl;
    }


    return 0;
}
