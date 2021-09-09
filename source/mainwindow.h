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

    //virtual void paintEvent(QPaintEvent *);
    //void setCellColour(QTableWidgetItem Cell, std::string colour);
    void setInitialGrid(int row, int col);
    int getStartX();
    int getStartY();

private:
    Ui::MainWindow *ui;

    int startX;
    int startY;
    bool startCellSet;
    bool endCellSet;
    bool ended;
    void onItemClicked(QTableWidgetItem * cell);
    void onItemDoubleClicked(QTableWidgetItem * cell);
    void handleStartButton(QTableWidget * grid);
    void handleResetButton(QTableWidget * grid);
    // virtual bool eventFilter(QObject *watched, QEvent *event);
};
#endif // MAINWINDOW_H
