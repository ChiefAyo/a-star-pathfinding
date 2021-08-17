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


void aStarSearch(Cell startCell, Cell endCell){

}
