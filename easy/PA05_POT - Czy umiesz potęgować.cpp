#include<iostream>
#include<cmath>
using namespace std;

int main()
{	
	int proby,a,b;
	int tab[10][4];
	cin>>proby;
	for(int i=0;i<=9;i++)
	{
		for(int j=1;j<=4;j++)
		{
			int k=j%4;
			tab[i][k]=((int)pow(i,j))%10;
		}				
	}
	while(proby--)
	{
		cin>>a>>b;
		cout<<tab[a%10][b%4]<<endl;
	}
return 0;
}
