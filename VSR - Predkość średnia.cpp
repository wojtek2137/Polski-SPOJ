#include <iostream>

using namespace std;
int v1,v2,ile;
int main()
{
    cin>>ile;
    for(int i=0;i<ile;i++)
    {//wzor na vsr=2*v1*v2/(v1+v2)
        cin>>v1>>v2;
        cout<<2*v1*v2/(v1+v2)<<endl;
    }
    return 0;
}
