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

