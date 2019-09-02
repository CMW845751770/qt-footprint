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

    void addName(QString);
    void sendSlotclear();
    void getResultCities(int cityCount);

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
    void addlabel_zz();
    void addlabel_kf();
    void addlabel_ly();
    void addlabel_jn();
    void addlabel_qd();
    void addlabel_yt();
    void addlabel_rz();
    void addlabel_nc();
    void addlabel_jj();
    void addlabel_sr();
    void addlabel_gz();
    void addlabel_cd();
    void addlabel_my();
    void addlabel_zg();
    void addlabel_luzhou();
    void addlabel_nj();
    void addlabel_xz();
    void addlabel_yz();
    void addlabel_hz();
    void addlabel_hf();
    void addlabel_heb();
    void addlabel_cc();
    void addlabel_bx();
    void addlabel_hhht();
    void addlabel_wlmq();
    void addlabel_xm();
    void addlabel_qz();
    void addlabel_fz();

    void addgansu();//省
    void addchongqing();
    void addbeijing();
    void addhebei();
    void addhenan();
    void addshandong();
    void addjiangxi();
    void addsichuan();
    void addjiangsu();
    void addzhejiang();
    void addanhui();
    void addheilongjiang();
    void addjilin();
    void addliaoning();
    void addneimenggu();
    void addxinjiang();
    void addshanghai();
    void addtianjin();
    void addfujian();



signals:
    void mySignal1();

protected:
    void paintEvent(QPaintEvent *);

private slots:
    void sendSlot();


private:
    Ui::LastWindow *ui;
    QPushButton b;


};

#endif // LASTWINDOW_H
