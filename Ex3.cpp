#include <iostream>

using namespace std;

void soma(int num1, int num2){
    if(num2 == 0){
        cout << num1;
    }
    else{
        cout << 1 << " + ";
        soma(num1,num2-1);
    }
}

int main(){

    int num1, num2;

    cout << "Digite dois numeros naturais que voce deseja somar:";
    cin >> num1 >> num2;
    
    cout << endl;
    
    cout << num1 << " + " << num2 << " = ";
    soma(num1,num2);
    cout << " = " << num1+num2;

    return 0;
}