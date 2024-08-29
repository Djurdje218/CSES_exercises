 #include <iostream>


int main()
{
	long n, rez = 1;
    long mod = 1000000007;
	std::cin >> n;
	
    for( long i = 0; i < n ;i++)
    rez = rez * 2 % mod;
    std::cout << rez;

	return 0;
} 

