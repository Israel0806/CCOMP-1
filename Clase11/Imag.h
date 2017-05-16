#ifndef IMAG_H
#define IMAG_H


class Imag
{
private:
    double real,imag;
public:
    Imag();
    Imag(double, double);
    void igual(Imag);
    Imag suma(Imag);
    Imag p_escalar(int);
    Imag multiplicacion(Imag);
    Imag resta(Imag);
};

#endif // IMAG_H
