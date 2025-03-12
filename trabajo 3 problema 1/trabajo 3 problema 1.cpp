#include<stdio.h>
#include<math.h>
 int main ()
 {
 	float l, at, pt;
 	//asignacion de valores;
 	l=7;
 	at=((pow(l,2))*(1+0.3927+0.32));
 	pt=((3.5)*(3.1416)+2*7+18.2);

 	printf("el area total es %f\n",at);
 	printf("el perimetro total es %f\n",pt);
 	return 0;

 	}
