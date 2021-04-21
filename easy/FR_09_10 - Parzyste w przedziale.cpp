#include <iostream>

using namespace std;

int main()
{
    bool czy_jest=false;
    int proby,a,b;
    cin>>proby;
    while(proby--)
    {
		czy_jest = false;
		cin>>a>>b;
		
		for(int i=a+1;i<b;i++)
		{
			if(i%2 == 0)
			{
				cout<<i<<" ";
				czy_jest=true;
			}

		}
		if(!czy_jest)
			cout<<"BRAK";

		cout<<endl;
    }

    return 0;
}
