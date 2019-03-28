#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;
main (){
    int i;
    int array[5];
    srand((unsigned)time(NULL));
    for (i=0;i<5;i++){
        array[i]=rand()%30;
    }
    cout<<"Os valores do array sao: \n";
    for (i=0;i<5;i++){
        cout<<array[i]<<"\n";
    }
    system("PAUSE");
}