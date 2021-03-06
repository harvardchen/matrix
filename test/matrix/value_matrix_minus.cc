#include <f/matrix/matrix.hpp>

#include <algorithm>
#include <iostream>

int main()
{
    f::matrix<double> A( 3, 2 );
    double const b = 7.0;

    std::fill( A.begin(), A.end(), -1 );

    std::cout << "Matrix A is:\n" << A << "\n";

    std::cout << "Variable b is: \n" << b << "\n\n";

    std::cout << "b - A is:\n" << b - A << "\n";

    return 0;
}

/*
Output:

Matrix A is:
-1       -1
-1       -1
-1       -1

Variable b is:
7

b - A is:
8        8
8        8
8        8  

*/   
