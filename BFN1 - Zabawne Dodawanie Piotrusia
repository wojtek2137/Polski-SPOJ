#include <iostream>

#include <string>




using namespace std;

int main()
{

    int testy;
    cin>>testy;
    for(int i=0; i<testy; i++)
    {
        int licznik=0;
        string obrocenie= {""};
        int obrocenie_int=0,liczba_int;
        string liczba;

        cin>>liczba;
        liczba_int=stoi(liczba);
        do
        {

            for(int j=liczba.length()-1; j>=0; j--)
            {
                obrocenie+=liczba[j];
                obrocenie_int=stoi(obrocenie); ///koniec alg na odwrocenie

            }
            if (liczba_int==obrocenie_int)
            {

                break;
            }
            licznik++;
            liczba_int=liczba_int+obrocenie_int;
            liczba=to_string(liczba_int);
            obrocenie= {""};



        }
        while(true);
        cout<<liczba<<" "<<licznik<<endl;



    }

    return 0;
}
