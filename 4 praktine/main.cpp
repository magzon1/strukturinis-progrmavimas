#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

struct menuItemType {
    string menuItem;
    double menuPrice;
};

const int MENU_SIZE = 8;

void getData(menuItemType menuList[]);
void showMenu(const menuItemType menuList[]);
void printCheck(const menuItemType menuList[], int orderQuantities[]);

int main() {
    menuItemType menuList[MENU_SIZE];
    int orderQuantities[MENU_SIZE] = {0};

    getData(menuList);

    cout << "Sveiki atvyke i restorana Studentu uzeigele!\n";
    cout<<endl;
    showMenu(menuList);

    int choice = -1;
    while (true) {
        cout << "\nPasirinkite patiekalo numeri (0 uzbaigti uzsakyma): ";
        cin >> choice;

        if (choice == 0) {
            break;
        } else if (choice > 0 && choice <= MENU_SIZE) {
            cout << "Iveskite pasirinkto patiekalo porciju skaiciu: ";
            int quantity;
            cin >> quantity;

            if (quantity > 0) {
                orderQuantities[choice - 1] += quantity;
            } else {
                cout << "Neteisingas kiekis. Bandykite dar karta.\n";
            }
        } else {
            cout << "Neteisingas pasirinkimas. Bandykite dar karta.\n";
        }
    }

    printCheck(menuList, orderQuantities);

    return 0;
}

void getData(menuItemType menuList[]) {
    menuList[0] = {"Kiausiniene", 1.45};
    menuList[1] = {"Kiaulienos sonine su keptu kiausiniu", 2.45};
    menuList[2] = {"Keksiukas su vysnia", 0.99};
    menuList[3] = {"Prancuziskas skrebutis", 1.99};
    menuList[4] = {"Vaisiu salotos", 2.49};
    menuList[5] = {"Pusryciu dribsniai", 0.69};
    menuList[6] = {"Kava", 0.50};
    menuList[7] = {"Arbata", 0.75};
}

void showMenu(const menuItemType menuList[]) {
    cout << left << setw(5) << "Nr." << setw(40) << "Patiekalas" << "Kaina" << endl;
    cout << "-----------------------------------------------------\n";
    for (int i = 0; i < MENU_SIZE; i++) {
        cout << left << setw(5) << (i + 1) << setw(40) << menuList[i].menuItem
             << fixed << setprecision(2) << menuList[i].menuPrice << " Eur." << endl;
    }
}

void printCheck(const menuItemType menuList[], int orderQuantities[]) {
    double subtotal = 0.0;

    ofstream receiptFile("saskaita.txt");

    if (!receiptFile) {
        cerr << "Klaida kuriant faila saskaita.txt" << endl;
        return;
    }
    cout<<endl;
    cout << "Kiek norite palikti arbatpinigiu? (Jei nenorite - iveskite 0)"<<endl;
    double tips;
    cin >> tips;
    cout << "\nJusu saskaita:\n";
    receiptFile << "Saskaita:\n";

    for (int i = 0; i < MENU_SIZE; i++) {
        if (orderQuantities[i] > 0) {
            double itemTotal = orderQuantities[i] * menuList[i].menuPrice;
            subtotal += itemTotal;

            cout << left << setw(40) << menuList[i].menuItem
                 << orderQuantities[i] << "x   "
                 << fixed << setprecision(2) << menuList[i].menuPrice << " Eur."
                 << " = " << fixed << setprecision(2) << itemTotal << " Eur." << endl;

            receiptFile << left << setw(40) << menuList[i].menuItem
                        << orderQuantities[i] << "x   "
                        << fixed << setprecision(2) << menuList[i].menuPrice << " Eur."
                        << " = " << fixed << setprecision(2) << itemTotal << " Eur." << endl;
        }
    }

    double tax = subtotal * 0.21;
    double total = subtotal + tax + tips;

    cout << "\nMokesciai: " << fixed << setprecision(2) << tax << " Eur." << endl;
    cout << "Arbatpinigiai: " << fixed << setprecision(2) << tips << " Eur." << endl;
    cout << "Galutine suma: " << fixed << setprecision(2) << total << " Eur." << endl;

    receiptFile << "\nMokesciai: " << fixed << setprecision(2) << tax << " Eur." << endl;
    receiptFile << "Galutine suma: " << fixed << setprecision(2) << total << " Eur." << endl;

    receiptFile.close();
}

