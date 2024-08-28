#include <iostream>
#include <math.h>

#define ll long long
int main()
{
	ll n, ans = 0;
	ll x1, x2;

	std::cin >> n;
	std::cin >> x1;
	
	while( n-- > 1 )
	{	
		std::cin >> x2;
		if( x2 < x1)
		{
		ans = ans + (x1 - x2);
		} else {
			x1 = x2;
		}	
	}

	std::cout << ans;

return 0;
} 
 
