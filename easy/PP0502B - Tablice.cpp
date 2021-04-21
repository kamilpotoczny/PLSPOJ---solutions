#include <iostream>

using namespace std;

int main()
{
    int proby, tablica1[100];
    cin>>proby;
    while(proby--)
    {
        int x=0;
        cin>>x;
        for(int i=0;i<x;i++)
            cin>>tablica1[i];
        for(int j=x-1;j>=0;j--)
            cout<<tablica1[j]<<" ";

    }


    return 0;
}
