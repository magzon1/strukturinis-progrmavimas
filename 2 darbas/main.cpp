#include <iostream>
using namespace std;
int main()
{
    int a, b ,c, d, e;
    int vidurkis;
    cout<<"Iveskite penkis studento pazymius (nuo 1 iki 10): "<<endl;
    cin >>a>>b>>c>>d>>e;
    vidurkis = (a+b+c+d+e)/5;
    cout<<"Studento pazymiu vidurkis yra "<<vidurkis<<endl;

    if (vidurkis >=5)
    {
        cout<<"Vidurkis yra teigiamas"<<endl;
    } else {
        cout<<"Vidurkis yra neigiamas"<<endl;
    }
    float egzaminas;
    cout<<"Iveskite egzamino ivertinima (nuo 1 iki 10): "<<endl;
    cin >> egzaminas;
    if (egzaminas == 10) {
        cout<<"Puiku!"<<endl;
    }
    else if (egzaminas >=9) {
        cout<<"Labai gerai"<<endl;
    }
    else if (egzaminas >=7) {
        cout<<"Gerai"<<endl;
    }
    else if (egzaminas >=5) {
        cout<<"Patenkinamai"<<endl;
    }

    int pasirinkimas;
    cout<<"Pasirinkite pazymi"<<endl;
    cout<<"1. "
    




    return 0;
}
