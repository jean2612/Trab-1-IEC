#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include "header.h"

//ConversorBases
/*Precisa:

    dec->bin OK
    dec->oct
    dec->hex
      bin->oct
      bin->dec
      bin->hex
        oct->bin OK, Falta erro de usuario.
        oct->dec
        oct->hex
          hex->bin OK
          hex->oct
          hex->dec
*/


int main(){

  base=10;
  num= 00000000000000000000000000000000;

  for(int i=0; i<32; i++){
    batata[i]='0';
  }
    //setlocale(LC_ALL, "Portuguese");

    char op;


  do {
//printf("(Estado atual) Base: %i\tNúmero: %li\n", base, num);
printf("(Estado atual) Base: %i\tNúmero: ", base);
puts(batata);
printf("\n");
printf("Menu:\n");
    printf("\tE) Definir base do número de (E)ntrada (default: 10 - decimal);\n");
    printf("\tN) Inserir (N)úmero para conversão (default: 0);\n");
    printf("\tB) Mostrar valor na base 2 - (B)inária;\n");
    printf("\tO) Mostrar valor na base 8 - (O)ctal;\n");
    printf("\tD) Mostrar valor na base 10 - (D)ecimal;\n");
    printf("\tH) Mostrar valor na base 16 - (H)exadecimal;\n");
    printf("\tT) Mostrar valor em (T)odas as bases;\n");
    printf("\tC) Sobre o (C)onversor;\n");
    printf("\tS) (S)air do conversor.\n\n");
    printf("Alternativa? \n");
    scanf("%s", &op);
    system("clear");
    op = toupper(op); //converte qdo usuario coloca letra minuscula pra maiuscula.
switch(op){

      case 'E':
      printf("Definir nova base de Entrada: [2]Binário, [8]Octal, [10]Decimal, [16]Hexadecimal.\n");

      int aux;


      scanf("%i", &aux);

      if((aux==2)||(aux==8)||(aux==10)||(aux==16)){
        base=aux;

      }

      else{
        printf("Base Inválida!\n");
      }

      break;

      case 'N':
      printf("Inserir (N)úmero para conversão\n");
    //printf("Digite Valor: \n");
      //scanf("%li", &num);
      if(base==2){
        convBinToHex();
        //so muda valor do num para novo num;
      }

      else if(base==8){
        convOctToBin();
      }

      else if(base==10){
        convDecToBin();
      }

      else if(base==16){
        convHexToBin();
      }

      break;

      case 'B':
      printf("Mostrar valor na base 2 - (B)inári\n");
      break;

      case 'O':
      printf("Mostrar valor na base 8 - (O)ctal\n");
      break;

      case 'D':
      printf("Mostrar valor na base 10 - (D)ecimal\n");
      break;

      case 'H':
      printf("Mostrar valor na base 16 - (H)exadecimal\n");
      break;

      case 'T':
      printf("Mostrar valor em (T)odas as bases;\n");
      break;

      case 'C':
      printf("Sobre o (C)onversor\n");
      break;

      case 'S':
      printf("Saindo!!!\n");
      break;

      default:
      printf("Opção Inválida\n");
      break;
    }


      }while (op!='S');
  //}while((op!='s') && (op!='S'));

return 0;
}
