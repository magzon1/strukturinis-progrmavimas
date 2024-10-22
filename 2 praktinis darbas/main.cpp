#include <iostream>
#include <ctime>
using namespace std;


bool tiesa = true;
bool netiesa = false;

int sk1;
int sk2;

bool balse(char raide) {
    bool otp = false;
    char balses[12] = {'o', 'i', 'y', 'u', 'a', 'e', 'O', 'I', 'Y', 'U', 'A', 'E'};
    for (int i=0; i<12; i++){
        if (raide == balses[i])
            otp = true;
    }
    return otp;
}

int main() {
    int pasirinkimas;

    while (pasirinkimas !=5) {
        cout<<" "<<endl;
        cout<<"--------------MENIU---------------"<<endl;
        cout<<"Pasirinkite norima funkcija (iveskite skaiciu nuo 1 iki 5): "<<endl;
        cout<<"1. Patikrinti ar raide yra balse"<<endl;
        cout<<"2. Rasti didziausia bendra dalikli tarp dvieju skaitmenu"<<endl;
        cout<<"3. Mini zaidimas"<<endl;
        cout<<"4. FizzBuzz funkcija"<<endl;
        cout<<endl;
        cout<<"5. Uzdaryti meniu"<<endl;
        cin>>pasirinkimas;

        switch (pasirinkimas) {
            case 1:
                char raide;
                cout<<"Iveskite raide kuria norite patikrinti: "<<endl;
                cin>>raide;
                cout<<"Ivesta raide "<<(balse(raide)? "yra" : "nera")<<" balse"<<endl;
                break;

            case 2:
                cout<<"Iveskite pirma skaitmeni: "<<endl;
                cin>>sk1;
                cout<<"Iveskite antra skaitmeni: "<<endl;
                cin>>sk2;

                while (sk1 != sk2) {
                if (sk1 > sk2) {
                    sk1 = sk1 - sk2;}
                else {
                    sk2 = sk2 - sk1;}
                }
                cout<<"Didziausias bendras daliklis yra "<<sk1<<endl;
                break;
                }
        }
    return 0;
}

