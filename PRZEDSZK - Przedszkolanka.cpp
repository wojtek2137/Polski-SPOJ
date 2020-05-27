#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, d, reszta;
    cin>>n;
    while(n--)
    {
     cin>>a>>b;
     c = a;
     d = b;

     while(d)
     {
      reszta = c % d;
      c = d;
      d = reszta;
     }
     cout<<(a*b)/c<<endl;
    }
    return 0;
}
