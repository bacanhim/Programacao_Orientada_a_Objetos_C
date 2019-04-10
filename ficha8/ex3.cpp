#include <iostream>
using namespace std;
main(){
    char val;
    cout<<"Introduza o carater: ";
    cin>>val;
    if ((val>='a')&&(val<='z')){
        cout<<"LETRA MINUSCULA\n";
    }
    if((val>='A') && (val<='Z')){
        cout<<"LETRA MINUSCULA\n";
    }
    system("PAUSE");
}