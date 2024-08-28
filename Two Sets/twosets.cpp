#include <iostream>
#include <vector>


int main()
{
	long int n, sum = 0, sum1 = 0;

	std::cin >> n;
    for(size_t i = 1; i < n + 1; i++) sum += i;
    if( sum % 2 != 0 )
    {
    std::cout << "NO" << std::endl;
    return 0;
    }
    else   
    std::cout << "YES" << std::endl;

    long int sumpola = sum/2;

    std::vector<long> v1, v2;

    for (size_t i = n; i > 0; i--)
    {
        if( sum1 + i  <= sumpola )
        {
            v1.push_back(i);
            sum1 += i;
        }
        else
        {
            v2.push_back(i);
        }

    }

    std::cout << v1.size() << std::endl;
    for(size_t i : v1 ) 
    {
        std::cout << i << " " ;
    }
    std::cout << std::endl;



    std::cout << v2.size() << std::endl;
    for(size_t i : v2 ) 
    {
        std::cout << i << " "; 
    }
    std::cout << std::endl;

	return 0;

} 
