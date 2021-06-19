// crt_ldexp.c

#include <math.h>
#include <stdio.h>
#include <conio.h>

/*	Source by Microsoft
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main(void) {
	double x = 4.0, y;
	int p = 3;

	y = ldexp(x, p);
	printf("%2.1f times two to the power of %d is %2.1f\n", x, p, y);

	_getch();
	return 0;
}