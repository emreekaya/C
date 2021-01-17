#include <stdio.h> 
#include <stdlib.h> // srand,rand
#include <time.h>   // time

int main(void)
{
    int N;                              // Number of simulations 
    int i;                                // Loop counter
    int Coin;                         // Random number (1 or 2)
    int heads = 0, tails = 0;   // Counters for heads and tails

    printf("Kac kere yazi-tura simulasyonu yapilacak ? ");
    scanf("%d", &N);

    srand(time(NULL));  // Seed random number generator


    for (i = 1; i <= N; i++) {

        Coin = 1 + (rand()%2); // Random sayý oluþtur.


        if (Coin == 1) {
            printf("* TURA *\n\n");
            heads++;

        } else {
            printf(" YAZI \n\n");
            tails++;
        }
    }

    printf("Tura sayisi: %d   Yuzdesi: %.f \n", heads, 100.0 * heads / N);
    printf("Yazi sayisi: %d   Yuzdesi: %.f \n", tails, 100.0 * tails / N);

    printf("\n\n");
    system("pause");
    return 0;
}
