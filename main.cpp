#include <iostream>
#include "euclide.h"
#include <vector>
using namespace std;

int main()

{
    euclide o(65,27);
    cout <<endl << "este es mcd ="<<o.mcd << endl;
    cout<< endl << "su inversa es ="<<o.inversa<<endl;
    cout << o.A<<" mod( "<<o.B<<" )";
    return 0;
}
