#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
public:
    Figure() {sides = 0;}
    int get_number_of_sides() {return sides;}
    
protected:
    int sides;
};

#endif // FIGURE_H
