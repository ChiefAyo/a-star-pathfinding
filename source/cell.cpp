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
