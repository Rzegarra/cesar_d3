#include <iostream>

#include "euclide.h"
using namespace std;

int euclide::mcdi(int a, int b)
{
    int temp=1,i=0;
    while(temp!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
        i++;
    }
    iteracion=i;
    cout<<"iteracion = "<<iteracion<<endl;
    return a;
}
int euclide::extendido(int a, int b)
{

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
