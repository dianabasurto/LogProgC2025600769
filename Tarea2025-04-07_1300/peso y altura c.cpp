#include<stdio.h>
#include<math.h>
int main (){
 int peso;
 int altura;
 int IMC;
 printf("cual es tu peso?");
 scanf("%d",& peso);
 printf("cual es tu altura?");
 scanf("%d",& altura);
  IMC=peso/(altura^2);
  if (IMC<=18.4){
  printf("usted esta bajo de peso");
  } else if (IMC<=24.9){
      printf("usted esta normal de peso");
  } else if (IMC<=29.9){
      printf("usted tiene sobrepeso");
  } else if (IMC<=34.9){
      printf("usted tiene obesidad clase 1");
  } else if (IMC<=39.9){
      printf("usted tiene obesidad clase 2");
  } else if (IMC==40.0){
       printf("usted tiene obesidad clase 3");
       }
       return 0;
}
