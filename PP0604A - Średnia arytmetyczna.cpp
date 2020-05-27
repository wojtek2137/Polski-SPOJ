#include <iostream>
#include <cmath>
using namespace std;
int t,n,liczba;
float suma;
float srednia;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        suma=0;
        float *tablica;
        tablica=new float[n];
    for (int i=0;i<n;i++) //petla do wczytywania
    {
        cin>>tablica[i];
        suma+=tablica[i]; // liczê sumê-iteracje mi siê sumuj¹
    }
    srednia=suma/n;
    liczba=tablica[0];
    for (int i=1;i<n;i++) //Pêtla do sprawdzania wszystkich iteracji czy nie ró¿ni¹ siê od tej zadeklarowanej
    {
        if (fabs(srednia-liczba)>fabs(srednia-tablica[i]))
        {
            liczba=tablica[i];
        }
    }

    cout<<liczba<<endl;
    delete []tablica;
}

    return 0;
}
