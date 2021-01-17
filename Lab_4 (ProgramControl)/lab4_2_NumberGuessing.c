// Number Guessing Game
#include <stdio.h>
#include <time.h>

int main()
{
  int tutulan_sayi, tahmin_sayi;
  int sayac;
  
  srand(time(NULL));
  tutulan_sayi = rand()%100 + 1;

  for (sayac=1; sayac <= 5; sayac++)
  {
    printf("Enter your guess: ");
    scanf("%d", &tahmin_sayi);

    if (tahmin_sayi == tutulan_sayi) 
	{
       printf("Congratulations, you won. \n");
       return 0;
    }
    else
       if (tahmin_sayi < tutulan_sayi)
          printf("Guess is too low. \n\n");
      else 
          printf("Guess is too high. \n\n");
  }

  printf("Computer won. The number was %d \n", tutulan_sayi);
}

