#ifndef CONFIGURACION_H
#define CONFIGURACION_H

#include <iostream>
class Configuracion
{
    public:
        static std::string RUTA_ARCHIVO;
        static unsigned int NUMERO_ENTRADAS; //= 38;
        static int NUMERO_NEURONAS;// = 1600;
        static int RANGO_VECINDAD;// = 4;
        static int NUMERO_DATOS;// = 62385;
        /**el largo puede ser cualquier pero el ancho tiene que ser par(para que la estructura hexagonal pueda unirse en sus limites)
        como un balon de futbol con caras hexagonales*/
        static int ANCHO;// = 40;
        static int LARGO;// = 40;
        //tasa de aprendizaje
        static double ALFA;// = 0.5;
        //decrecimiento de la tasa de aprendizaje
        static double BETA;// = 0.005;

        //peso en la dimension objetivo
        static double PESO_DIMENSION_OBJ;

        //numero maximo iteraciones
        static int NUMERO_LIMITE_ITERACIONES;
        //tasa de olvido logaritmico
        static bool OLVIDO_LOGARITMICO;
        //numeros de hilos
        static int NUMERO_HILOS;
    public:
        Configuracion();
        virtual ~Configuracion();



    protected:

    private:
};

#endif // CONFIGURACION_H
