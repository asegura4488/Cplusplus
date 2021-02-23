#include<iostream>
#include <stdio.h>


int main ()

{

char variable='0';

 printf("ingresa  letras o número\n");
 scanf("%c",&variable);
 printf("el codigo asociado es %d\n",variable);

 if(variable<=57 && variable>=48) //variable esta en el rango de digitos
   printf("ingresaste un digito \n");
 else if(variable<=90 && variable >=65) //variable esta en el rando de letra mayúscula

   printf("INGRESASTE  LETRAS MAYUSCULA\n");

 else if(variable<=122 && variable >=97)
printf("ingresaste  letras  minuscula\n");


 else


printf("ingresaste otra cosa, que no es ni letra ni numero\n");

}
