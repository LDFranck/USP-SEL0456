#include <stdio.h>
#include <math.h>

#include "myfunctions.h"
#include "myfunctions2.h"

int main() {
	printf("Hello World\n");
	double f = 1.234;
	printf("f1 de %g = %g\n", f, f1(f));
	printf("f2 de %g = %g\n", f, f2(f));
	return 0;
}
