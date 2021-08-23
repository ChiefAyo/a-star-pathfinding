#include "cell.h"
#include <math.h>


Cell::Cell()
{

}

void Cell::setF(float f){
   fValue = f;
}

void Cell::setG(float g){
   gValue = g;
}

float Cell::getG(){
    return gValue;
}

float Cell::getF(){
    return fValue;
}

void Cell::setX(int x){
    xCoord = x;
}

void Cell::setY(int y){
   yCoord = y;
}

int Cell::getX(){
    return xCoord;
}

int Cell::getY(){
    return yCoord;
}

std::vector<Cell*> Cell::getNeighbours(){
    return neighbours;
}
