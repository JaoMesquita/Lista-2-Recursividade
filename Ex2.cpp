#include <iostream>

using namespace std;

void multiplicacao(int num1, int num2){
    if(num1 == 0 || num2 == 0){
        cout << 0;
    }
    
    if(num1 == 1 ){
        cout << num2;
    }
    else{
        cout << num2 << " + ";
        multiplicacao(num1-1,num2);
    }
}

int main(){
    int num1, num2;

    cout << "Digite dois numeros naturais que você deseja multiplicar: " << endl;
    cin >> num1 >> num2;
    
    cout << num1 << " * " << num2 << " = "; 
    multiplicacao(num1,num2);
    cout << " = " << num1*num2;
    return 0;
}