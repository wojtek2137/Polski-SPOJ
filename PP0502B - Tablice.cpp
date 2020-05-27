#include <iostream>    
#include <algorithm>    
#include <vector>
using namespace std;
int testy,ile;
int main()
{
    cin>>testy;
    while(testy--)
    {
        cin>>ile;
        vector <int> tablica(ile);
        for (int i=0; i<ile; i++)
        {
            cin>>tablica.at(i);
        }

        reverse( tablica.begin(),tablica.end() );

        for (vector<int>::iterator it = tablica.begin(); it != tablica.end(); ++it)
            cout <<" "<< *it;
        tablica.erase(tablica.begin(),tablica.end());

    }


    return 0;
}
