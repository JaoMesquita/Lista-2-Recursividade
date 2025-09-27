#include <iostream>

using namespace std;

void transformaBinario(int num){

    if(num != 0){
        transformaBinario(num/2);
        if(num % 2 == 1){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
}

int main(){
    int num;

    cout << "Digite o numero decimal que você deseja transformar em binario: " << endl;
    cin >> num;

    if(num == 0){
        cout << 0;
    }
    else{
        transformaBinario(num);
    }

    cout << endl;
    
    return 0;
}