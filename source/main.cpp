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
    //w.paintEvent();
    w.setInitialGrid(20,20);
    w.show();

    //vector<vector<Cell>> cells =



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


