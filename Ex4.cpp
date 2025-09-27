#include <iostream>

using namespace std;

int soma_recursiva(int a, int b){
    int resultado;

    if(b == 0){
        resultado = a;
    }
    else{
        resultado = soma_recursiva(a+1,b-1);
    }
    return resultado;
}

int multiplicacao(int a, int b){
    int resultado;

    if(a == 0){
        resultado = 0;
    }
    else{
        resultado = soma_recursiva(b,multiplicacao(a-1,b));
    }
    return resultado;
}

int main(){
    int num1, num2, resultado;

    cout << "Digite os numeros naturais que voce deseja multiplicar: ";
    cin >> num1 >> num2;

    if(num1 < 0 || num2 < 0){
        cout << "A funçao funciona apenas com numeros positivos." << endl;
        return 1;
    }

    resultado = multiplicacao(num1,num2);

    cout << num1 << " * " << num2 << " = " << resultado << endl;

    return 0;
}