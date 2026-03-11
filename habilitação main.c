#include <stdio.h>

int main(){
    int idade;
    int liberado_habilitacao = 1;

    printf("Adicione sua idade para saber se voce pode tirar a habilitacao ");
    scanf ("%d",&idade);

    if (idade>=18 && liberado_habilitacao)
    {
        printf("pode tirar habilitacao ");
    }
    else {
        printf("nao pode ! ");

    }


return 0;    


}