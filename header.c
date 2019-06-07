#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include "header.h"

void convDecToBin(void){ //######################FUNCINANDO###############################

  if(base==10){
    printf("Digite valor em Decimal: \n");
    scanf("%s", num);
  }
  char i[50];     // long int por ser um numero de 32 bits, cujo valor maior q 2^32 é estouro, representação apenas com int da extouro em 2^?
  long int num_copy=0;
  char bin[31];
  int aux;

int a=0;
a = strlen(num);
  //dec_real = 10;

      if(num<0){
      	printf("Valor precisa ser positivo!!!\n\n");
      	return;
  	}

    if(a>32){

    //}
    //  else if(num>=4294967295){
      	printf("Valor maior de 32 bits!!!\n\n");
      //	return;

  	}
strcpy(i, num);
  //num_copy = num;
  num_copy=atoi(i);

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

//memset(&num, 0, sizeof(num));
 for(aux=1; aux<=32; aux ++){        //exibe o vetor ao contrario (digamos q devido ao processo de conversão manual  ser "recursivo")
   //printf("%c", bin[aux]);
   num[aux-1]=bin[aux];
 }
  ///strcpy(num, bin);

}
//#############################################################################FIM FUNC DEC TO BIN#########################################

void convOctToBin(void){// CONVERSOR OK, FALTA ERRO DE USUARIO################################################3

  if(base==8){
      printf("Dgite valor em Octal: ");
        scanf("%s", num);

  }

  char aux[10000]; //numero vai ter 11 caracteres pois no /n do enter ele conta como carcater no for, já no strlen não, dai por isso chega numero com 8 caracteres, que o maior hexa que pode ser inserido é FFFFFFFF;
   int temp=0;

   temp=strlen(num);
   //printf("%i\n", temp);

   if(temp<=11){
   for(int i = 0; i < num[i] && num[i] != '\0'; i++){

     if(num[i] == '0'){

         strcat(aux,"000");

     }
     else if(num[i] == '1'){

         strcat(aux,"001");

     }

     else if(num[i] == '2'){

         strcat(aux,"010");

     }

     else if(num[i] == '3'){

         strcat(aux,"011");

     }

     else if(num[i] == '4'){

         strcat(aux,"100");

     }

     else if(num[i] == '5'){

         strcat(aux,"101");

     }

     else if(num[i] == '6'){

         strcat(aux,"110");

     }

     else if(num[i] == '7'){

         strcat(aux,"111");

     }

     else{

       printf("Valor inserido não está em Octal, valor não alterado!!\n");
     }
   }

    //puts(aux);
    strcpy(num, aux);
    memset(&aux, 0, sizeof(aux)); //limpa a váriavel aux;
  //  num= atoi(aux);
  }

  else{
    printf("Valor maior de 32 bits!!!\n");
  }

}

//###################################################################FIM OCT TO BIN #####################################################


void convHexToBin(void) {//###########################FUNCINANDO###############################################

  char numero[1000],aux[10000]; //numero vai ter 11 caracteres pois no /n do enter ele conta como carcater no for, já no strlen não, dai por isso chega numero com 8 caracteres, que o maior hexa que pode ser inserido é FFFFFFFF;

  if(base==16){
      printf("Dgite valor em Hexadecimal: ");
        scanf("%s", numero);

  }
   int temp=0;

   temp=strlen(numero);
  // printf("%i\n", temp);

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
    //puts(aux);
    //num=aux;

        strcpy(num, aux);
        memset(&aux, 0, sizeof(aux)); //limpa a váriavel aux;
  }

  else{
    printf("Valor maior de 32 bits!!!\n");
  }

}
//#################################################FIM DA FUNÇÃO HEX TO BIN###########################################



