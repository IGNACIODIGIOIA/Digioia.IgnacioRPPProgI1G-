/*
 ============================================================================
 Name        : asdasdasdasd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;
}ePais;
int aux_getString(char* pResultado, int longitud);
int ordenarCaracteres(char* pResultado, int longitud);

int main(void) {
	setbuf(stdout,NULL);

	return EXIT_SUCCESS;
}

/*void actualizarRecuperados (ePais*, int RecuperadosDelDia)
{

}*/

int aux_getString(char* pResultado, int longitud)
        {
            char invertida[100];
            int retorno = -1;
            int i = 0;
            for (int j = sizeof(pResultado) - 1; j >= 0; j--)
            {
                invertida[i] = pResultado[j];
                i++;
            }

             strncpy(pResultado, invertida, longitud);
               retorno = 0;

            return retorno;
        }

int ordenarCaracteres(char* pResultado, int longitud)
        {
            int retorno = -1;
            char ordenada[100];
            char temp;
            strcpy(ordenada, pResultado, longitud);

            int i, j;
            int n = longitud;

            for (i = 0; i < n - 1; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (ordenada[i] > ordenada[j])
                    {
                        temp = ordenada[i];
                        ordenada[i] = ordenada[j];
                        ordenada[j] = temp;
                    }
                }
            }
            strcpy(pResultado,ordenada, longitud);
            retorno = 0;
            return retorno;
        }
