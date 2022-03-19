#include "count.h"
#include "count3.h"


unsigned int ScitajPole3( unsigned char Velkost, unsigned char *Pole)
{
    unsigned int Suma = 0;

    printf("\nVeľkosť poľa vo funkcii: %d ", Velkost);
    for(uint32_t i= 0; i < Velkost; i++)
    {
        Suma += Pole[i];
    }

    return Suma;
}
