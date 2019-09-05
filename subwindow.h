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
    void mySignal();

private:
    Ui::SubWindow *ui;
    QPushButton b;

    LastWindow l;
protected:
    void paintEvent(QPaintEvent *);


};

#endif // SUBWINDOW_H
