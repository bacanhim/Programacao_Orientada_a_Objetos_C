#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
main (){
    int val;
    cout<<"Introduza o carater";
    cin>>val;
    if (((val>='a')&&(val<='z'))||((val>='A') && (val<='Z'))){
        cout<<"Entrada invalida\n";
    }
    else if ((val>='0')&&(val<='9')){
        cout<<"NUMERO\n";
    }
    else {
        cout<<"SIMBOLO\n";
    }
    system("PAUSE");
}