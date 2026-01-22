#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Podaj argumenty.");
		return 1;
	}
	double min = atof(argv[1]);
	double max = atof(argv[1]);
	for (int i=1; i < argc; i++)
	{
		if ( atof(argv[i]) < min)
			min = atof(argv[i]);
		for ( int j=1; j < argc; j++)
		{
			if (atof(argv[j]) > max)
				max = atof(argv[j]);
		}
	}

	double x = 0;
	for (int i=1; i < argc; i++)
	{
		x = atof(argv[i]);
		x = (x - min) / (max - min);
		printf("%.3lf ", x);
	}
	
	return 0;
}
