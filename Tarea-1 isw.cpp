#include <iostream>
#include<stdio.h>
#include<math.h>
#include <cstdio>
using namespace std;

int main()
{
int n, i, max, min;
float integral=0;
int seleccion,repetir=1;
 int m;
         cout<<" **Menu** ";
    cout<<"\n1. Ingresar Polinomio";
    //cout<<"\n2. Ingresar intervalos de la integral";
    cout<<"\n3. Graficar";
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
           system("pause");
         
         break;
         }
                      
           system("pause");
          
         
         break;

         
case 3:
     cout<<"Entraste en Graficar: "<<endl;
     break;
     case 4:cout<<"Ya esta fuera"<<endl;
     system("pause");
     break;
     default: cout<<"El valor ingresado no esta en el menu"<<endl;
     system("pause");
     cin.ignore(); 
     return 0;
}
} 






