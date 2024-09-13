#include <iostream>
#include <string>
using namespace std;

int main() {

//pirmas darbas
    string vardas = "Maksim";
    string pavarde = "Ambrosevic";
    int amzius = 19;
    int grupe = 1;
    int kursas = 1;
    string spp = "programu sistemos";

    cout<<"----------------------------------------"<<endl;
    cout<<"Studento vardas - "<<vardas<<endl;
    cout<<"Studento pavarde - "<<pavarde<<endl;
    cout<<"Studento amzius - "<<amzius<<endl;
    cout<<"Studento grupe - "<<grupe<<endl;
    cout<<"Studento kursas - "<<kursas<<endl;
    cout<<"Studento studiju programos pavadinimas - "<<spp<<endl;
    cout<<"----------------------------------------"<<endl;

//antras darbas
    string ft = "Barcelona"; //futbolo komanda
    int ftmetai = 1899; // ikurimo metai
    string sav = "Joan Laporta"; //klubo savininkas
    string stadionas = "Estadi Olimpic Lluis Companys";
    int vietu = 54367;

    cout<<"Futbolo klubas - "<<ft<<endl;
    cout<<"Klubo ikurimo metai - "<<ftmetai<<endl;
    cout<<"Klubo savininkas - "<<sav<<endl;
    cout<<"Klubo stadionas - "<<stadionas<<endl;
    cout<<"Sedimu vietu stadione - "<<vietu<<endl;
    cout<<"----------------------------------------"<<endl;

//trecias darbas
    string marke = "Audi";
    string modelis = "a4";
    int metai = 1994;
    double litrai = 2.0;
    string spalva = "pilka";

    cout<<"Automobilis "<<marke<<" "<<modelis<<" yra pagamintas "<<metai<<" metais. Jo motoras "<<litrai<<" litrazo. Automobilis yra "<<spalva<<" spalvos."<<endl;
    cout<<"----------------------------------------"<<endl;

//ketvirtas darbas
    int a = 13;
    int b = 5;
    double c = 17.5;

    cout<<"a + b - c = "<<a+b-c<<endl;
    cout<<"15 / 2 + c = "<<15.0/2+c<<endl;
    cout<<"a / b + 2 * c = "<<a / static_cast<double>(b) + 2 * c << endl;
    cout<<"14 % 3 + 6.3 + b / a = "<<14%3+6.3+b/a<<endl;
    cout<<"static_cast<int>(c) % 5 + a - b = "<<static_cast<int>(c)%5+a-b<<endl;
    cout<<"13.5 / 2 + 4.0 * 3.5 + 18 = "<<13.5/2+4.0*3.5+18<<endl;
    cout<<"----------------------------------------"<<endl;
//penktas darbas
    float q, w, e, r, t;
    cout<<"Iveskite penkis skaicius";
    cin>>q>>w>>e>>r>>t;
    cout<<"Skaiciu vidurkis = "<<(q+w+e+r+t)/5<<endl;

    return 0;
}

