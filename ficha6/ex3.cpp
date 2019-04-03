#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
main (){
    int value = 3;
    char passwordint[4];
    while (value>0){
        cout<<"Introduza a password";
        cin>>passwordint;
        if (strcmp(passwordint, "pdw")){
            cout<<"Pass Errada\n";
            cout<<"Pista - p";
            value-=1;
        }
        else {
            cout<<"Pass correta";
            value=0;
        }
    }
    
}