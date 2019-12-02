#include <iostream>


int main()
{
	double V, m, h, E, P, g;

	g = 9, 8;
	V = 10, m = 5, h = 10;
	// Формула для знаходженяя:

	E = m * pow(V, 2) / 2;
	P = m * g * h;
	printf("E = %lf\n", E);
	printf("P = %lf\n", P);

	system("pause");

	return 0;

}
