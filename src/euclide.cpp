#include <iostream>

#include "euclide.h"
using namespace std;

int euclide::mcdi(int a, int b)
{
    int temp=1,i=0;
    while(temp>0)
    {
        temp=a%b;
        vacio[i]=a/b;
        a=b;
        b=temp;
//        cout<<vacio[i];
        i++;
    }
    iteracion=i-1;
//    cout<<"iteracion = "<<iteracion<<endl;
    return a;
}
void euclide::extendido()
{
    int aux=1;
    for(int i =iteracion-2;i>=0;i--)
    {
        vacio[i]=vacio[i+1]*vacio[i]+aux;
        aux=vacio[i+1];
    }
    if (iteracion%2!=0)
    {
        vacio[0]=vacio[0]*-1;
    }
    inversa=vacio[0];
    opuesto=vacio[1];
    delete []vacio;
}
euclide::euclide(int a , int b)
{   int temp;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;

    }
    A=a;
    B=b;
    mcd=mcdi(a,b);

    extendido();
}
euclide::~euclide()
{
    //dtor
}
