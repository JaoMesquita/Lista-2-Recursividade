#include <iostream>

using namespace std;

double somaSerie(int N){
    double resultado;
    if(N == 1){
        resultado = 0.5;
    }
    else if(N <= 0){
        resultado = 0.0;
    }
    else{
        resultado = somaSerie(N-1) + (double)((N*N)+1)/(N+3);
    }
    return resultado;
}

int main(){
    int N;
    double resultado_final;

    cout << "Digite um numero inteiro positivo: " << endl;
    cin >> N;
    
    if(N > 0){
        resultado_final = somaSerie(N);
        cout << "Resultado = " << resultado_final << endl;
    }
    else{
        cout << "O numero precisa ser positivo" << endl;
    }
    
    return 0;
}