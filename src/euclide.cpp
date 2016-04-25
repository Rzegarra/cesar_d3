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
        cout<<vacio[i];
        i++;
    }
    iteracion=i;

    cout<<"iteracion = "<<iteracion<<endl;
    return a;
}
void euclide::extendido()
{
    int aux=1;
    for(int i =iteracion-3;i>=0;i--)
    {
        cout<<vacio[i]<<endl;
        vacio[i]=vacio[i+1]*vacio[i]+aux;
        aux=vacio[i+1];
        cout<<vacio[i]<<endl;
    }
}
euclide::euclide(int a , int b)
{   int temp;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    mcd=mcdi(a,b);
}

euclide::~euclide()
{
    //dtor
}
