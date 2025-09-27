#include <iostream>

using namespace std;

double somaSerie(int N){
    double resultado;
    if(N == 1){
        resultado = 1.0;
    }
    else if(N <= 0.0){
        resultado = 0.0;
    }
    else{
        resultado = (1.0 / N) + somaSerie(N-1);
    }
    return resultado;
}

int main(){
    int N;
    double resultado_final;

    cout << "Digite um numero" << endl;
    cin >> N;
    
    if(N > 0){
        resultado_final = somaSerie(N);
        cout << "Resultado = " << resultado_final << endl;
    }
    else{
        cout << "O numero precisa ser positivo." << endl;
    }
   
    return 0;
}