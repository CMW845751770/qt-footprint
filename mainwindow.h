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
//    void dealSub();
//    void dealLast();
      static User* user ;

    //void closeEvent (QCloseEvent *e);
protected:
    //重写绘图事件，虚函数
    //如果在窗口绘图，必须放在绘图事件里实现
    //绘图事件内部自动调用，窗口需要重绘的时候（状态改变）
    void paintEvent(QPaintEvent *);


private:
    Ui::MainWindow *ui;
    QPushButton b1;
    QPushButton b2;

    SubWindow w;
};

#endif // MAINWINDOW_H
