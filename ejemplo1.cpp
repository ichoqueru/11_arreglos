#include<iostream>
using namespace std;

int main(){
    int m, i, A[20], max, min;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> m;

    while(m <= 0 || m > 20){
        cout << "El numero debe ser mayor que 0 y menor o igual a 20" << endl;
        cout << "Ingrese otro numero: ";
        cin >> m;
    }

    for (i = 0; i < m; i++){
        cout << "Ingrese un numero: ";
        cin >> A[i];
    }

    max = A[0];
    min = A[0];

    for(i = 1; i < m; i++){
        if(A[i] > max){
            max = A[i];
        }
        if(A[i] < min){
            min = A[i];
        }
    }

    cout << "El numero mayor es: " << max << endl;
    cout << "El numero menor es: " << min << endl;

    return 0;
}
