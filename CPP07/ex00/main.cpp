#include "main.hpp"

template<typename T>
void swap(T &a, T &b)
{
    T temps = a;
    a = b;
    b = temps;
}

template<typename T>
T min(const T &a, const T &b)
{
    if(a < b)
        return a;
    else
        return b;
}

template<typename T>
T max(const T &a, const T &b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}