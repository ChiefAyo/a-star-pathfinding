#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGridLayout>
#include <QTableWidget>
#include <QHeaderView>
#include <QVBoxLayout>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::setInitialGrid Creates the inital grid of the algorithm
 * @param row number of rows
 * @param col number of columns
 */
void MainWindow::setInitialGrid(int row, int col){

    //this->grid = new QTableWidget(row, col);

    QTableWidget *gridTable = new QTableWidget(row,col);

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            QTableWidgetItem *item = new QTableWidgetItem;
            gridTable->setItem(i,j, item);

        }
    }

    QString tableStyle(
        "QTableWidget {"
            "border: 1px solid black;"
            "gridline-color: black "
         "}"
    );

    gridTable->horizontalHeader()->hide();
    gridTable->verticalHeader()->hide();
    gridTable->setStyleSheet(tableStyle);
    //gridTable->resize()


    //TODO Need to adjust table size so it fits in the window
    //TODO also probably need modify styles of the table a bit as well, can use CSS

    ui->verticalLayout->addWidget(gridTable);


}



void MainWindow::paintEvent(QPaintEvent *){

     QPainter painter(this);
     painter.setPen(Qt::darkGreen);


//     for(int i = 0;i<30;i+=6){
//         for(int j = 0;j<30;j+=6){
//             painter.drawRect(i+1, j+1,20,20);
//         }
//     }

    //TODO Finish setting up painter

}
