#ifndef SUBWINDOW_H
#define SUBWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include <QPushButton>
#include <QString>
#include "lastwindow.h"


class QStackedWidget;

namespace Ui {
class SubWindow;
}

class SubWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SubWindow(QWidget *parent = 0);
    ~SubWindow();

    //QString sh;
    void switchPage();//切换函数
    void changeWin();
    void dealLast();
    int resultCityCount = 0 ;
signals:
    /*型号必须有signals关键字声明
     * 没有返回值，但可以有参数
     * 信号就是函数的声明，只需声明，无需定义
     * 使用：emit mySignal();
    */
    void mySignal();

private:
    Ui::SubWindow *ui;
    QPushButton b;

    LastWindow l;
protected:
    //重写绘图事件，虚函数
    //如果在窗口绘图，必须放在绘图事件里实现
    //绘图事件内部自动调用，窗口需要重绘的时候（状态改变）
    void paintEvent(QPaintEvent *);


};

#endif // SUBWINDOW_H
