#include <stdio.h> 

int main()

{ 
	int Fahrenheit; 
	int Celsius; 

	printf ("Fahrenheit\tCelsius\n");

	printf ("==========\t========\n");

	for (Fahrenheit=0; Fahrenheit<=300; Fahrenheit+=10)
		{ 
			Celsius= ((Fahrenheit -32)*(5))/9; 

			printf("\t%d\t%d\n", Fahrenheit, Celsius);

		}
	
	return 0; 

}
