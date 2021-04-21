#include <iostream>

using namespace std;

int gra1(int a, int b)
{
    if(a==b) 
		return a+b;
    else
	{
		if(a>b)
			return gra1(a-b,b);
		else
			return gra1(a,b-a);
	}

}

int main()
{
    int proby,a, b;
    cin>>proby;
    while(proby--)
	{
		cin>>a>>b;
		cout<<gra1(a,b)<<endl;
    }

    return 0;
}
