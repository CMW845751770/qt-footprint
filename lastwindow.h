#ifndef LASTWINDOW_H
#define LASTWINDOW_H

#include <QDialog>

#include <QMainWindow>
#include <QPushButton>
#include <QPainter>
#include <QLabel>
namespace Ui {
class LastWindow;
}

class LastWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LastWindow(QWidget *parent = 0);
    ~LastWindow();
    void sendSlot();
    void addName(QString);
    void sendSlotclear();

    void addlabel_cq();//市
    void addlabel_bj();
    void addlabel_xg();
    void addlabel_sh();
    void addlabel_tj();
    void addlabel_am();
    void addlabel_lz();
    void addlabel_by();
    void addlabel_dh();
    void addlabel_sjz();
    void addlabel_ts();
    void addlabel_zjk();

    void addgansu();//省
    void addchongqing();
    void addbeijing();
    void addhebei();
    void addhenan();
    void addshandong();
    void addjiangxi();




signals:
    void mySignal1();

protected:
    void paintEvent(QPaintEvent *);

private slots:



private:
    Ui::LastWindow *ui;
    QPushButton b;


};

#endif // LASTWINDOW_H
