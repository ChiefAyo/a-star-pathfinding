#ifndef CELL_H
#define CELL_H


class Cell
{
public:
    Cell();
private:
    int xCoord, yCoord;
    float gValue, fValue;
    //Cell parent;

    void setG(float g);
    void setF(float f);

    float getG();
    float getF();
};

#endif // CELL_H
