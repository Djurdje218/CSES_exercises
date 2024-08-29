 #include <iostream>

int main()
{
	long t, a, b, min;
    std::cin >> t;
    while( t-- )
    {
        std::cin >> a >> b;

        

        if( !( a + b ) )
        {
            std::cout << "YES";
            goto kraj;
        }

        if( ( a + b ) % 3 || !a || !b ) 
        {   
            std::cout << "NO";
        }
        else
        {
            if( a == b )
            {   
                std::cout << "YES";
                goto kraj;
            }
            if( a > b ) 
            {  
                min = a / 2; 

                if(  b >= min )
                std::cout << "YES";
                else
                std::cout << "NO";
            }
            else   
           {   
                min = b / 2;

                if( a >= min )
                std::cout << "YES";
                else
                std::cout << "NO";
           } 
        }
        kraj:
        std::cout << std::endl;
    }  

    return 0;
};