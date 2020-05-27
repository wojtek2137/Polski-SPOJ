#include <iostream>

using namespace std;

int main()
{
    int t;
    string a,b,c;
    cin>>t;

    while( t-- )
    {
        cin>>a>>b;
        for(int i =0,j=0; i<min(a.size(),b.size()); i++,j++)
        {
            c.push_back( a[i] );
            c.push_back( b[j] );
        }
        cout<<c<<endl;
        c.erase();
    }


    return 0;
}
