# Valor_impa_ou_par-Posito_ou_Negativo
código de verificação de valor se ele é impa ou par, positivo ou negativo em C++
#include <stdio.h>

int main()
{
	int num1;
    printf("Digite um valor:\n");
    scanf ("%i",&num1);
    
    if (num1 %2 ==0){
        printf("\n Valor par!");
    }else{
        printf("\n Valor Impa!");
    }
    if (num1 %2 ==0){
        printf("\n Valor Positivo!");
    }else{
        printf("\n Valor Negativo!");
    }
    
    

    return 0;
}
