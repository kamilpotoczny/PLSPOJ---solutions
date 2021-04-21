#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void utworzzdanie(char x, int ile)
{
	cout<<x<<ile+1;
}
int sprawdzanie(string x)
{
    int test = 0;
    int dlugosc = x.length();
    for(int i=0;i<dlugosc;i++)
    {
        test=0;
		for(int j=i+1;j<dlugosc;j++)
		{
			if(x[i]!=x[j])
				break;
			test++;
		}
		if(test>1)
		{
			utworzzdanie(x[i],test);
			i+=test;
		}
		else
			cout<<x[i];
    }
}
int main()
{
    int proby;
    cin>>proby;
    while(proby--)
    {
		string wyraz;
		cin>>wyraz;
		sprawdzanie(wyraz);
		cout<<endl;
    }
    return 0;
}
