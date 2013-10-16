#include <iostream>
#include<stdio.h>
#include<math.h>
#include <cstdio>
#include <time.h>
using namespace std;

int main()
{
int n, i, max, min;
float integral=0;
int seleccion,repetir=1;
time_t tSac = time(NULL);  
struct tm* pt1 = localtime(&tSac);


 int m;
         cout<<" **Menu** ";
    cout<<"\n1. Ingresar Polinomio";
    cout<<"\n2. Informacion";
    cout<<"\n4. Salir "<<endl<<endl;
    cout<<"Elija una opcion:";
    cin>>m;
    cout<<endl;
 
switch(m)
{
case 1:
     int num;
     cout<<"1)Ingresar polinomio"<<endl;
     cout<<"2)Ingresar polinomio con intervalos"<<endl;
     cin>>num;
     if(num==1){
     cout<<"Ingresar Polinomio"<<endl<<endl;
         cout<<"Grado del polinomio: ";
         cin>>n;
         int v[n];
         for(i=0; i<=n; i++)
           {
         cout<<"Introduce el coeficiente de grado "<<i<<": ";
         cin>>v[i];
            }
         cout<<"La integral del polinomio es:";
         for(i=0; i<=n; i++)
          {
         cout<<1.0*v[i]/(i+1)<<"x^"<<i+1<<" ";
         
           }
           cout<<endl<<endl;
           }
           if(num==2){
                      cout<<"Ingresar Polinomio"<<endl<<endl;
                      cout<<"Grado del polinomio: ";
                      cin>>n;
                      int x[n];
                      for(i=0; i<=n; i++)
                      {
                               cout<<"Introduce el coeficiente de grado "<<i<<": ";
                               cin>>x[i];
                      }
         cout<<"La integral del polinomio es:";
                   for(i=0; i<=n; i++)
                   {
                            cout<<1.0*x[i]/(i+1)<<"x^"<<i+1<<" ";
                   }
           cout<<endl<<endl;
           cout<<"Entraste en ingresar intervalos"<<endl<<endl;
           cout << "Limite superior de la integral: ";
           cin>>max;
           cout<<"Limite Inferior de la integral: "<<endl;
           cin>>min;
           cout<<" y la integral de dicho polinomio entre "<<min<<" y "<<max<<" es: ";
                   for(i=min; i<=n; i++)
                   {
                              integral=integral + (1.0*x[i]/(i+1))* pow(max,i+1);
                   }
           cout<<integral<<endl;
        
         
         break;
         }
                      
           
          
         
         break;

         
case 2:
     cout<<"Informacion de los integrantes: "<<endl;
     cout<<"Fernando Guerrero Munoz"<<endl;
     cout<<"David Munoz Munoz"<<endl;
     
        cout << "\n\n\t\tHora actual = " << pt1->tm_hour << ":" << pt1->tm_min << ":"
                       << pt1->tm_sec << endl;
        cout << "\t\tFecha actual= " << pt1->tm_mday << "-" << pt1->tm_mon+1 << "-"
                       << pt1->tm_year+1900 << endl;

        cout<< "\n\n\t\tHora de compilacion: " __TIME__<<endl;
        cout<< "\n\t\tFecha de compilacion: " __DATE__<<endl;
        
     
return 0;
     break;
     case 4:cout<<"Ya esta fuera"<<endl;
     
     break;
     default: cout<<"El valor ingresado no esta en el menu"<<endl;
     
     cin.ignore(); 
     return 0;
}
}
