#include <math.h>
#include "x_values2.h"
#include <vector>

double x_value(double a, double b, double c) {

	double x1 = (-b + sqrt(pow(2,b) - 4*a*c))/(2*a);
	double x2 = (-b - sqrt(pow(2,b) - 4*a*c))/(2*a);
	std::vector <double> x_values;
	x_values.push_back(x1);
	x_values.push_back(x2);
	int i;
	for (i=0; i<2; i++)
		{
			return x_values[i];
		}

	}