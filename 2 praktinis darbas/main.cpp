#include <iostream>
using namespace std;

void balse () {
    char raide;
    char masyvas_balsiai [] = { 'a', 'e','i', 'u', 'o' };
    cout<<"Iveskite raide, kuria norite patikrinti: "<<endl;
    cin>>raide;

    if ( raide == masyvas_balsiai[5] )
        cout<<"True"<<endl;



}




int main() {
    int pasirinkimas;

    while (pasirinkimas !=5) {
        cout<<"--------------MENIU---------------"<<endl;
        cout<<"Pasirinkite norima funkcija (iveskite skaiciu nuo 1 iki 5): "<<endl;
        cout<<"1. Patikrina ar raide yra balse"<<endl;
        cout<<"2. Randa maziausia bendra dalikli tarp dvieju skaitmenu"<<endl;
        cout<<"3. Mini zaidimas"<<endl;
        cout<<"4. Papildoma funkcija"<<endl;
        cout<<" "<<endl;
        cout<<"5. Uzdaryti meniu"<<endl;
        cin>>pasirinkimas;

        switch (pasirinkimas) {
            case 1:
                balse ();
        }
    }


    return 0;
}
