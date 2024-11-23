#include <iostream>
#include <string>
using namespace std;


//Sifravimas/Desifravimas naudojant abecele:

const char abecele[] = "abcdefghijklmnopqrstuvwxyz";
const int abecele_SIZE = sizeof(abecele) - 1;

int findCharIndex(char c) {
    for (int i = 0; i < abecele_SIZE; ++i) {
        if (abecele[i] == c) {
            return i;
        }
    }
}

string normalizeText(const string& text) {
    string normalized;
    for (char c : text) {
        if (isalpha(c)) {
            normalized += tolower(c);
        }
    }
    return normalized;
}

string encryptedAbc(const string& text, const string& key) {
    string normalizedText = normalizeText(text);
    string normalizedKey = normalizeText(key);
    string encryptedText;

    int keyLength = normalizedKey.length();
    for (size_t i = 0; i < normalizedText.length(); ++i) {
        int textIndex = findCharIndex(normalizedText[i]);
        int keyIndex = findCharIndex(normalizedKey[i % keyLength]);

        if (textIndex != -1 && keyIndex != -1) {
            char encryptedChar = abecele[(textIndex + keyIndex) % abecele_SIZE];
            encryptedText += encryptedChar;
        }
    }
    return encryptedText;
}

string decryptedAbc(const string& encryptedText, const string& key) {
    string normalizedKey = normalizeText(key);
    string decryptedText;

    int keyLength = normalizedKey.length();
    for (size_t i = 0; i < encryptedText.length(); ++i) {
        int encryptedIndex = findCharIndex(encryptedText[i]);
        int keyIndex = findCharIndex(normalizedKey[i % keyLength]);

        if (encryptedIndex != -1 && keyIndex != -1) {
            char decryptedChar = abecele[(encryptedIndex - keyIndex + abecele_SIZE) % abecele_SIZE];
            decryptedText += decryptedChar;
        }
    }
    return decryptedText;
}

//Sifravimas/Desifravimas naudojant ASCII koduote:

string encryptedAscii(const string& text, const string& key) {
    string encryptedText;
    int keyLength = key.length();
    for (size_t i = 0; i < text.length(); i++) {
        char encryptedChar = (text[i] + key[i % keyLength]) % 126;
        if (encryptedChar <=32) {encryptedChar + 32;}
        encryptedText += encryptedChar;
    }
    return encryptedText;
}

string decryptedAscii(const string& encryptedText, const string& key) {
    string decryptedText;
    int keyLength = key.length();
    for (size_t i = 0; i < encryptedText.length(); i++) {
        char decryptedChar = (encryptedText[i] - key[i % keyLength] + 126) % 126;
        decryptedText += decryptedChar;
    }
    return decryptedText;
}




int main() {
    int choise, choise2;
    string text, key, result;

    while (choise != 3) {
        cout<<endl;
        cout<<"Pasirinkite kokiu budu norite sifruoti/desifruoti teksta (iveskite skaiciu nuo 1 iki 3):"<<endl;
        cout<<"   1. Naudojant abecele"<<endl;
        cout<<"   2. Naudojant ASCII koduote"<<endl;
        cout<<endl;
        cout<<"   3. Uzdaryti meniu"<<endl;
        cin>>choise;

        if (choise == 1) {
            cout<<"Koki veiksma norite atlikti?"<<endl;
            cout<<"1. Sifruoti teksta"<<endl;
            cout<<"2. Desifruoti teksta"<<endl;
            cout<<endl;
            cout<<"3. Grizti atgal"<<endl;
            cin>>choise2;

            if (choise2 == 1) {
                cout<<"Iveskite teksta kuri nori uzsifruoti: "<<endl;
                cin>>text;
                cout<<"Iveskite slapta rakta "<<endl;
                cin>>key;
                string encryptedText = encryptedAbc(text, key);
                cout<<"Uzsifruotas tekstas: "<<encryptedText<<endl;
            }

            else if (choise2 == 2) {
                cout<<"Iveskite teksta kuri norite desifruoti: "<<endl;
                cin>>text;
                cout<<"Iveskite slapta rakta: "<<endl;
                cin >> key;
                string decryptedText = decryptedAbc(text, key);
                cout<<"Desifruotas tekstas: "<<decryptedText<<endl;
            }
            else if (choise2 == 3) {
                return main();
            }
            else {
                cout<<"Tokio pasirinkimo nera!"<<endl;
            }
        }

        else if (choise == 2) {
            cout<<"Koki veiksma norite atlikti?"<<endl;
            cout<<"1. Sifruoti teksta"<<endl;
            cout<<"2. Desifruoti teksta"<<endl;
            cout<<endl;
            cout<<"3. Grizti argal"<<endl;
            cin>>choise2;

            if (choise2 == 1) {
                cout<<"Iveskite teksta kuri nori uzsifruoti: "<<endl;
                cin>>text;
                cout<<"Iveskite slapta rakta "<<endl;
                cin>>key;
                result = encryptedAscii(text, key);
                cout << "Uzsifruotas tekstas: " << result << endl;
            }

            else if (choise2 == 2) {
                cout<<"Iveskite teksta kuri nori desifruoti: "<<endl;
                cin>>text;
                cout<<"Iveskite slapta rakta "<<endl;
                cin>>key;
                result = decryptedAscii(text, key);
                cout << "Desifruotas tekstas: "<<result<<endl;
            }
            else if (choise2 == 3) {
                return main();
            }
            else {
                cout<<"Tokio pasirinkimo nera!"<<endl;
            }
        }
        else if (choise == 3) {
            return 0;
        }
        else {
            cout<<"Tokio pasirinkimo nera!"<<endl;
        }
    }
    return 0;
}

