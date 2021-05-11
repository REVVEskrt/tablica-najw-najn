#include <iostream>
using namespace std;

void wartpocz(int tab[], int rozmiar)
{
    for(int i=0; i < rozmiar; i++)
    {
        cout << "Podaj " << i << " element   ";
        cin >> tab[i];
    }

}
void wpisz(int tab[], int rozmiar)
{
    cout << "zawartosc tabeli: ";
    for(int i=0;i<rozmiar;i++)
        cout << tab[i] << " ";
    cout << endl;

}

int main()
{
int tab1[5];
int rozmiar= 5;
wartpocz(tab1, 5);
cout << "poczatkowa ";
wpisz(tab1, 5);

int najm = tab1 [0];
int najm1;
int pozycja= 0;

for (int i=1; i<5; i++)
    {
        if (tab1[i] < najm)
            {
                najm = tab1[i];
            }
    }
cout << "najmniejsza liczba z tego przedzialu to: "<< najm << endl;

for(int i=1;i<rozmiar;i++)
    {
        if(najm1 > tab1[i])
        {
            pozycja=i;
            najm1=tab1[i];
        }

    }

    swap( tab1[0],tab1[pozycja]);
    cout << "koncowa "; wpisz(tab1, 5); 

return 0;
}