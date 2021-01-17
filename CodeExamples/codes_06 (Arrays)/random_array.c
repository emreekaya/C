// 6 elemanli kume kumesinden rastgele sayi secer						

#include <stdio.h>
#include <time.h>

int main()
{
    int kume[] = {-7, 3, 1, 9, 13, 27};
    
    srand(time(NULL));
    
    int rastgele = rand() % 6;
    
    printf ("rastgele sayi: %d\n", kume[rastgele]); 
    
    return 0; 
}

