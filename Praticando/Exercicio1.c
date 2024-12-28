#include <stdio.h>

int main (){
    int numero; //i
    float numero2; //f
    char nome[100]; //c 

    //print faz com que apareça na tela mensagens
    // String é vários caracteres juntos 
    // char é apenas um caracter 
    printf ("Olá Mundo\n"); 
    printf ("Meu primeiro exercício de programação, concluido com sucesso\n");

    printf ("Digite seu nome: ");
    scanf("%s", &nome);


    printf ("Bem vindo ao Sistema, %s", nome);
    return 0;
}