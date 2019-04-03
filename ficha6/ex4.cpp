#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
main (){
    int i;
    int array[5];
    cout<<"Vetor com 5 elementos\n";
    for (i= 0; i<=4;i++){
        cout<<"Indique o valor para o vector v["<<i<<"]: ";
        int val;
        cin>>val;
        array[i]=val;
    }
    for (i=4; i>=0; i--){
        cout<<"["<<i<<"] = "<<array[i]<<"\n";
    }
    system("PAUSE");
}