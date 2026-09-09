#include <stdio.h>
#include <stdlib.h>
float num, resultFat=1, i;
int main(){
    printf("Digite um número para ser calculado = ");
    scanf("%f",&num);

    for(i=1; i<=num; i++){
        resultFat= resultFat * i; 
    }
    printf("Resultado = %.0f ",resultFat);
    return 0;
}