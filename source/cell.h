#ifndef CELL_H
#define CELL_H

#include <vector>


class Cell
{
public:
    Cell();

    void setG(float g);
    void setF(float f);

    float getG();
    float getF();
private:
    int xCoord, yCoord;
    float gValue, fValue;
    Cell *parent;
    std::vector<Cell*> neighbours;


};

#endif // CELL_H
