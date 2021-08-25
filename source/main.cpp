#include "mainwindow.h"
#include <vector>
#include "cell.h"

#include <QApplication>
#include <QTableWidget>
#include <QGridLayout>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    int n = 20;
    //w.paintEvent();
    w.setInitialGrid(n,n);
    w.show();

    //vector<vector<Cell>> cells =

    Cell cells[n][n];
    for(int i = 0;i<n;i++){
        for (int j = 0;j<n;j++) {
            cells[i][j].setF(INFINITY);
            cells[i][j].setG(INFINITY);
            cells[i][j].setX(i);
            cells[i][j].setY(j);

            // every node has 8 possible neighbours, starting from top left
            // goes clockwise

            //topleft
            if((i-1>=0)&&(j-1>=0)){
                Cell* topLeft = &cells[i-1][j-1];
                cells[i][j].getNeighbours().push_back(topLeft);
            }

            //top
            if((i-1>=0)){
                Cell* top = &cells[i-1][j];
                cells[i][j].getNeighbours().push_back(top);
            }

            //topright
            if((i-1>=0)&&(j+1<n)){
                Cell* topRight = &cells[i-1][j+1];
                cells[i][j].getNeighbours().push_back(topRight);
            }

            //right
            if(j+1<n){
                Cell* right = &cells[i][j+1];
                cells[i][j].getNeighbours().push_back(right);
            }

            //bottomright
            if((i+1<n)&&(j+1<n)){
                Cell* bottmRight = &cells[i+1][j+1];
                cells[i][j].getNeighbours().push_back(bottmRight);
            }

            //bottom
            if(i+1<n){
                Cell* bottmRight = &cells[i+1][j];
                cells[i][j].getNeighbours().push_back(bottmRight);
            }

            //bottomLeft
            if((i+1<n)&&(j-1<n)){
                Cell* bottmRight = &cells[i+1][j-1];
                cells[i][j].getNeighbours().push_back(bottmRight);
            }

            //left
            if((j-1>0)){
                Cell* bottmRight = &cells[i][j-1];
                cells[i][j].getNeighbours().push_back(bottmRight);
            }


            //TODO Need way to check if corners are out of bounds
        }
    }




    //std::vector openSet;

    return a.exec();
}

/**
 * @brief aStarSearch performs actual search algorithm
 * @param startCell Initial cell where search begins
 * @param endCell Trarget Cell where Search will end
 */
void aStarSearch(Cell startCell, Cell endCell, MainWindow *w){




}


