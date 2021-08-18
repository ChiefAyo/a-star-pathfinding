#include "mainwindow.h"
#include <vector>
#include "cell.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.paintEvent();
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
void createGrid(MainWindow w){

    //QWidget *grid = new QWidget;
    //QGridLayout *layout = new QGridLayout;
    //QTableView gridTable = new QWidget;

    //TODO going to use QTableView instead of Grid or painter, makes a lot
    // more sense
}
