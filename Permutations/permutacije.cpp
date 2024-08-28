#include <iostream>
#include <math.h>

int main()
{
	int n;

	std::cin >> n;

	if( n == 1 )
	{
		std::cout << 1;
		return 0;
	}

	if( n == 2 || n == 3 )
	{
		std::cout << "NO SOLUTION";
		return 0;
	}
	
		for(size_t i = 2; i < n+1; i += 2)
			std::cout << i << " ";
		for(size_t i = 1; i < n; i += 2)
			std::cout << i << " ";
		
		if( n % 2 != 0) std::cout << n;
	

		return 0;
} 