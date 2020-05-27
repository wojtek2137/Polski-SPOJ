#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,n;

    string wynik;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a;

        double pomocnicza=sqrt(a);

        if((a==2)||(a==3))
        {
            wynik={"TAK"};

        }

        else if(a==0||a==1)
        {
            wynik="NIE";
        }

        for(int j=pomocnicza; j>=2; j--)
        {
            if (a%j==0)
            {
                wynik="NIE";
                break;
            }


            else
            {
                wynik="TAK";
            }

        }




        cout<<wynik<<endl;
    }


    return 0;
}
