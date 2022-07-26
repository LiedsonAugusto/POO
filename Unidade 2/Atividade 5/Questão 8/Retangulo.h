#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo
{
    public:
        Retangulo(double alt = 1.0, double larg = 1.0);

        void setAltura(double alt);
        void setLargura(double larg);

        double getAltura(){
        return altura;
        }

        double getLargura(){
            return largura;
        }

        double perimetroRetangulo();

        double areaRetangulo();

    private:
        double altura;
        double largura;
};

#endif