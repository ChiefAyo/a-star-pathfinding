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

    void setX(int x);
    void setY(int y);

    int getX();
    int getY();

    std::vector<Cell*> getNeighbours();

private:
    int xCoord, yCoord;
    float gValue, fValue;
    Cell* parent;
    std::vector<Cell*> neighbours;


};

#endif // CELL_H
