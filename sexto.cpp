#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Diga um número inteiro não negativo\n";
    cin >> n;

    int soma=0;
    int cont=1;

    //while(cont <= n){              While
    //  soma += cont;
    //    cont++;
    //}


    //do{                            Do while
    //    soma+=cont;
    //    cont++;
    //}while(cont <= n);

    for(int i=1; i<=n; i++){
        soma+=i;
    }

    cout << "A soma dos números de 0 até " << n << " é: " << soma << endl;
    return 0;
}