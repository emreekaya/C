#include <stdio.h>
#include <time.h>

int main()
{
   time_t  TarihSaat;   
   // Declare variable as time_t data type
   // time_t is equivalent to long number

    // Capture the current date and time as a long number
    time(&TarihSaat);
 
    // Convert the long number to a string definition and print it
    printf ("%s", ctime(&TarihSaat) );
   // Sun Oct 11 15:53:34 2015

  return 0;
}
