#include <iostream>
#include <math.h>

int main()
{
	long int t, y, x, rez = 0;

	std::cin >> t;

	long z1, z2;

 	for(size_t i = 0; i < t; i++)
 	{
 		std::cin >> y >> x;
 		z1 = y * y - ( y - 1 );
 		z2 = x * x - ( x - 1 );

 		if( y == x )
 		{
 			rez = z1;
 		}
 		else if( y > x )
 		{ 
 			if( y % 2 ) rez = z1 - ( y - x );
 			else 		rez = z1 + ( y - x );
 		}
 		else
 		{
 			if ( x % 2 ) rez = z2 + ( x - y );
 			else		 rez = z2 - ( x - y );
 		}
 		std::cout << rez << std::endl;
 	}




 	return 0;
}