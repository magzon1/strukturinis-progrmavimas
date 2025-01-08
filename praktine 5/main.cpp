#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

struct Strukt {
    int id;
    string vardas;
    string pavarde;
    string telefonas;
};

Strukt** kontaktai = nullptr;
int contactCount = 0;

void pridetiKontakta(int& nextId) {
    Strukt* naujas = new Strukt;
    naujas->id = nextId++;

    cout << "\nIveskite varda: ";
    cin >> naujas->vardas;
    cout << "Iveskite pavarde: ";
    cin >> naujas->pavarde;
    cout << "Iveskite telefono numeri: ";
    cin >> naujas->telefonas;

    Strukt** temp = new Strukt*[contactCount + 1];
    for (int i = 0; i < contactCount; ++i) {
        temp[i] = kontaktai[i];
    }
    temp[contactCount] = naujas;

    delete[] kontaktai;
    kontaktai = temp;
    contactCount++;

    cout << "Kontaktas pridetas sekmingai!\n";
}

void spausdintiKontaktus() {
    if (contactCount == 0) {
        cout << "\nKontaktų sąrašas tuščias.\n";
        return;
    }

    cout << "\nVisi kontaktai:\n";
    for (int i = 0; i < contactCount; ++i) {
        cout << "ID: " << kontaktai[i]->id << ", Vardas: " << kontaktai[i]->vardas
             << ", Pavarde: " << kontaktai[i]->pavarde
             << ", Telefonas: " << kontaktai[i]->telefonas << "\n";
    }
}

void redaguotiKontakta() {
    int id;
    cout << "\nIveskite redaguojamo kontakto ID: ";
    cin >> id;

    for (int i = 0; i < contactCount; ++i) {
        if (kontaktai[i]->id == id) {
            cout << "\nRedaguojate kontakta (ID: " << id << ")\n";
            cout << "Iveskite nauja varda: ";
            cin >> kontaktai[i]->vardas;
            cout << "Iveskite nauja pavarde: ";
            cin >> kontaktai[i]->pavarde;
            cout << "Iveskite nauja telefono numeri: ";
            cin >> kontaktai[i]->telefonas;
            cout << "Kontaktas atnaujintas\n";
            return;
        }
    }
    cout << "Kontaktas su nurodytu ID nerastas.\n";
}

void istrintiKontakta() {
    int id;
    cout << "\nIveskite salinamo kontakto ID: ";
    cin >> id;

    for (int i = 0; i < contactCount; ++i) {
        if (kontaktai[i]->id == id) {
            delete kontaktai[i];

            for (int j = i; j < contactCount - 1; ++j) {
                kontaktai[j] = kontaktai[j + 1];
            }
            contactCount--;

            Strukt** temp = new Strukt*[contactCount];
            for (int k = 0; k < contactCount; ++k) {
                temp[k] = kontaktai[k];
            }

            delete[] kontaktai;
            kontaktai = temp;

            cout << "Kontaktas pasalintas sekmingai!\n";
            return;
        }
    }
    cout << "Kontaktas su nurodytu ID nerastas.\n";
}



int main() {
    int uzd;
    cout<<"Pirma uzduotis"<<endl;
    cout<<"Antra uzduotis"<<endl;
    cin>>uzd;
    if (uzd == 1) {
        int eil, stulp;

        cout << "Iveskite lenteles eiluciu skaiciu: ";
        cin >> eil;
        cout << "Iveskite lenteles stulpeliu skaiciu: ";
        cin >> stulp;

        int** lent = new int*[eil];
        for (int i = 0; i < eil; ++i) {
            lent[i] = new int[stulp];
        }

        cout << "Iveskite lenteles reiksmes:\n";
        for (int i = 0; i < eil; ++i) {
            for (int j = 0; j < stulp; ++j) {
                cout << "Reiksme [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> lent[i][j];
            }
        }

        cout << "\nLentele:\n";
        for (int i = 0; i < eil; ++i) {
            for (int j = 0; j < stulp; ++j) {
                cout << lent[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "\nEiluciu sumos:\n";
        for (int i = 0; i < eil; ++i) {
            int rowSum = 0;
            for (int j = 0; j < stulp; ++j) {
                rowSum += lent[i][j];
            }
            cout << "Eilute " << i + 1 << ": " << rowSum << "\n";
        }

        cout << "\nStulpeliu sumos:\n";
        for (int j = 0; j < stulp; ++j) {
            int colSum = 0;
            for (int i = 0; i < eil; ++i) {
                colSum += lent[i][j];
            }
            cout << "Stulpelis " << j + 1 << ": " << colSum << "\n";
        }

        int maxVal = numeric_limits<int>::min();
        for (int i = 0; i < eil; ++i) {
            for (int j = 0; j < stulp; ++j) {
                if (lent[i][j] > maxVal) {
                    maxVal = lent[i][j];
                }
            }
        }
        cout << "\nDidziausia reiksme lenteleje: " << maxVal << "\n";

        for (int i = 0; i < eil; ++i) {
            delete[] lent[i];
        }
        delete[] lent;

        return 0;
    }
    else if (uzd == 2) {

        int nextId = 1;
        int pasirinkimas;

        while (pasirinkimas != 5){
            cout << "\nMeniu:\n";
            cout << "1. Prideti kontakta\n";
            cout << "2. Atspausdinti visus kontaktus\n";
            cout << "3. Redaguoti kontakta\n";
            cout << "4. Istrinti kontakta\n";
            cout << "5. Iseiti\n";
            cout << "Pasirinkite: ";
            cin >> pasirinkimas;

            switch (pasirinkimas) {
                case 1:
                    pridetiKontakta(nextId);
                break;
                case 2:
                    spausdintiKontaktus();
                break;
                case 3:
                    redaguotiKontakta();
                break;
                case 4:
                    istrintiKontakta();
                break;
                case 5:
                    cout << "Iseinama is programos...\n";
                break;
                default:
                    cout << "Neteisingas pasirinkimas. Bandykite dar karta.\n";
            }
        }
        for (int i = 0; i < contactCount; ++i) {
            delete kontaktai[i];
        }
        delete[] kontaktai;

        return 0;
    }
    else {
        cout<<"Klaida"<<endl;
    }
}
