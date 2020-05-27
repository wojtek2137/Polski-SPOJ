#include <iostream>

using namespace std;

int ile_testow,zaproszeni,cwp,suma;  //cwp  - ciastka w pudelku
int pudelka;
int main()
{
    cin >> ile_testow;
    for (int i=0; i<ile_testow; i++)
    {
        cin >> zaproszeni>>cwp;
        int czas[zaproszeni];
        suma=0;
        for (int i=0; i<zaproszeni; i++)
        {
            cin >> czas[i];
            suma+=86400/czas[i];  // dobra ma 86400 s
        }
        if (suma%cwp==0) pudelka=suma/cwp; 
        else pudelka=suma/cwp+1;

        cout <<pudelka<<endl;
    }
