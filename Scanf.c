#include <stdio.h>
int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];

    // sintaxe scanf
    // scanf ("formato1", "formato2", &variavel1, variavel2,...);

    printf("Digite a sua idade:  ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite sua altura:");
    scanf("%f", &altura);
    printf("Sua altura é: %f\n", altura);

    printf ("Digite seu nome:");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

}