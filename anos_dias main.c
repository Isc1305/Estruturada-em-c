#include <stdio.h>

int main (){
int anos, dias ;

printf("Sera mostrado quantidade de dias baseado na sua idade\n ");
printf("digite quantos anos voce tem ");
scanf ("%d", &anos);

dias= (anos*365);

printf ("a quantidade de dias equivalente é: %d", dias);

return 0;

}