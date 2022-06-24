#include<stdio.h>
#include<conio.h>
int num;

main()
	{
   	printf(" Uso del Switch \n\n");
      printf("\n\n Dame un numero entre el 1 y el 3: "); scanf("%d", &num);
      switch(num)
       {
       	case 1: printf("\n El numero elegido fue el 1"); break;
         case 2: printf("\n El numero elegido fue el 2"); break;
         case 3: printf("\n El numero elegido fue el 3"); break;
         default: printf("\n El numero elegido no es valido");

        }

        printf("\n\n Autor: Irvin Adrian");

     getch();
      }
