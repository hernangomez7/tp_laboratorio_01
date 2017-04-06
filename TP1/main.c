#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s',opcion;
    int num[2]={0},resultado[5];
    //fin de variables
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        printf("valor op. A= %d \n",num[0]);
        printf("valor op. B= %d \n",num[1]);

       opcion=getch();

        switch(opcion)
        {
            case '1':
                printf("ingrese el operador A\n");
                scanf("%d",&num[0]);
                while(num[0]==0)
                {
                    printf("el operador A no puede ser 0\n");
                    scanf("%d",&num[0]);
                }
                fflush(stdin);
                system("cls");
                break;
            case '2':
                printf("ingrese el operador B\n");
                scanf("%d",&num[1]);
                while(num[1]==0)
                {
                    printf("el operador B no puede ser 0\n");
                    scanf("%d",&num[1]);
                }
                fflush(stdin);
                system("cls");
                break;
            case '3'://suma
                if(!(valcero(num[0])==0 || valcero(num[1])==0))
                {
                    resultado[0]=sumar(num[0],num[1]);
                    fflush(stdin);
                    system("cls");
                    printf("el resultado de la suma es = %d \n\n\n",resultado[0]);
                }else
                {
                    system("cls");
                    printf("ninguno de los valores puede ser cero!\n");
                }
                break;
            case '4'://resta
                if(!(valcero(num[0])==0 || valcero(num[1])==0))
                {
                    resultado[1]=resta(num[0],num[1]);
                    fflush(stdin);
                    system("cls");
                    printf("el resultado de la resta es = %d \n\n\n",resultado[1]);
                }else
                {
                    system("cls");
                    printf("ninguno de los valores puede ser cero!\n");
                }
                break;
            case '5'://division
                if(!(valcero(num[0])==0 || valcero(num[1])==0))
                {
                    resultado[2]=division(num[0],num[1]);
                    fflush(stdin);
                    system("cls");
                    printf("el resultado de la division es = %d \n\n\n",resultado[2]);
                }else
                {
                    system("cls");
                    printf("ninguno de los valores puede ser cero!\n");
                }
                break;
            case '6'://multiplicacion
                if(!(valcero(num[0])==0 || valcero(num[1])==0))
                {
                    resultado[3]=multiplicacion(num[0],num[1]);
                    fflush(stdin);
                    system("cls");
                    printf("el resultado de la multiplicacion es = %d \n\n\n",resultado[3]);
                }else
                {
                    system("cls");
                    printf("ninguno de los valores puede ser cero!\n");
                }
                break;
            case '7'://fatorial
                if(!(valcero(num[0])==0))
                {
                    resultado[4]=factorial(num[0]);
                    fflush(stdin);
                    system("cls");
                    printf("el resultado de la factorial es = %d \n\n\n",resultado[4]);
                }else
                {
                    system("cls");
                    printf("valor A no puede ser cero!\n");
                }
                break;
            case '8'://hacer todo
                if(!(valcero(num[0])==0 || valcero(num[1])==0))
                {
                    resultado[0]=sumar(num[0],num[1]);
                    resultado[1]=resta(num[0],num[1]);
                    resultado[2]=division(num[0],num[1]);
                    resultado[3]=multiplicacion(num[0],num[1]);
                    resultado[4]=factorial(num[0]);
                    fflush(stdin);
                    system("cls");
                    printf("el resultado de la suma es = %d \n",resultado[0]);
                    printf("el resultado de la resta es = %d \n",resultado[1]);
                    printf("el resultado de la division es = %d \n",resultado[2]);
                    printf("el resultado de la multiplicacion es = %d \n",resultado[3]);
                    printf("el resultado de la factorial es = %d \n\n\n",resultado[4]);
                }else
                {
                    system("cls");
                    printf("ninguno de los valores puede ser cero!\n");
                }
                break;
            case '9':
                seguir = 'n';
                break;
        }
    }
    return 0;
}
