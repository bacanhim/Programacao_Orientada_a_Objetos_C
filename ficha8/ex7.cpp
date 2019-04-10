#include <iostream>
using namespace std;
main(){
    int value1,value2;
    cout<<"Introduza o primeiro valor: ";
    cin>>value1;
    cout<<"Introduza o segundo valor: ";
    cin>>value2;
    if (value1>value2){
        for (int i=value2;i<=value1; i++){
            cout<<i;
        }
    }
    if (value1<value2){
        for (int i=value2;i>=value1; i--){
            cout<<i;
    }
    }
    system("PAUSE");
}