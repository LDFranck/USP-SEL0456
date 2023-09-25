#include <stdio.h>

double offset(double x) {
	return x + 1.5;
}

double scale(double x) {
	return 3.3 * x;
}

double linear(double x) {
	return 3.3 * x  + 1.5;
}

int main(void)  {
	unsigned char i;
	double array[] = {1.1, 2.2, 3.3};
	
	for(i = 0; i < 3; i++) {
		printf("Adicionar offset em %.2f -> %.2f\n", array[i], offset(array[i]));
		printf("Mudar escala do valor %.2f -> %.2f\n", array[i], scale(array[i]));
		printf("Transformação linear de %.2f -> %.2f\n", array[i], linear(array[i]));
	}
	
	return 0;
}
