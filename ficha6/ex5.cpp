#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
main (){
    char val;
    cout<<"Introduza o carater";
    cin>>val;
    if (((val>='a')&&(val<='z'))||((val>='A') && (val<='Z'))){
        cout<<"LETRA\n";
    }
    else if ((val>='0')&&(val<='9')){
        cout<<"NUMERO\n";
    }
    else {
        cout<<"SIMBOLO\n";
    }
    system("PAUSE");
}