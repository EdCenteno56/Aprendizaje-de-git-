#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

/*  Carlos Centeno
    Universidad Centroamericana (UCA)
    11 de abril del año 2022 */

/*Realizar 2 funciones para convertir grados celsius a Fahrenheit
y biceversa siguiendo las siguientes formulas:
X = grados celsius
(X ºC x 9/5) + 32
Y = grados fahrenheit
(Y ºF-32)/1.8
Realizar un menu para elejir el tipo de conversion y salir ingresando 0 en el menu*/

float celsius (float x);
float fah(float y);

int main()
{
    float resultado;
    int eleccion;
    cout << "\t\t Coversor de Celsius y Fahrenheit\n\n";
    cout << "1. Celsius a Fahrenheit\n";
    cout << "2. Fahrenheit a Celsius\n";
    cout << "3. Para salir\n";
    cin >> eleccion;
    
    switch (eleccion)
    {
    case 1:
        float celsiusV;
        
        cout << "\t\t Conversor de Celsius a Fahrenheit\n\n";
        cout << "Introduzca los grados en Celsius: \n";
        cin >> celsiusV;
        resultado = celsius(celsiusV);
        cout << "\n\n La conversion seria de: " << resultado;
        break;
    
    case 2:
        float fahV;
        
        cout << "\t\t Conversor de Fahrenheit a Celsius\n\n";
        cout << "Introduzca los grados en Fahrenheit: \n";
        cin >> fahV;
        resultado = fah(fahV);
        cout << "\n\n La conversion seria de: " << resultado;
        break;

    case 3:


    break;

    default:

        cout << "Por favor introduzca un valor válido";

        break;
    }
    return 0;
}
