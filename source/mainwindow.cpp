#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGridLayout>
#include <QTableWidget>
#include <QHeaderView>
#include <QVBoxLayout>
#include <QPushButton>


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

            //TODO Get some kind of on click event to change cell colour

        }
    }

    // Sets styling for table
    QString tableStyle(
        "QTableWidget {"
            "gridline-color: black "
         "}"
    );

    //adds on click event to left click
    connect(gridTable, &QTableWidget::itemClicked,this, &MainWindow::onItemClicked);
    connect(gridTable, &QTableWidget::itemDoubleClicked,this, &MainWindow::onItemDoubleClicked);

    //hides unecessary click event
    gridTable->horizontalHeader()->hide();
    gridTable->verticalHeader()->hide();
    gridTable->setStyleSheet(tableStyle);
    gridTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    gridTable->setSelectionMode(QTableWidget::NoSelection);
    gridTable->verticalHeader()->setDefaultSectionSize(15);
    gridTable->horizontalHeader()->setDefaultSectionSize(15);



    //gridTable->resize()


    //TODO Need to adjust table size so it fits in the window
    //TODO also probably need modify styles of the table a bit as well, can use CSS

    ui->verticalLayout->addWidget(gridTable);
    gridTable->viewport()->installEventFilter(this);

    auto startButton = new QPushButton("Start",this);
    connect(startButton, &QPushButton::released, this, &MainWindow::handleStartButton);

    auto resetButton = new QPushButton("Reset",this);
    connect(resetButton, &QPushButton::released, this, &MainWindow::handleResetButton);


    ui->verticalLayout->addWidget(startButton);
    ui->verticalLayout->addWidget(resetButton);

}

//void MainWindow::setCellColour(QTableWidgetItem *cellItem, std::string colour){
//    cellItem->setBackground(QBrush::colour)
//}



void MainWindow::onItemClicked(QTableWidgetItem *cell){
    if(cell != NULL && !startCellSet){
        cell->setBackground(Qt::darkGreen);

        startCellSet = true;
    }

}

void MainWindow::onItemDoubleClicked(QTableWidgetItem *cell){
    if(cell != NULL && !endCellSet){
        cell->setBackground(Qt::red);
        endCellSet = true;
    }

}



//starts the search when start button is clicked
void MainWindow::handleStartButton(QTableWidget *grid){
    if((startCellSet && endCellSet)) {
        //clear path and start again


    }
}

//Resets the whole search
void MainWindow::handleResetButton(QTableWidget *grid){

}

int getStartX(){
    //return startX;
}


