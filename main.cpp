#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
double Sumar(double,double);
double Restar(double,double);
double Multiplicar(double,double);
double Dividir(double,double);


int main()
{

    cout << "------------------ Calculadora C++ ----------------" << endl;
    cout << "--------------REALIZADO POR CHARLY GARCIA ------------------" << endl;

    double val1;
    cout << "Introduce el primer valor: ";
    cin >> val1;
    double val2;
    cout << "Introduce el segundo valor: ";
    cin >> val2;
    cout << "---------------------------------" << endl;
    int operador;
    cout << "Sumar (1), Restar (2), Multiplicar (3) o Dividir (4)?: ";
    cin >> operador;

    switch(operador)
    {
        case 1:
            cout << "\n";
            cout << ">>>>>--- " << Sumar(val1,val2) << " ---<<<<<" << endl;
            cout << "\n";
        break;
        case 2:
            cout << "\n";
            cout << ">>>>>--- " << Restar(val1,val2) << " ---<<<<<" << endl;
            cout << "\n";
        break;
        case 3:
            cout << "\n";
            cout << ">>>>>--- " << Multiplicar(val1,val2) << " ---<<<<<" << endl;
            cout << "\n";
        break;
        case 4:
            cout << "\n";
            cout << ">>>>>--- " << Dividir(val1,val2) << " ---<<<<<" << endl;
            cout << "\n";
        break;
    }

    system("pause");
    return 0;
}


double Sumar(double x,double y)
{
    return x + y;
}


double Restar(double x,double y)
{
    return x - y;
}


double Multiplicar(double x,double y)
{
    return x * y;
}


double Dividir(double x,double y)
{
    return x / y;
}
