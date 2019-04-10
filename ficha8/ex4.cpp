#include <iostream>
using namespace std;
main(){
    int val;
    cout<<"Introduza o numero: ";
    cin>>val;
    switch (val)
    {
        case 0:{
            cout<<"ZERO\n";
            break;
        }
        case 1:{
            cout<<"UM\n";
            break;
        }
        case 2: {
            cout<<"DOIS\n";
            break;
        }
        case 3: {
            cout<<"TRES\n";
            break;
        }
        default:
            cout<<"O numero introduzido nao se encontra na escala de 0 a 3 \n";
            break;
    }
    system("PAUSE");
}