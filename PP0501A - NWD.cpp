#include <iostream>

using namespace std;

int nwd(int a,int  b)
{

    int c;

    while (b != 0)
    {
        c = (a%b);
        a = b;
        b = c;

    }

    return a;
}
int main()
{
    int t,a,b;
    
    cin>>t;
    
    while(t--)
    {
        cin>>a>>b;
        cout<<nwd(a,b)<<endl;
    }
    // your code goes here
    return 0;
}
