#include <iostream>
#include <vector>


using namespace std;
int t,n;
int wynik;
vector <int> liczby;

int main()
{
    cin>> t;
    while (t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int liczba[i];
            cin>>liczba[i];
            liczby.push_back(liczba[i]);
        }

        for (int i=0;i<liczby.size();i++)
        {
            wynik+=liczby[i];

        }
cout<<wynik<<endl;
liczby.erase(liczby.begin(),liczby.end());
wynik=0;

    }

    return 0;
}

