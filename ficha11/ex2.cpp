#include <iostream>
using namespace std;
main() {
    class aluno {
        private: float notas;
        public: 
        char nome[40]; 
        int numero; 
        void muda_nota(float v){notas = v;}
        void nota() {cout< "A nota e : " <<notas << '\n'};
    };
    void nota_aluno(aluno *a){
        a->nota();
        a->muda_nota(9.5);
        a->nota();
    }
    main(){
        aluno a1, *p; p=%a1;
        a1.muda_nota(9.35);
        nota_aluno(p);
        cout<<"Agora sim";
    }
}