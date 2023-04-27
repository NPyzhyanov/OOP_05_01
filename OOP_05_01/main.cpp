#include <iostream>

#include "figure.h"
#include "triangle.h"
#include "quadrilateral.h"

int main()
{
    std::cout << "Number of sides:\n";
    
    Figure empty_figure;
    std::cout << "\tempty figure: " << empty_figure.get_number_of_sides() << std::endl;
    
    Triangle triangle;
    std::cout << "\ttriangle: " << triangle.get_number_of_sides() << std::endl;
    
    Quadrilateral quadrilateral;
    std::cout << "\tquadrilateral: " << quadrilateral.get_number_of_sides() << std::endl;
    
    return 0;
}
