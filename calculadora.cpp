#include <iostream>
#include <cmath>
using namespace std;

// Función para calcular el factorial de un número entero
long long factorial(int num1) {
    if (num1 < 0) {
        return -1;
    }
    long long resultado = 1;
    for (int i = 1; i <= num1; i++) {
        resultado *= i;
    }
    return resultado;
}

double sumar(double num1, double num2){
    return num1 + num2;
}
double restar(double num1, double num2) {
    return num1 - num2;
}

double multiplicar (double num1, double num2) {
    return num1 * num2;
}
double dividir(double num1, double num2 ) {
    return num1 / num2;
}
double raiz_cuadrada(double num1) {
    return (num1 >= 0) ? sqrt(num1) : NAN;
}
double potencia(double base, double exp) {
    return pow(base, exp);
}
int main () {
    double num1, num2;
    char operacion;

    cout << "Bienvenido a la calculadora cientifica"<< endl;
    cout <<"Por favor ingrese el primer numero: "<<endl ;
    cin >> num1;
    cout << "Ingrese la operacion que desee realizar (+, -, *, /, !, ^, r)"<< endl;
    cin >> operacion;
    if (operacion =='!') {
        cout << "El resultado es: "<< factorial(static_cast<int>(num1)) << endl;
    }
    if (operacion =='r') {
        cout << "Por favor ingrese el segundo numero: "<< endl;
        cin >> num2;
    }
    switch (operacion) {
        case '+':
            cout << "el resultado es: "<<sumar(num1, num2) << endl;
        break;
        case '-':
            cout << "el resultado es: "<<restar(num1, num2) << endl;
        break;
        case '*':
            cout << "el resultado es: "<<multiplicar(num1, num2) << endl;
        break;
        case '/':
            if (num2 == 0) {
                cout << "Error: No se puede dividir entre 0" << endl;
            } else {
                cout << "el resultado es: "<<dividir(num1, num2) << endl;
            }
        break;
        case '^':
            cout << "el resultado es: "<<potencia(num1, num2) << endl;
        break;
        case 'r':
            cout <<"el resultado es: "<<raiz_cuadrada(num1) << endl;
        case '!':
            cout << "El resultado es: "<<factorial(num1) << endl;
        default:
            cout << "Operacion no valida" << endl;
        break;
    }
    return 0;
}








