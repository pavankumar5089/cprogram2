#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string s;

    std::getline( std::cin, s );

    std::string::size_type max_size;
    std::string max_word;
    std::string word;

    std::istringstream is( s );
    max_size = 0;
    while ( is >> word )
    {
        if ( max_size < word.size() ) 
        { 
            max_size = word.size();
            max_word = word;
        }           
        else if ( max_size == word.size() ) 
        { 
            max_word += "; ";
            max_word += word;
        }            
    }

    std::cout << max_size << ' ' << max_word << std::endl;    
}
