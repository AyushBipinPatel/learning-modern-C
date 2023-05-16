/*Exs1 Add the if (i) condition to the program, and compare the output to the previous. */

#include <stdlib.h>                                    
#include <stdio.h>                                     

/* The main thing that this program does. */           
int main(void) {                                       
  // Declarations
  double A[5] = {                                      
    [0] = 9.0,                                         
    [1] = 2.9,
    [4] = 3.E+25,                                      
    [3] = .00007,                                      
  };

  // Doing some work                                   
  for (size_t i = 0; i < 5; ++i) {                     

     if (i)
     {
        printf("element %zu is %g, \tits square is %g\n", 
            i,
            A[i],
            A[i]*A[i]);
     }
                                     
  }                                                    

  return EXIT_SUCCESS;                                 
}   