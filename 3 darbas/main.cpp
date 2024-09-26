#include <iostream>
using namespace std;

void funk1() {
    string vardas = "Maksim";
    cout<<"Vardas - "<<vardas<<endl;
    cout<<"Pasirinkau programu sistemos studiju programa, nes patinka dirbti su kompiuteriais"<<endl;
}

void funk2() {
    string txt = "Vilniaus kolegija";
    cout<<txt<<endl;
}

void funk3() {
    string txt = "Elektronikos ir informatikos fakultetas";
    cout<<txt<<endl;
}

void funk4() {
    cout<<rand()<<endl;
}

void funk5() {
    int sk;
    int skait1;
    int skait2;
    int skait3;
    cout<<"Iveskite dvizenkli skaiciu:"<<endl;
    cin >> sk;
    skait1 = sk/10;
    skait2 = sk % 10;
    skait3 = skait1 + skait2;
    cout<<"Skaitmenu suma lygi: "<<skait3<<endl;
}

void funk6() {
    int sk;
    int skait1;
    int skait2;
    int skait3;
    cout<<"Iveskite dvizenkli skaiciu:"<<endl;
    cin >> sk;
    skait1 = sk/10;
    skait2 = sk % 10;
    skait3 = skait1 - skait2;
    cout<<"Skaitmenu skirtumas lygi: "<<skait3<<endl;
}

void funk7() {
    int sk;
    int skait1;
    int skait2;
    int skait3;
    cout<<"Iveskite dvizenkli skaiciu:"<<endl;
    cin >> sk;
    skait1 = sk/10;
    skait2 = sk % 10;
    skait3 = skait1 * skait2;
    cout<<"Skaitmenu sandauga lygi: "<<skait3<<endl;
}

void funk8() {
    int sk;
    float skait1;
    float skait2;
    float skait3;
    cout<<"Iveskite dvizenkli skaiciu:"<<endl;
    cin >> sk;
    skait1 = sk/10;
    skait2 = sk % 10;
    skait3 = skait1 / skait2;
    cout<<"Skaitmenu dalyba lygi: "<<skait3<<endl;
}


int main(){
    funk1();
    funk1();
    cout<<"---------------------------------"<<endl;
    funk2();
    funk3();
    cout<<"---------------------------------"<<endl;

   for(int i=0; i<=10; i++) {
       cout<<rand()<<endl;
   }
    cout<<"---------------------------------"<<endl;
    funk5();
    cout<<"---------------------------------"<<endl;
    funk6();
    cout<<"---------------------------------"<<endl;
    funk7();
    cout<<"---------------------------------"<<endl;
    funk8();

    return 0;
}
