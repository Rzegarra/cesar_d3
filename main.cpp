#include <iostream>
#include "euclide.h"
#include <vector>
using namespace std;

int main()

{
    euclide o(65,27);
    o.extendido();
    cout <<endl << "este es mcd ="<<o.mcd << endl;

    return 0;
}
