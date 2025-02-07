#include <iostream>
#include<locale.h>
using namespace std;

void Promedio(int nota[],int n,int &may){
int total=0,prom;
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
        may++;
    }
}

}

int main()
{setlocale(LC_ALL,"spanish");
int nota[50];
int n,may=0;
    cout<<"¿Cantidad de alumnos?"<<endl;
    cin>>n;
    Promedio(nota,n,may);
    cout<<"La cantidad de estudiantes aprobados es "<<may<<endl;
    return 0;
}
