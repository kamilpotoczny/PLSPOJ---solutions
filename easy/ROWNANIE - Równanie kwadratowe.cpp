#include <iostream>
using namespace std;

int main()
{
    int proby;
    float a,b,c,delta,miejsceZerowe,miejsceZerowe2;
    while(cin>>a>>b>>c)
    {

        delta = b*b - 4*a*c;
        if(delta<0)
            cout<<"0"<<endl;
        else if(delta==0)
            //miejsceZerowe = -b/2*a;
            cout<<"1"<<endl;
        else if(delta>0)
        {
           // miejsceZerowe = (-b+sqrt(delta))/2*a;
           // miejsceZerowe2 = (-b - sqrt(delta))/2*a;
           cout<<"2"<<endl;

        }



    }



    return 0;
}
