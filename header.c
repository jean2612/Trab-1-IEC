#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include "header.h"

void convDecToBin(void){ //######################FUNCINANDO###############################


  long int num_copy;     // long int por ser um numero de 32 bits, cujo valor maior q 2^32 é estouro, representação apenas com int da extouro em 2^?
  char bin[31];
  int aux;


  //dec_real = 10;

      if(num<0){
      	printf("Valor precisa ser positivo!!!\n\n");
      	return;
  	}
      if(num>=4294967295){
      	printf("Valor maior de 32 bits!!!\n\n");
      	return;
  	}

  num_copy = num;

  for (aux = 32; aux > 0; aux--){  //percorre o vetor bin de 32 bits

        if(num_copy%2==0){       //se valor decimal mod 2 == 0 o valor da posicao do binario é 0
          bin[aux]='0';
          num_copy=num_copy/2;
        }

        else{
          bin[aux]='1';
          num_copy=num_copy/2;
        }

  }


  for(aux=1; aux<=32; aux ++){        //exibe o vetor ao contrario (digamos q devido ao processo de conversão manual  ser "recursivo")
   printf("%c", bin[aux]);
  }


}
//#############################################################################FIM FUNC DEC TO BIN#########################################

void convOctToBin(void){// CONVERSOR OK, FALTA ERRO DE USUARIO################################################3


  char numero[1000],aux[32]; //numero vai ter 11 caracteres pois no /n do enter ele conta como carcater no for, já no strlen não, dai por isso chega numero com 8 caracteres, que o maior hexa que pode ser inserido é FFFFFFFF;
  printf("Digite valor em octal: \n");
   scanf("%s", numero);
   int temp=0;

   temp=strlen(numero);
   //printf("%i\n", temp);

   if(temp<=11){
   for(int i = 0; i < numero[i] && numero[i] != '\0'; i++){

     if(numero[i] == '0'){

         strcat(aux,"000");

     }
     else if(numero[i] == '1'){

         strcat(aux,"001");

     }

     else if(numero[i] == '2'){

         strcat(aux,"010");

     }

     else if(numero[i] == '3'){

         strcat(aux,"011");

     }

     else if(numero[i] == '4'){

         strcat(aux,"100");

     }

     else if(numero[i] == '5'){

         strcat(aux,"101");

     }

     else if(numero[i] == '6'){

         strcat(aux,"110");

     }

     else if(numero[i] == '7'){

         strcat(aux,"111");

     }

     else{

       printf("Valor inserido não está em Octal, valor não alterado!!\n");
     }
   }

    puts(aux);
    num=aux;
  }

  else{
    printf("Valor maior de 32 bits!!!\n");
  }

}

//###################################################################FIM OCT TO BIN #####################################################


void convHexToBin(void) {//###########################FUNCINANDO###############################################

  char numero[1000],aux[10000]; //numero vai ter 11 caracteres pois no /n do enter ele conta como carcater no for, já no strlen não, dai por isso chega numero com 8 caracteres, que o maior hexa que pode ser inserido é FFFFFFFF;
   printf("Digite valor em Hexadecimal: \n");
   scanf("%s", numero);
   int temp=0;

   temp=strlen(numero);
   printf("%i\n", temp);

   if(temp<=8){
   for(int i = 0; i < numero[i] && numero[i] != '\0'; i++)
   {
     if(numero[i] == '0')
     {
         strcat(aux,"0000");
     }
     else if(numero[i] == '1')
     {
         strcat(aux,"0001");
     }
     else if(numero[i] == '2')
     {
         strcat(aux,"0010");
     }
     else if(numero[i] == '3')
     {
         strcat(aux,"0011");
     }
     else if(numero[i] == '4')
     {
         strcat(aux,"0100");
     }
     else if(numero[i] == '5')
     {
         strcat(aux,"0101");
     }
     else if(numero[i] == '6')
     {
         strcat(aux,"0110");
     }
     else if(numero[i] == '7')
     {
         strcat(aux,"0111");
     }
     else if(numero[i] == '8')
     {
         strcat(aux,"1000");
     }
     else if(numero[i] == '9')
     {
         strcat(aux,"1001");
     }
     else if((numero[i] == 'A')||(numero[i])=='a')
     {
         strcat(aux,"1010");
     }
     else if((numero[i] == 'B')||(numero[i])=='b')
     {
         strcat(aux,"1011");
     }
     else if((numero[i] == 'C')||(numero[i])=='c')
     {
         strcat(aux,"1100");
     }
     else if((numero[i] == 'D')||(numero[i])=='d')
     {
         strcat(aux,"1101");
     }
     else if((numero[i] == 'E')||(numero[i])=='e')
     {
         strcat(aux,"1110");
     }
     else if((numero[i] == 'F')||(numero[i])=='f')
     {
         strcat(aux,"1111");
     }
   }
    puts(aux);
    //num=aux;

        strcpy(batata, aux);
        memset(&aux, 0, sizeof(aux)); //limpa a váriavel aux;
  }

  else{
    printf("Valor maior de 32 bits!!!\n");
  }

}
//#################################################FIM DA FUNÇÃO HEX TO BIN###########################################



void convBinToHex(void){ //###########################FUNCINANDO###############################################
int ioio[32];
int piroca, maozinha,tico=0, j=0, x=0;
  printf("Digite valor em Binário: \n");
  scanf("%s", ioio);

  piroca = strlen(ioio);

  for(maozinha=31; maozinha<=0; maozinha--){
      x=pow(maozinha,2);
      tico=ioio[maozinha]*x;
      j=j+tico;

  }

printf("%d\n", j);

}
