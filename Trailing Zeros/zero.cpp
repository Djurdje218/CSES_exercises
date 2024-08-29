 #include <iostream>
 #include <math.h>
 
 
int main()
{
	long long n, rez = 1, nule = 0, i = 1;
    std::cin >> n;
 
    while( n >= std::pow(5,i)  )
    {
        nule += n / std::pow(5,i);
        i++;
    }
 
    std::cout << nule;
    return 0;
}