/*calculadora para git owo*/
#include <stdio.h>
void main()
{
	float fLado, fArea;
	printf("\nCalculadora para un cuadrado");
	printf("\nMedida de lado:");
		scanf_s("%f", &fLado);
		fArea = fLado * fLado;
		printf("\nEl area del cuadrado es :%f",fArea);
}