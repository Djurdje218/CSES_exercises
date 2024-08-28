#include <iostream>
#include <math.h>
int main ()
{
	long int k,  rez = 0;
	std::cin >> k;

	for(size_t i = 1 ; i < k+1; i++)
	{
		rez = ( std::pow(i,4) - std::pow(i,2) )/2 - 4 * ( i - 2 ) * ( i - 1); 
		
		std::cout << rez << std::endl;

	}

	return 0;
}

