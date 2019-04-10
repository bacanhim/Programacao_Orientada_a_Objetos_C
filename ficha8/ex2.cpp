#include <iostream>
using namespace std;
main(){
    int value [3];
    int i;
    for (i=0; i<3;i++){
        cout<<"Introduza tres numeros diferentes";
        cin>>value[i];
    }
    if(value[0]>value[1]&& value[0]>value[2]){
        cout<<"O "<<value[0]<<" e maior que "<<value[1]<<" e "<<value[2];
    }
    if(value[1]>value[0]&& value[1]>value[2]){
        cout<<"O "<<value[1]<<" e maior que "<<value[0]<<" e "<<value[2];
    }
    if(value[2]>value[1]&& value[2]>value[0]){
        cout<<"O "<<value[2]<<" e maior que "<<value[1]<<" e "<<value[0];
    }
    system("PAUSE");
}