/*
Actividad 1: Trabajo Práctico
Diseñar un programa modificando el ejemplo anterior que ingrese
 los datos personales correspondiente a cada alumno de su curso de primer año de informática y
 determinar que alumnos promocionaron, que alumnos regularizaron y quiénes no.
 Hacer diagrama de flujo, pseudocódigo y codificar en C++.
*/

#include <iostream>
#include <conio.h>

using namespace std;
int n;

int main()
{
    cout<<"Ingrese el numero de alumnos de clase a verificar promocion y regularizacion: ";cin>>n;

    struct alumno{
        char direccion[100];
        double ingresosMensuales;
        char nombre[45];
        int materiasAprobadas;
    } alumnos[n];


    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"Ingrese el nombre del alumno "<<i+1<<endl;
        cin.getline(alumnos[i].nombre,45);
        cout<<"Ingrese la direccion del alumno "<<i+1<<endl;
        cin.getline(alumnos[i].direccion,100);
        cout<<"Ingrese los ingresos mensuales del alumno "<<i+1<<endl;
        cin>>alumnos[i].ingresosMensuales;
        cout<<"Ingrese las materias probadas por el alumno "<<i+1<<endl;
        cin>>alumnos[i].materiasAprobadas;



        if((alumnos[i].ingresosMensuales>=425&&alumnos[i].materiasAprobadas>=6)||(alumnos[i].ingresosMensuales<425&&alumnos[i].materiasAprobadas>=6)){
            cout<<"El alumno "<<alumnos[i].nombre<<" promociona"<<endl;
        } else if((alumnos[i].ingresosMensuales>=425&&alumnos[i].materiasAprobadas==5)||(alumnos[i].ingresosMensuales<425&&alumnos[i].materiasAprobadas==5)){
            cout<<"El alumno "<<alumnos[i].nombre<<" regulariza"<<endl;
        } else{
            cout<<"El alumno "<<alumnos[i].nombre<<" no regulariza y tampoco promociona"<<endl;
        }
        cout<<'\n';
    }

    getch();
    return 0;
}
