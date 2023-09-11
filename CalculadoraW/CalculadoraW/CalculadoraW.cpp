/*calculadora para git owo*/
#include <stdio.h>
void main()
{
	float fBase, fAltura, fArea;
	printf("\nCalculadora para un Rectangulo");
	printf("\nInserte medida de la base");
	printf("\nBase:");
		scanf_s("%f", &fBase);
		printf("\nInserte medida de la altura\nAltura:");
		scanf_s("%f", &fAltura);
		fArea = fBase * fAltura;
		printf("\nEl area del Rectangulo es :%f",fArea);
}