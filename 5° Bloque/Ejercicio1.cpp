/*
    Escribe un programa que defina un vector de numeros y calcule la suma de sus elementos
*/

#include <iostream>
#include <conio.h>
using namespace std;
 
int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int suma = 0;

    for(int i = 0; i < 5; i += 1)
        suma += numeros[i];

    cout << "La suma es " << suma << endl;

    getch();
    return 0;
}