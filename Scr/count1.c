// One method of counting sum of array's items 
#include "count.h"
#include "count1.h"


unsigned int ScitajPole1( unsigned char Velkost, unsigned char *Pole)
{
    unsigned int Suma = 0;
    unsigned char * pt_Koniec = Pole + Velkost;

    printf("\nVeľkosť poľa vo funkcii: %d ", Velkost);
    do
    {
        Suma += *--pt_Koniec;
    }while(pt_Koniec >= Pole);

    return Suma;
}

