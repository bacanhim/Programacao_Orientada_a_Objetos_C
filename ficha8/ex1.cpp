#include <iostream>
using namespace std;
main(){
    int value;
    cout<<"Introduza um valor entre 1 e 10"  ;
    cin>>value;
    if (value<1 && value>10){
        cout<<"Valor fora da escala prentendida";
    }
    system("PAUSE");
}