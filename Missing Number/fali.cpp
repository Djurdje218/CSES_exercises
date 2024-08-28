#include <iostream>

#define ll long long
int main()
{
	ll n, s = 0;

	std::cin >> n;

	for( int i = 1; i < n; i++ )
	{
		int a;
		std::cin >> a;
		s = s + a;
	}

	std::cout << n *(n + 1 )/2-s ;

return 0;
} 
