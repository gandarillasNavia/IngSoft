#include <iostream>
#include<locale.h>
using namespace std;

int Promedio(int nota[],int n){
    int total=0,prom,aprobados ;
    cout<<"Ingrese las notas"<<endl;
    for(int i=1;i<=n;i++){
        cout<<"Estudiante ["<<i<<"] = ";
        cin>>nota[i];
        total=total+nota[i];
    }
    prom=total/n;
    cout<<"El promedio es "<<prom<<endl;
    for(int i=1;i<=n;i++){
         if(nota[i]>prom)
         {
            aprobados++;
         }
    }
    return aprobados;
}

int main()
{setlocale(LC_ALL,"spanish");
int nota[50];
int n,aprobadosT=0;
    cout<<"¿Cantidad de alumnos?"<<endl;
    cin>>n;
    aprobadosT = Promedio(nota,n);
    cout<<"El numero de estudiantes aprobados es "<<aprobadosT<<endl;
    return 0;
}
