#include "lastwindow.h"
#include "ui_lastwindow.h"
#include <QPainter>


#include <QLabel>


LastWindow::LastWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LastWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("最终窗口");
    this->setMaximumSize(1224,846);
    this->setMinimumSize(1224,846);
    b.setParent(this);
    b.setText("主菜单");
    b.move(1150,10);
    b.resize(50,30);
    connect(&b,&QPushButton::clicked,this,&LastWindow::sendSlot);//发射信号回上一窗口
    connect(&b,&QPushButton::clicked,this,&LastWindow::sendSlotclear);//点击主菜单，清空



}
LastWindow::~LastWindow()
{
    delete ui;
}

void LastWindow::paintEvent(QPaintEvent*){//背景图片
    QPixmap image(":/image/9.png");
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),image);

}



void LastWindow::sendSlot(){
    emit mySignal1();
    ui->textBrowser->setText("");
}
void LastWindow::addName(QString str){
    ui->textBrowser->insertPlainText(str);
    ui->textBrowser->insertPlainText(" ");
}

void LastWindow::addlabel_cq(){
    ui->label_cq->setText("重庆 *");
}
void LastWindow::addlabel_bj(){
    ui->label_bj->setText("北京 *");

}
void LastWindow::addlabel_xg(){
    ui->label_xg->setText("香港 *");

}
void LastWindow::addlabel_am(){
    ui->label_am->setText("澳门 *");

}
void LastWindow::addlabel_sh(){
    ui->label_sh->setText("上海 *");

}
void LastWindow::addlabel_tj(){
    ui->label_tj->setText("天津 *");

}
void LastWindow::addlabel_lz(){
    ui->label_lz->setText("兰州 *");

}
void LastWindow::addlabel_by(){
    ui->label_by->setText("白银 *");

}
void LastWindow::addlabel_dh(){
    ui->label_dh->setText("敦煌 *");

}
void LastWindow::addlabel_sjz(){
    ui->label_sjz->setText("石家庄 *");

}
void LastWindow::addlabel_ts(){
    ui->label_ts->setText("唐山 *");

}
void LastWindow::addlabel_zjk(){
    ui->label_zjk->setText("张家口 *");

}
void LastWindow::addgansu(){
    QPixmap *pixmap = new QPixmap(":/image/gs.png");
    ui->gs->setPixmap(*pixmap);

}
void LastWindow::addchongqing(){
    QPixmap *pixmap = new QPixmap(":/image/cq.png");
    ui->cq->setPixmap(*pixmap);

}
void LastWindow::addbeijing(){
    QPixmap *pixmap = new QPixmap(":/image/bj.png");
    ui->bj->setPixmap(*pixmap);

}
void LastWindow::addhebei(){
    QPixmap *pixmap = new QPixmap(":/image/hb.png");
    ui->hb->setPixmap(*pixmap);

}
void LastWindow::sendSlotclear()
{
    ui->label_cq->setText("");
    ui->label_bj->setText("");
    ui->label_xg->setText("");
    ui->label_am->setText("");
    ui->label_sh->setText("");
    ui->label_tj->setText("");
    ui->label_lz->setText("");
    ui->label_by->setText("");
    ui->label_dh->setText("");
    ui->label_sjz->setText("");
    ui->label_ts->setText("");
    ui->label_zjk->setText("");
    ui->gs->clear();
    ui->cq->clear();
    ui->bj->clear();
    ui->hb->clear();
}
