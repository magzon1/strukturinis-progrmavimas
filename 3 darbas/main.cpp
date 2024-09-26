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
    int skaitmuo1;
    cout<<"Iveskite dvizenkli skaiciu:"<<endl;
    cin >> sk;
    skaitmuo1 = sk/10;
    cout<<skaitmuo1<<endl;

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



    return 0;
}