void convBinToDec(void){ //###########################FUNCINANDO###############################################
int tam, j=0;
long int aux=0;


  tam = strlen(num);
if(tam<=32){


  for (j = tam-1; j >= 0; j--) {
		//printf("%c|", numero[i]);
		if (num[j] == '1') {
			aux = aux + pow(2,tam-1-j);
		}
	}
	printf("%li\n", aux);
}
else{
  printf("Valor maior que 32 bits!!!\nValor não alterado!\n");
}

}


void ConvDecToHex(void){

  int tam, j=0, i=0;
  long int aux=0;


    tam = strlen(num);
  if(tam<=32){


    for (j = tam-1; j >= 0; j--) {
      //printf("%c|", numero[i]);
      if (num[j] == '1') {
        aux = aux + pow(2,tam-1-j);
      }
    }
  }
  else{
    printf("Valor maior que 32 bits!!!\nValor não alterado!\n");
  }
  //long int dec;     // long int por ser um numero de 32 bits, cujo valor maior q 2^32 é estouro, representação apenas com int da extouro em 2^?
  char bin[31];


  for (i = 32; i > 0; i--){  //percorre o vetor bin de 32 bits

        if(aux%16==0){       //se valor decimal mod 2 == 0 o valor da posicao do binario é 0
          bin[i]='0';
          aux=aux/16;
        }

        else if(aux%16==1){
          bin[i]='1';
          aux=aux/16;
        }

        else if(aux%16==2){
          bin[i]='2';
          aux=aux/16;
        }

        else if(aux%16==3){
          bin[i]='3';
          aux=aux/16;
        }

        else if(aux%16==4){
          bin[i]='4';
          aux=aux/16;
        }

        else if(aux%16==5){
          bin[i]='5';
          aux=aux/16;
        }

        else if(aux%16==6){
          bin[i]='6';
          aux=aux/16;
        }

        else if(aux%16==7){
          bin[i]='7';
          aux=aux/16;
        }

        else if(aux%16==8){
          bin[i]='8';
          aux=aux/16;
        }
        else if(aux%16==9){
          bin[i]='9';
          aux=aux/16;
        }

        else if(aux%16==10){
          bin[i]='A';
          aux=aux/16;
        }

        else if(aux%16==11){
          bin[i]='B';
          aux=aux/16;
        }

        else if(aux%16==12){
          bin[i]='C';
          aux=aux/16;
        }

        else if(aux%16==13){
          bin[i]='D';
          aux=aux/16;
        }

        else if(aux%16==14){
          bin[i]='E';
          aux=aux/16;
        }

        else{
          bin[i]='F';
          aux=aux/16;
        }

  }


  for(i=25; i<=32; i ++){        //exibe o vetor ao contrario (digamos q devido ao processo de conversão manual  ser "recursivo")
   printf("%c", bin[i]);
  }
printf("\n");

}

void ConvDecToOct(void){

  int tam, j=0;
  long int aux=0;


    tam = strlen(num);
  if(tam<=32){


    for (j = tam-1; j >= 0; j--) {
  		//printf("%c|", numero[i]);
  		if (num[j] == '1') {
  			aux = aux + pow(2,tam-1-j);
  		}
  	}
  }
  else{
    printf("Valor maior que 32 bits!!!\nValor não alterado!\n");
  }

  long int octalNumber = 0;
  long int i = 1;

     while (aux != 0){

         octalNumber = octalNumber + (aux % 8) * i;
         aux = aux/8;
         i = i * 10;
     }

  printf("%li\n", octalNumber);

}


void About(void){
  printf("Projeto Integrador 1 - Conversor de Bases.\n");
  printf("Disciplina de Introdução à Engenharia de Computação\n");
  printf("Discentes: Daniel de Souza Sanches e Jean Lucas Cimirro\n");
  printf("Professor: C. M. Betemps\n");
  printf("UNIPAMPA Bagé-RS 2019/1\n");
  printf("Construção de um programa de conversão entre bases numéricas (binária, octal, decimal e hexadecimal). O programa realiza a conversão de números inteiros fornecidos pelo usuário, em qualquer uma das bases definidas, para todas as demais bases citadas.\n");
}
