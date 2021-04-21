#include <iostream>

using namespace std;

int main()
{

    int proby, ile, liczby, suma=0;

    cin>>proby;
    while(proby--)
	{
        cin>>ile;
        while(ile--)
        {
			cin>>liczby;
            suma+=liczby;
        }
        cout<<suma<<endl;
        suma = 0;
    }

    return 0;
}
