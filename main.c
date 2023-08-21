#include <stdio.h>
#include <stdlib.h>

void dec2bin(int num);

int main(){
int op;
int numero;
printf("Digite a opcao desejada:\n(1)Decimal para Binario\n(02)Decimal para Octal\n");
scanf("%d", &op);

if(op==1){
printf("Digite o numero Decimal a ser convertido em Binario: ");
scanf("%d", &numero);
dec2bin(numero);
}

if (op==2){
printf("Digite o numero Decimal a ser convertido em Binario: ");
scanf("%d", &numero);
}

    return 0;
}

void dec2bin(int num){
    int vet[50];
    int i=0, j;
    int aux = num;

    while(num > 0){
        vet[i] = num % 2;
        i++;
        num = num/2;
    }
    printf("%d em binario: ", aux);

    for(j=i-1;j>=0;j--)
        printf("%d", vet[j]);
}