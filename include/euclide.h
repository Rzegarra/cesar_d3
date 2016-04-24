#ifndef EUCLIDE_H
#define EUCLIDE_H


class euclide
{
    public:
        int mcd;
        int ext;
        euclide(int a, int b);
        virtual ~euclide();
    private:
        int iteracion;
        int mcdi(int a , int b);
        int extendido(int a , int b);
};


#endif // EUCLIDE_H
