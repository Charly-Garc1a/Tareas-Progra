#include <iostream>

using namespace std;

int main()
{
    int Programacion = 0;
    int Fisica  = 0;
    int ProcesoAdministrativo = 0;
    int DerechoInformatico = 0;
    int CalculoI = 0;

    cout << "Ingrese nota de Programacion" << endl;
    cin >> Programacion;
    switch(Programacion)
    {
    case 100:
        cout << "Exelente, el alumno es increible" << endl;
        break;

    case 80:
        cout << "Bien, el alumno esta aprobado" << endl;
        break;

    case 40:
        cout << "Necesita Mejorar, el alumno esta reprobado" << endl;
        break;

    default:
        cout << "Continuamos con los demas cursos con if, else" << endl;
        break;
    }

    cout << "Fisica" << endl;
    cout << "Ingrese nota de fisica" << endl;
    cin >> Fisica;
    if(Fisica >=62 && Fisica <=99)
    {
        cout << "Muy bien el alumno esta aprobado" << endl;
    }else if(Fisica == 100)
    {
        cout << "Exelente, el alumno es increible" <<  endl;
    }else
    {
        cout << "Necesita mejorar, el alumno esta reprobado" << endl;
    }


    cout << "Proceso Administrativo" << endl;
    cout << "Ingrese nota de Preoceso Administrativo" << endl;
    cin >> ProcesoAdministrativo;
    if(ProcesoAdministrativo >=62 && ProcesoAdministrativo <=99)
    {
        cout << "Muy bien el alumno esta aprobado" << endl;
    }else if(ProcesoAdministrativo == 100)
    {
        cout << "Exelente el alumno es increible" << endl;
    }else
    {
        cout << "Necesita mejorar, el alumno esta reprobado" << endl;
    }


    cout << "Derecho Informatico" << endl;
    cout << "Ingrese nota de Derecho Informatico " << endl;
    cin >> DerechoInformatico;
    if(DerechoInformatico >=62 && DerechoInformatico <=99 )
    {
        cout << "Muy bien el alumno esta aprobado" << endl;
    }else if(DerechoInformatico == 100)
    {
        cout << "Exelente, el alumno es increible" << endl;
    }else
    {
        cout << "Necesita mejorar, el alumno esta reprobado" << endl;
    }

    cout << "CalculoI" << endl;
    cout << "Ingrese nota de CalculoI" << endl;
    cin >> CalculoI;
    if(CalculoI >=62 && CalculoI <=99)
    {
        cout << "Muy bien el alumno esta aprobado" << endl;
    }else if(CalculoI == 100)
    {
        cout << "Exelente, el alumno es increible" << endl;
    }else
    {
        cout << "Necesita mejorar, el alumno esta reprobado" << endl;
    }
    return 0;







}
