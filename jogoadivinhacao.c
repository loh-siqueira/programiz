// Online C compiler to run C program online
#include <stdio.h>
int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n"); 
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");
    
     int numerosecreto =28;
    //armazenar chute
     int chute;
        printf("Qual é o seu chute: \n ");
        scanf("%d" ,&chute);
        printf("seu chute foi %d \n, chute:");
      
     if(chute == numerosecreto){
         printf("Você acertou! \n");
     }else{
         printf(" Você errou! \n");
         return 0;
    }
    }