#include "count.h"
#include "count1.h"
#include "count2.h"
#include "count3.h"

unsigned char Pole[] = {1,2,3,4,5,6,7,8,9,10};

int main()
{
    unsigned char i;
    unsigned char Velkost = sizeof(Pole);
    printf("Prvky poľa: \t");
    for(i= 0; i < Velkost; i++)
    {
        printf("%d, ", *(Pole+i));
    }

    printf(" \nSuma prvkov poľa f-cia ScitajPole1: %d\n", ScitajPole1(Velkost, Pole));
    printf(" \nSuma prvkov poľa f-cia ScitajPole2: %d\n", ScitajPole2(Velkost, Pole));
    printf(" \nSuma prvkov poľa f-cia ScitajPole3: %d\n", ScitajPole3(Velkost, Pole));
    printf(" \n  Veľkosť poľa v main funkcii: %d\n", Velkost);
    return 0;
}
