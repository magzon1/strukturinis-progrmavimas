#include <iostream>
#include <string>
using namespace std;

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

string vigenereEncrypt(const string& text, const string& key) {
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

string vigenereDecrypt(const string& encryptedText, const string& key) {
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


int main() {
    int pasirinkimas;
    string text, key, option;

    while (pasirinkimas != 3){
        cout<<endl;
        cout<<"Pasirinkite kokiu budu norite sifruoti/desifruoti teksta (iveskite skaiciu nuo 1 iki 3):"<<endl;
        cout<<"   1. Naudojant abecele"<<endl;
        cout<<"   2. Naudojant ASCII koduote"<<endl;
        cout<<endl;
        cout<<"   3. Uzdaryti meniu"<<endl;
        cin>>pasirinkimas;

        if (pasirinkimas == 1) {
            cout << "Iveskite teksta kuri nori uzsifruoti: "<<endl;
            cin >> text;
            cout << "Iveskite slapta rakta "<<endl;
            cin >> key;
            string encryptedText = vigenereEncrypt(text, key);
            cout << "Uzsifruotas tekstas: " << encryptedText << endl;
        }

        else if (pasirinkimas == 2) {
            cout << "Iveskite teksta kuri norite desifruoti: "<<endl;
            cin >> text;
            cout << "Iveskite slapta rakta: "<<endl;
            cin >> key;
            string decryptedText = vigenereDecrypt(text, key);
            cout << "Desifruotas tekstas: " << decryptedText << endl;
        }
        else if (pasirinkimas == 3) {
            return 0;
        }

        else {
            cout<<"Tokio pasirinkimo nera"<<endl;
        }
    }

    return 0;
}

