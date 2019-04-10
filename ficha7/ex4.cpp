#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
main(){
    int v [7] ={1,2,3,4,5,6,7};
    int *p = v;
    int i;
    cout << *p++ <<"\n";
    cout << *(p+2) <<"\n";
    cout << * ++p <<"\n";
    cout << * (p+4) <<"\n";
    *p++;
    cout << *  (p-3)<<"\n";
    *p++;

    for (i =-4; i<2;i++){
        cout<<*(p+i)<<",";   
    }
    cout << *(p+i) <<".";
        system("PAUSE");
}