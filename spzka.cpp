/*
Autor: Patrik Ronèinský, 1.N
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int cisla[3];
    char pismena[2];
    int i,j;
    
    srand(time(NULL));
    printf("MI ");
    for(i=0;i<3;i++)
    
    {
    cisla[i]=rand()%9;
	printf("%d",cisla[i]);	
	}
	
	printf(" ");
	for(i=0;i<2;i++)
	
    {
    pismena[i]=rand()%26+65;
	printf("%c",pismena[i]);	
	}
}
