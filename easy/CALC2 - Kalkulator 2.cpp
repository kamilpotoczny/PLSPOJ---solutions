#include <iostream>

using namespace std;

int main()
{
	int rejestr[10];
	char k;
	int x,y;
	while(cin>>k>>x>>y)
	{
		switch(k)
		{
			case 'z':
			{
				rejestr[x] = y;
				break;
			}
			case '+':
			{
				cout<<rejestr[x]+rejestr[y]<<endl;
				break;
			}
			case '-':
			{
				cout<<rejestr[x]-rejestr[y]<<endl;
				break;
			}
			case '*':
			{
				cout<<rejestr[x]*rejestr[y]<<endl;
				break;
			}
			case '/':
			{
				cout<<rejestr[x]/rejestr[y]<<endl;
				break;
			}
			case '%':
			{
				cout<<rejestr[x]%rejestr[y]<<endl;
				break;
			}
		}
    }
}

    return 0;
}
