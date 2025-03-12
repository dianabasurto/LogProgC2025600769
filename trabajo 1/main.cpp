#include <math.h>
#include <stdio.h>
  int main ()
  {
  	float res;
  	int x=3;

  	float A= 1.0/2*(float)x;
  	float B= (3+(float)x /2.0)*(2*x);
  	float C= (2+3*(float)x );

  	res= A+B/C;
    printf("res=%f",res);
  	return 0;
  }
