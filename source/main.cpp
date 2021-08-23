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

//            if(cells[i-1][j-1]){

//            }
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


