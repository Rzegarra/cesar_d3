#ifndef EUCLIDE_H
#define EUCLIDE_H
#include <vector>

class euclide
{
    public:
        int inversa;
        int opuesto; //numero q multiplica al mayor para q se cumpla mod=1
        int *vacio=new int;
        int mcd;
        int ext;
        euclide(int a, int b);
        virtual ~euclide();
        void extendido();
        int A;
        int B;
    private:
        int iteracion;
        int mcdi(int a , int b);

};

#endif // EUCLIDE_H
