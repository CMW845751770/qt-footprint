#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QPushButton>
#include "subwindow.h"//子窗口头文
#include "usercontainer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
      void changeWin();
      static User* user ;
protected:
    void paintEvent(QPaintEvent *);


private:
    Ui::MainWindow *ui;
    QPushButton b1;
    QPushButton b2;

    SubWindow w;
};

#endif // MAINWINDOW_H
