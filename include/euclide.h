#ifndef EUCLIDE_H
#define EUCLIDE_H
#include <vector>

class euclide
{
    public:
        int inversa;
        int *vacio=new int;
        int mcd;
        int ext;
        euclide(int a, int b);
        virtual ~euclide();
        void extendido();
    private:
        int iteracion;
        int mcdi(int a , int b);

};


#endif // EUCLIDE_H
