#include <stdio.h>
#include <stdlib.h>

void dec2bin(int num);
void dec2oct(int num);

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
printf("Digite o numero Decimal a ser convertido em Octal: ");
scanf("%d", &numero);
dec2oct(numero);
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

void dec2oct(int num){
    int i = 1,a; //i inicializado a 1
    int octal = 0; //octal inicializado a 0
    int aux = num;

    if(num<=7) {
        octal=num;
    }
    else {
        while(num>=8) {
            a=num%8;
            num=num/8;
            octal = octal + a * i; //calculo do octal
            i *= 10; //aumento do fator de base 10
        }
        num=num%8;
        octal = octal + num * i; //mesmo calculo aqui
    }

 printf("O Decimal %d em Octal eh: %d", aux, octal);

}