#include "lastwindow.h"
#include "ui_lastwindow.h"
#include <QPainter>
#include <QLabel>


LastWindow::LastWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LastWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("足迹地图");
    this->setMaximumSize(1242,1084);
    this->setMinimumSize(1242,1084);
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
    QPixmap image(":/png/image/lastwindow.jpg");
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
    QPixmap *pixmap = new QPixmap(":/png/image/gs.png");
    ui->gs->setPixmap(*pixmap);

}
void LastWindow::addchongqing(){
    QPixmap *pixmap = new QPixmap(":/png/image/cq.png");
    ui->cq->setPixmap(*pixmap);

}
void LastWindow::addbeijing(){
    QPixmap *pixmap = new QPixmap(":/png/image/bj.png");
    ui->bj->setPixmap(*pixmap);

}
void LastWindow::addhebei(){
    QPixmap *pixmap = new QPixmap(":/png/image/hb.png");
    ui->hb->setPixmap(*pixmap);

}
void LastWindow::addhenan(){
    QPixmap *pixmap = new QPixmap(":/png/image/hn.png");
    ui->hn->setPixmap(*pixmap);

}
void LastWindow::addshandong(){
    QPixmap *pixmap = new QPixmap(":/png/image/sd.png");
    ui->sd->setPixmap(*pixmap);
}
void LastWindow::addjiangxi(){
    QPixmap *pixmap = new QPixmap(":/png/image/jx.png");
    ui->jx->setPixmap(*pixmap);
}
void LastWindow::addsichuan(){
    QPixmap *pixmap = new QPixmap(":/png/image/sc.png");
    ui->sc->setPixmap(*pixmap);
}
void LastWindow::addjiangsu(){
    QPixmap *pixmap = new QPixmap(":/png/image/js.png");
    ui->js->setPixmap(*pixmap);
}
void LastWindow::addzhejiang(){
    QPixmap *pixmap = new QPixmap(":/png/image/zj.png");
    ui->zj->setPixmap(*pixmap);
}
void LastWindow::addanhui(){
    QPixmap *pixmap = new QPixmap(":/png/image/ah.png");
    ui->ah->setPixmap(*pixmap);
}
void LastWindow::addheilongjiang(){
    QPixmap *pixmap = new QPixmap(":/png/image/hlj.png");
    ui->hlj->setPixmap(*pixmap);
}
void LastWindow::addjilin(){
    QPixmap *pixmap = new QPixmap(":/png/image/jl.png");
    ui->jl->setPixmap(*pixmap);
}
void LastWindow::addliaoning(){
    QPixmap *pixmap = new QPixmap(":/png/image/ln.png");
    ui->ln->setPixmap(*pixmap);
}
void LastWindow::addneimenggu(){
    QPixmap *pixmap = new QPixmap(":/png/image/nmg.png");
    ui->nmg->setPixmap(*pixmap);
}
void LastWindow::addxinjiang(){
    QPixmap *pixmap = new QPixmap(":/png/image/xj.png");
    ui->xj->setPixmap(*pixmap);
}
void LastWindow::addshanghai(){
    QPixmap *pixmap = new QPixmap(":/png/image/sh.png");
    ui->sh->setPixmap(*pixmap);
}
void LastWindow::addtianjin(){
    QPixmap *pixmap = new QPixmap(":/png/image/tj.png");
    ui->tj->setPixmap(*pixmap);
}
void LastWindow::addfujian(){
    QPixmap *pixmap = new QPixmap(":/png/image/fj.png");
    ui->fj->setPixmap(*pixmap);
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
    ui->hn->clear();
    ui->sd->clear();
    ui->jx->clear();
    ui->sc->clear();
    ui->js->clear();
    ui->zj->clear();
    ui->ah->clear();
    ui->hlj->clear();
    ui->jl->clear();
    ui->ln->clear();
    ui->nmg->clear();
    ui->xj->clear();
    ui->sh->clear();
    ui->tj->clear();
    ui->fj->clear();
}
