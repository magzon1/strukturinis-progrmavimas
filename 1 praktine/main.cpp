#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int pasirinkimas;
    int pasirinkimas2;
    float rez;
    float eur;
    float pirkti;
    float parduoti;
    float parduoti_kaina;
    float pirkti_kaina;
    int baigti;

    float GBP_bendras = 0.8593;
    float GBP_pirkti = 0.8450;
    float GBP_parduoti = 0.9060;
    float USD_bendras = 1.0713;
    float USD_pirkti = 1.0547;
    float USD_parduoti = 1.1309;
    float INR_bendras = 88.8260;
    float INR_pirkti = 85.2614;
    float INR_parduoti = 92.8334;


    while (pasirinkimas != 4){
    cout<<"Pasirinkite norima funkcija: "<<endl;
    cout<<"1. Valiutos palyginimas"<<endl;
    cout<<"2. Valiutos pirkimas"<<endl;
    cout<<"3. Valiutos pardavimas"<<endl;
    cout<<"4. Baigti"<<endl;
    cout<<"Irasykite norimos funkcijos numeri (1-4): "<<endl;
    cin >> pasirinkimas;

    switch (pasirinkimas) {
        case 1:
            cout<<"Pasirinkite valiuta kuria norite palyginti su Eurais: "<<endl;
        cout<<"1. Britanijos svaras (GBP)"<<endl;
        cout<<"2. Jungtiniu Amerikos valstyju doleris (USD)"<<endl;
        cout<<"3. Indijos rupijasv (INR)"<<endl;
        cout<<"Irasykite norimos valiutos numeri (1-3): "<<endl;
        cin>>pasirinkimas2;
        switch (pasirinkimas2) {
            case 1:
                cout<<"Iveskite Euru kieki kuri norite palyginti su Britanijos svarais: "<<endl;
            cin>>eur;
            rez = eur*GBP_bendras;
            cout<<eur<<" Eurai = "<<round(rez*100)/100<<" Britanijos svaru"<<endl;
            break;
            case 2:
                cout<<"Iveskite Euru kieki kuri norite palyginti su Jungtiniu Amerikos valstyju doleriu: "<<endl;
            cin>>eur;
            rez = eur*USD_bendras;
            cout<<eur<<" Eurai = "<<round(rez*100)/100<<" Jungtiniu Amerikos valstyju doleriu"<<endl;
            break;
            case 3:
                cout<<"Iveskite Euru kieki kuri norite palyginti su Indijos rupijais: "<<endl;
            cin>>eur;
            rez = eur*INR_bendras;
            cout<<eur<<" Eurai = "<<round(rez*100)/100<<" Indijos rupiju"<<endl;
            break;
        }
        break;
        case 2:
            cout<<"Pasirinkite valiuta kuria norite pirkti: "<<endl;
        cout<<"1. Britanijos svara (GBP)"<<endl;
        cout<<"2. Jungtiniu Amerikos valstyju doleri (USD)"<<endl;
        cout<<"3. Indijos rupija (INR)"<<endl;
        cout<<"Irasykite norimos valiutos numeri (1-3): "<<endl;
        cin>>pasirinkimas2;
        switch (pasirinkimas2) {
            case 1:
                cout<<"Iveskite Britanijos svaru kieki kuri norite nupirkti: "<<endl;
            cin>>pirkti;
            pirkti_kaina = pirkti/GBP_pirkti;
            cout<<pirkti<<" Britanijos svaru galite nusipirkti uz "<<round(pirkti_kaina*100)/100<<" Euru"<<endl;
            break;
            case 2:
                cout<<"Iveskite Jungtiniu Amerikos valstyju doleriu kieki kuri norite nupirkti: "<<endl;
            cin>>pirkti;
            pirkti_kaina = pirkti/USD_pirkti;
            cout<<pirkti<<" Jungtiniu Amerikos valstyju doleriu galite nusipirkti uz "<<round(pirkti_kaina*100)/100<<" Euru"<<endl;
            break;
            case 3:
                cout<<"Iveskite Indijos rupiju kieki kuri norite nupirkti: "<<endl;
            cin>>pirkti;
            pirkti_kaina = pirkti/INR_pirkti;
            cout<<pirkti<<" Indijos rupiju galite nusipirkti uz "<<round(pirkti_kaina*100)/100<<" Euru"<<endl;
            break;
        }
        break;
        case 3:
            cout<<"Pasirinkite valiuta kuria norite parduoti: "<<endl;
        cout<<"1. Britanijos svara (GBP)"<<endl;
        cout<<"2. Jungtiniu Amerikos valstyju doleri (USD)"<<endl;
        cout<<"3. Indijos rupija (INR)"<<endl;
        cout<<"Irasykite norimos valiutos numeri (1-3): "<<endl;
        cin>>pasirinkimas2;
        switch (pasirinkimas2) {
            case 1:
                cout<<"Iveskite Britanijos svaru kieki kuri norite parduoti: "<<endl;
            cin>>parduoti;
            parduoti_kaina = parduoti/GBP_parduoti;
            cout<<parduoti<<" Britanijos svaru galite parduoti uz "<<round(parduoti_kaina*100)/100<<" Euru"<<endl;
            break;
            case 2:
                cout<<"Iveskite Jungtiniu Amerikos valstyju doleriu kieki kuri norite parduoti: "<<endl;
            cin>>parduoti;
            parduoti_kaina = parduoti/USD_parduoti;
            cout<<parduoti<<" Jungtiniu Amerikos valstyju doleriu galite parduoti uz "<<round(parduoti_kaina*100)/100<<" Euru"<<endl;
            break;
            case 3:
                cout<<"Iveskite Indijos rupiju kieki kuri norite parduoti: "<<endl;
            cin>>parduoti;
            parduoti_kaina = parduoti/INR_parduoti;
            cout<<parduoti<<" Indijos rupiju galite parduoti uz "<<round(parduoti_kaina*100)/100<<" Euru"<<endl;
            break;
        }
    }
}

    return 0;
}
