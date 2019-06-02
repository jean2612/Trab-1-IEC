//ConversorBases
/*Precisa:

    dec->bin OK
    dec->oct
    dec->hex
      bin->oct
      bin->dec
      bin->hex
        oct->bin
        oct->dec
        oct->hex
          hex->bin
          hex->oct
          hex->dec
*/

//------------------------------------------------------------------------------- Bibliotecas
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>

//#include <locale.h>
//------------------------------------------------------------------------------- Váriaveis Globais
int base=10;
long int num= 00000000000000000000000000000000;

//------------------------------------------------------------------------------- Declaração das Funções

void convDecToBin(void);
void convOctToBin(void);
void convHexToBin(void);




//------------------------------------------------------------------------------- Main
int main(){

    //setlocale(LC_ALL, "Portuguese");

    char op;


  do {
printf("(Estado atual) Base: %i\tNúmero: %li\n", base, num);
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
    //  printf("Digite Valor: \n");
      //scanf("%li", &num);
      convHexToBin();
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



//------------------------------------------------------------------------------- Escolpo das Funções

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



void convHexToBin(void) {

  char numero[11],aux[32]; //numero vai ter 11 caracteres pois no /n do enter ele conta como carcater no for, já no strlen não, dai por isso chega numero com 8 caracteres, que o maior hexa que pode ser inserido é FFFFFFFF;
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
  }

  else{
    printf("Valor maior de 32 bits!!!\n");
  }


}
