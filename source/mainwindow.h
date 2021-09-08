#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QTableWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    virtual void paintEvent(QPaintEvent *);
    //void setCellColour(QTableWidgetItem Cell, std::string colour);
    void setInitialGrid(int row, int col);

private:
    Ui::MainWindow *ui;

    bool startCellSet;
    bool endCellSet;
    void onItemClicked(QTableWidgetItem * cell);
    void handleStartButton();
    void handleResetButton();
};
#endif // MAINWINDOW_H
