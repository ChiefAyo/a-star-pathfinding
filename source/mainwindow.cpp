#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::paintEvent(QPaintEvent *){

     QPainter painter(this);
     painter.setPen(Qt::darkGreen);


     for(int i = 0;i<5;i++){
         for(int j = 0;j<5;j++){
             painter.drawRect(i+1, j+1,1,1);
         }
     }

    //TODO Finish setting up painter

}
