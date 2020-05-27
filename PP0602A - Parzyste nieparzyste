#include <iostream>

using namespace std;
int ilosc_testow;
int ilosc_liczb;
int main()
{
    cin>>ilosc_testow;
    while (ilosc_testow--)
    {
        cin>>ilosc_liczb;
        int pozycja;
        int *tablica;
        tablica=new int[ilosc_liczb];


       for (int i=1;i<=ilosc_liczb;i++) //wwczytanie liczb do tablicy
        { cin>>tablica[i]; // tablica przechowuje daną liczbe a "i" to pozycja
          pozycja=i;        // nadajemy zmiennej pozycja aktualną pozycje i w pętli
        }
       for (int i=1;i<=ilosc_liczb;i++) //liczby parzyste
       {
           pozycja=i; //ponownie nadaje pozycje w pętli do zmiennej pozycja
           if (pozycja%2==0) cout<<tablica[i]<<" ";
       }

       for (int i=1;i<=ilosc_liczb;i++) //liczby nieparzyste
       {
           pozycja=i; //znów nadaje i do zmiennej pozycja w tej samej pętli ale na innego ifa
           if (pozycja%2==1) cout <<tablica[i]<<" ";
       }
     delete []tablica;
    }



    return 0;
}
