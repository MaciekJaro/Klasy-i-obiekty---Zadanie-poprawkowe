#include <iostream>
#include <string>
using namespace std;
class Uczen{
    public:
        string imie,nazwisko,klasa;
        int jpolski,matematyka,fizyka;
        void pobierzDane(){
			cout<<"Podaj imie ucznia: ";
            cin>>imie;
            cout<<"Podaj nazwisko ucznia: ";
            cin>>nazwisko;
            cout<<"Podaj klase ucznia: ";
            cin>>klasa;
            cout<<"Podaj ocene ucznia z jezyka polskiego: ";
            cin>>jpolski;
            cout<<"Podaj ocene ucznia z matematyki: ";
            cin>>matematyka;
            cout<<"Podaj ocene ucznia z fizyki: ";
            cin>>fizyka;
        };
        void wyswietlDane(){
            cout<<"Imie ucznia to "<<imie<<endl;
            cout<<"Nazwisko ucznia to "<<nazwisko<<endl;
            cout<<"Ocena koncowa ucznia z jezyka polskiego to "<<jpolski<<endl;
            cout<<"Ocena koncowa ucznia z matematyki to "<<matematyka<<endl;
            cout<<"Ocena koncowa ucznia z fizyki to "<<fizyka<<endl;
        };
        void wyswietlOceny(){
            cout<<"Ocena koncowa ucznia z jezyka polskiego to "<<jpolski<<endl;
            cout<<"Ocena koncowa ucznia z matematyki to "<<matematyka<<endl;
            cout<<"Ocena koncowa ucznia z fizyki to "<<fizyka<<endl;
            cout<<"Srednia ocen ucznia to:"<<srednia()<<endl;
        }
        void metryczka(){
            cout<<"-----------------"<<endl;
            cout<<"program wykonal"<<endl;
            cout<<"Maciej Jaroszynski 3cg"<<endl;
            cout<<"-----------------"<<endl;
        }
        float srednia(){
            return(jpolski+matematyka+fizyka)/3;
        }
};
int main(){
    Uczen uczen;
    
    uczen.metryczka();
    uczen.pobierzDane();
    uczen.wyswietlDane();
    uczen.wyswietlOceny();

}
