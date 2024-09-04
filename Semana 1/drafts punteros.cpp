#include <iostream>
#include <string>

using namespace std;


int main() {
    int valor = 5;
    int *ptr = &valor;

    char letra = 'Hola';
    char *ptrL = &letra;

    double valor2 = 10;
    double *ptr2 = &valor2;

    float valor3 = 5.5;
    float *ptr3 = &valor3;

    string letra2 = "Hola";
    string *ptrL2 = &letra2;

    int *puntero = new int;


    cout << ptr << endl; // ptr es la direccion de valor
    cout << *ptr << endl; // Es valor
    cout << &ptr << endl; // &ptr es la direccion de ptr
    cout << &valor << endl; // ptr = &valor
    cout << *(&valor) << endl; // *(&valor) = valor

    cout << "-------------------------------" << endl;

    ++(*ptr);
    cout << *ptr << endl;
    cout << valor << endl;

    cout << "-------------------------------" << endl;


}