#include <iostream>
using namespace std;

int main() {
int pasirinkimas;
    int pasirinkimas2;
    float rez;
    float eur;
    float pirkti;
    float pirkti_kaina;
    float GBP_bendras = 0.8593;
    float GBP_pirkti = 0.8450;
    float GBP_parduoti = 0.9060;
    float USD_bendras = 1.0713;
    float USD_pirkti = 1.0547;
    float USD_parduoti = 1.1309;
    float INR_bendras = 88.8260;
    float INR_pirkti = 85.2614;
    float INR_parduoti = 92.8334;

    cout<<"Pasirinkite norima funkcija: "<<endl;
    cout<<"1. Valiutos palyginimas"<<endl;
    cout<<"2. Valiutos pirkimas"<<endl;
    cout<<"3. Valiutos pardavimas"<<endl;
    cout<<"Irasykite norimos funkcijos numeri (1-3): "<<endl;
    cin >> pasirinkimas;

    switch (pasirinkimas) {
        case 1:
            cout<<"Pasirinkite valiuta kuria norite palyginti su Eurais: "<<endl;
            cout<<"1. Britanijos svaras"<<endl;
            cout<<"2. Jungtiniu Amerikos valstyju doleris"<<endl;
            cout<<"3. Indijos rupijas"<<endl;
            cin>>pasirinkimas2;
        switch (pasirinkimas2) {
            case 1:
                cout<<"Iveskite Euru kieki kuri norite palyginti su Britanijos svarais: "<<endl;
                cin>>eur;
                rez = eur*GBP_bendras;
                cout<<eur<<" Eurai = "<<rez<<" Britanijos svaru"<<endl;
                break;
            case 2:
                cout<<"Iveskite Euru kieki kuri norite palyginti su Jungtiniu Amerikos valstyju doleriu: "<<endl;
                cin>>eur;
                rez = eur*USD_bendras;
                cout<<eur<<" Eurai = "<<rez<<" Jungtiniu Amerikos valstyju doleriu"<<endl;
                break;
            case 3:
                cout<<"Iveskite Euru kieki kuri norite palyginti su Indijos rupijais: "<<endl;
                cin>>eur;
                rez = eur*INR_bendras;
                cout<<eur<<" Eurai = "<<rez<<" Indijos rupiju"<<endl;
                break;
        }
        case 2:
            cout<<"Pasirinkite valiuta kuria norite pirkti: "<<endl;
            cout<<"1. Britanijos svara"<<endl;
            cout<<"2. Jungtiniu Amerikos valstyju doleri"<<endl;
            cout<<"3. Indijos rupija"<<endl;
            cin>>pasirinkimas2;
        switch (pasirinkimas2) {
            case 1:
                cout<<"Iveskite Britanijos svaru kieki kuri norite nupirkti: "<<endl;
                cin>>pirkti;
                pirkti_kaina = pirkti/GBP_pirkti;
                cout<<pirkti<<" Britanijos svaru galite nusipirkti uz "<<pirkti_kaina<<" Euru"<<endl;

        }



    }

    return 0;
}
