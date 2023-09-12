/*calculadora para git owo*/
#include <stdio.h>
void main()
{
	float fRadio, fPi, fArea;
	fPi=3.1416;
	printf("\nCalculadora para Area de un circulo");
	printf("\nInserte medida del radio");
	printf("\nRadio:");
		scanf_s("%f", &fRadio);
		fArea = fRadio*fRadio*fPi;
		printf("\nEl area del Circulo es :%f",fArea);
}