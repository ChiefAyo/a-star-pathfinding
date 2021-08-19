#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGridLayout>
#include <QTableWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setLayout(new QGridLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setInitialGrid(int row, int col){

    QTableWidget *gridTable = new QTableWidget(row,col);

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            gridTable->setItem(i,j, new QTableWidgetItem());
        }
    }

    this->ui->centralwidget->layout()->addWidget(gridTable);
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
