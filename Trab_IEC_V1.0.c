/*Projeto Integrador 1: Conversor de bases numéricas. Construção de um programa de conversão entre bases numéricas (binária, octal, decimal e hexadecimal).
O programa deverá realizar a conversão de números inteiros fornecidos pelo usuário, em qualquer uma das bases definidas,
para todas as demais bases citadas. Algumas restrições quanto ao programa poderão ser definidas pelo professor em um documento específico,
contudo, uma restrição é que o tamanho dos números, em binário, que o
conversor deve manipular será de, no mínimo, 32 bits.*/

#include<stdio.h>
#include<string.h>

void binario(void);
void octal(void);
void decimal(void);
void hexadecimal(void);

int main(){
int op = 123;
do{

printf("[1] Binário;\n");
printf("[2] Octal;\n");
printf("[3] Decimal;\n");
printf("[4] Hexadecimal;\n");
printf("[0] Sair.\n");
printf("Escolha a base de entrada: \n");
scanf("%i", &op);


switch (op) {

  case 1:
  printf("1\n");
  break;

  case 2:
  printf("2\n");
  break;

  case 3:
  decimal();
  break;

  case 4:
  printf("4\n");
  break;

  case 0:
  printf("Saindo!!!\n");
  break;

  default: printf("Opção Inválida!!\n");

}

}while(op!=0);


  return 0;
}


void decimal(void){
long int dec_real, dec;     // long int por ser um numero de 32 bits, cujo valor maior q 2^32 é estouro, representação apenas com int da extouro em 2^?
char bin[31];
int aux;

  printf("Digite o valor em decimal para ser convertido para as demais bases: \n");
    scanf("%li", &dec_real);

dec = dec_real;

for (aux = 32; aux > 0; aux--){  //percorre o vetor bin de 32 bits

      if(dec%2==0){       //se valor decimal mod 2 == 0 o valor da posicao do binario é 0
        bin[aux]='0';
        dec=dec/2;
      }

      else{
        bin[aux]='1';
        dec=dec/2;
      }

}


for(aux=1; aux<=32; aux ++){        //exibe o vetor ao contrario (digamos q devido ao processo de conversão manual  ser "recursivo")
 printf("%c", bin[aux]);
}

printf("\n\n\n");


//ate aqui faz de decimal para binario

//agora de decimal para hexadecimal

dec = dec_real;


for (aux = 32; aux > 0; aux--){  //percorre o vetor bin de 32 bits

      if(dec%16==0){       //se valor decimal mod 2 == 0 o valor da posicao do binario é 0
        bin[aux]='0';
        dec=dec/16;
      }

      else if(dec%16==1){
        bin[aux]='1';
        dec=dec/16;
      }

      else if(dec%16==2){
        bin[aux]='2';
        dec=dec/16;
      }

      else if(dec%16==3){
        bin[aux]='3';
        dec=dec/16;
      }

      else if(dec%16==4){
        bin[aux]='4';
        dec=dec/16;
      }

      else if(dec%16==5){
        bin[aux]='5';
        dec=dec/16;
      }

      else if(dec%16==6){
        bin[aux]='6';
        dec=dec/16;
      }

      else if(dec%16==7){
        bin[aux]='7';
        dec=dec/16;
      }

      else if(dec%16==8){
        bin[aux]='8';
        dec=dec/16;
      }
      else if(dec%16==9){
        bin[aux]='9';
        dec=dec/16;
      }

      else if(dec%16==10){
        bin[aux]='A';
        dec=dec/16;
      }

      else if(dec%16==11){
        bin[aux]='B';
        dec=dec/16;
      }

      else if(dec%16==12){
        bin[aux]='C';
        dec=dec/16;
      }

      else if(dec%16==13){
        bin[aux]='D';
        dec=dec/16;
      }

      else if(dec%16==14){
        bin[aux]='E';
        dec=dec/16;
      }

      else{
        bin[aux]='E';
        dec=dec/16;
      }

}


for(aux=1; aux<=32; aux ++){        //exibe o vetor ao contrario (digamos q devido ao processo de conversão manual  ser "recursivo")
 printf("%c", bin[aux]);
}

printf("\n");











}
