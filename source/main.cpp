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
    w.setInitialGrid(10,10);
    w.show();




    //std::vector openSet;

    return a.exec();
}

/**
 * @brief aStarSearch performs actual search algorithm
 * @param startCell Initial cell where search begins
 * @param endCell Trarget Cell where Search will end
 */
void aStarSearch(Cell startCell, Cell endCell){



}

/**
 * @brief createGrid generates table grid
 * @param w main window widget
 */
QTableWidget* createGrid(MainWindow *w){

    //QWidget *grid = new QWidget;
    //QGridLayout *layout = new QGridLayout;
    //QTableView gridTable = new QWidget;

    QTableWidget *gridTable = new QTableWidget(10,10);

    for(int i = 0;i<10;i++){
        for(int j = 0;j<10;j++){
            gridTable->setItem(i,j, new QTableWidgetItem());
        }
    }


    return gridTable;
}
