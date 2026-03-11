#include <stdio.h>

int main (){
int qtd_notas;
float nota1,nota2,nota3,nota_final;

    printf("professora,digite a quantidade de notas a ser calculada ");
    scanf("%d",&qtd_notas);

    printf("digite a nota 1 ");
    scanf("%f",&nota1);

    printf("digite a nota 2 ");
    scanf("%f",&nota2);

    printf("digite a nota 3 ");
    scanf("%f",&nota3);

    nota_final=(nota1+nota2+nota3)/qtd_notas;

    printf("A nota final do aluno é : %f ", nota_final);


return 0;

}