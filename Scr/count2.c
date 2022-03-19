#include "count.h"
#include "count2.h"


unsigned int ScitajPole2( unsigned char Velkost, unsigned char *Pole)
{
    unsigned int Suma = 0;
    //unsigned char * pt_Koniec = Pole + Velkost;

    printf("\nVeľkosť poľa vo funkcii: %d ", Velkost);
    do
    {
        Suma += *Pole++;
    }while(Velkost--);

    return Suma;
}
