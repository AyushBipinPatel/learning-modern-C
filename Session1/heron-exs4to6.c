#include <stdlib.h>
#include <stdio.h>

/* lower and upper iteration limits centered around 1.0 */
static double const eps1m01 = 1.0 - 0x1P-01;
static double const eps1p01 = 1.0 + 0x1P-01;
static double const eps1m24 = 1.0 - 0x1P-24;
static double const eps1p24 = 1.0 + 0x1P-24;

int main(int argc, char* argv[argc+1]) {
  double test = 2;
  printf("test value %.5e \n", test);
  printf("the value of eps1m01 is %10.e \n",eps1m01);
  printf("the value of eps1p01 is %10.e \n",eps1p01);
  printf("the value of eps1m24 is %10.e \n",eps1m24);
  printf("the value of eps1p24 is %10.e \n",eps1p24);

  printf("the value of argc is %10.d \n",argc);
  
  for (int i = 1; i < argc; ++i) {        // process args
    double const a = strtod(argv[i], 0);  // arg -> double
    double x = 1.0;
    printf("x after declaring and initializing is %.5e",x);
    for (;;) {                    // by powers of 2
      double prod = a*x;
      if (prod < eps1m01) {
        x *= 2.0;
        printf("x in first loop if condition is %.5e",x);
      } else if   (eps1p01 < prod) {
        x *= 0.5;
        printf("x in first loop elseif condition is %.5e",x);
      } else {
        break;
      }
    }
    for (;;) {                    // Heron approximation
      double prod = a*x;
      if ((prod < eps1m24) || (eps1p24 < prod)) {
        x *= (2.0 - prod);
        printf("x in second loop if condition is %.5e",x);
      } else {
        break;
      }
    }
    printf("heron: a=%.5e,\tx=%.5e,\ta*x=%.12f\n",
           a, x, a*x);
  }
  return EXIT_SUCCESS;
}