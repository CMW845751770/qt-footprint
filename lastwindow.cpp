#include "lastwindow.h"
#include "mainwindow.h"
#include "ui_lastwindow.h"
#include <QPainter>
#include <QLabel>
#include <QSqlQuery>
#include <QDebug>

LastWindow::LastWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LastWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("足迹地图");
    this->setMaximumSize(1242,1084);
    this->setMinimumSize(1242,1084);
    b.setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:green;"//背景色（也可以设置图片）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 15px;"                       //字体，字体大小
                                  "color:white;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:rgba(100,255,100,200);"
                                  "border-color:rgba(255,255,255,30);"
                                  "border-style:inset;"
                                  "color:rgba(0,0,0,100);"
                                  "}"
                                  );
    b.setParent(this);
    b.setText("返回");
    b.move(1150,10);
    b.resize(80,30);
    //设置label的字体样式
    //设置textBrowser为无边框背景透明字体为黑体
    ui->textBrowser->setStyleSheet("QTextBrowser{border-width:0;border-style:outset}") ;
    ui->textBrowser->viewport()->setAutoFillBackground(false);
    QFont font2 ( "Microsoft YaHei",  10,   80);
    ui->textBrowser->setFont(font2) ;
    ui->cityCount->setStyleSheet("QLabel{border-image: url(:/png/image/cityCount.jpg);}") ;
    ui->userRate->setStyleSheet("QLabel{border-image: url(:/png/image/userRate.png);}") ;
    ui->username->setStyleSheet("QLabel{border-image: url(:/png/image/subwindow.jpg);}") ;
    QFont font3 ( "Microsoft YaHei", 30, 80,false);
    ui->username->setFont(font3) ;
    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::yellow);
    ui->username->setPalette(pa);
    //设置count和rate
    ui->count->setStyleSheet("QLabel{border-image: url(:/png/image/subwindow.jpg);}")  ;
    ui->count->setFont(font3) ;
    ui->count->setPalette(pa);
    QFont font4 ( "Microsoft YaHei", 15, 80,false);
    ui->rate->setStyleSheet("QLabel{border-image: url(:/png/image/subwindow.jpg);}")  ;
    ui->rate->setFont(font4) ;
    ui->rate->setPalette(pa);
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
void LastWindow::addlabel_zz(){
    ui->label_zz->setText("郑州 *");

}
void LastWindow::addlabel_kf(){
    ui->label_kf->setText("开封 *");

}
void LastWindow::addlabel_ly(){
    ui->label_ly->setText("洛阳 *");
}
void LastWindow::addlabel_jn(){
    ui->label_jn->setText("济南 *");
}
void LastWindow::addlabel_qd(){
    ui->label_qd->setText("青岛 *");
}
void LastWindow::addlabel_yt(){
    ui->label_yt->setText("烟台 *");
}
void LastWindow::addlabel_rz(){
    ui->label_rz->setText("日照 *");
}
void LastWindow::addlabel_nc(){
    ui->label_nc->setText("南昌 *");
}
void LastWindow::addlabel_jj(){
    ui->label_jj->setText("九江 *");
}
void LastWindow::addlabel_sr(){
    ui->label_sr->setText("上饶 *");
}
void LastWindow::addlabel_gz(){
    ui->label_gz->setText("赣州 *");
}
void LastWindow::addlabel_cd(){
    ui->label_cd->setText("成都 *");
}
void LastWindow::addlabel_my(){
    ui->label_my->setText("绵阳 *");
}
void LastWindow::addlabel_zg(){
    ui->label_zg->setText("自贡 *");
}
void LastWindow::addlabel_luzhou(){
    ui->label_luzhou->setText("泸州 *");
}
void LastWindow::addlabel_nj(){
    ui->label_nj->setText("南京 *");
}
void LastWindow::addlabel_xz(){
    ui->label_xz->setText("徐州 *");
}
void LastWindow::addlabel_yz(){
    ui->label_yz->setText("扬州 *");
}
void LastWindow::addlabel_hz(){
    ui->label_hz->setText("杭州 *");
}
void LastWindow::addlabel_hf(){
    ui->label_hf->setText("合肥 *");
}
void LastWindow::addlabel_heb(){
    ui->label_heb->setText("哈尔滨 *");
}
void LastWindow::addlabel_cc(){
    ui->label_cc->setText("长春 *");
}
void LastWindow::addlabel_bx(){
    ui->label_bx->setText("本溪 *");
}
void LastWindow::addlabel_hhht(){
    ui->label_hhht->setText("呼和浩特 *");
}
void LastWindow::addlabel_wlmq(){
    ui->label_wlmq->setText("乌鲁木齐 *");
}
void LastWindow::addlabel_xm(){
    ui->label_xm->setText("厦门 *");
}
void LastWindow::addlabel_qz(){
    ui->label_qz->setText("泉州 *");
}
void LastWindow::addlabel_fz(){
    ui->label_fz->setText("福州 *");
}
//省
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

//计算用户踏足的城市并显示在label中
void LastWindow::getResultCities(int cityCount){
    QString str = QString::number(cityCount);
    QString username = MainWindow::user->getUsername() ;
    ui->username->setText(username) ;
    ui->count->setText(str) ;
    //更新用户city_count字段
    QSqlQuery query;
    //更具用户名更新city_count
    query.prepare("update footprint_user set city_count = ? where username = ?") ;
    query.addBindValue(cityCount) ;
    query.addBindValue(username) ;
    query.exec() ;
    //查询出city_count比此用户少的用户个数以及所有用户的个数最后得到rate比率
    int totalUserCount = -1 ;
    int lessCityCountUserCount = -1 ;
    QSqlQuery query2;
    //更具用户名更新city_count
    query2.prepare("select count(1) from footprint_user") ;
    query2.exec() ;
    while(query2.next()){
        totalUserCount = query2.value(0).toInt() ;
    }
    QSqlQuery query3;
    //更具用户名更新city_count
    query3.prepare("select count(1) from footprint_user where city_count < ?") ;
    query3.addBindValue(cityCount) ;
    query3.exec() ;
    while(query3.next()){
        lessCityCountUserCount = query3.value(0).toInt() ;
    }
    double rate = -1 ;
    if(lessCityCountUserCount == totalUserCount -1 ){
        rate = 1 ;
    }else{
        rate = lessCityCountUserCount/((double)totalUserCount) ;
    }
    qDebug()<<"rate:"<<rate<<endl ;
    QString userRate = QString::number ( rate * 100, 'g',  3 ) + "%" ;
    qDebug()<<"rateStr:"<<userRate<<endl ;
    ui->rate->setText(userRate) ;

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
    ui->label_zz->setText("");
    ui->label_kf->setText("");
    ui->label_ly->setText("");
    ui->label_jn->setText("");
    ui->label_qd->setText("");
    ui->label_yt->setText("");
    ui->label_rz->setText("");
    ui->label_nc->setText("");
    ui->label_jj->setText("");
    ui->label_sr->setText("");
    ui->label_gz->setText("");
    ui->label_cd->setText("");
    ui->label_my->setText("");
    ui->label_zg->setText("");
    ui->label_luzhou->setText("");
    ui->label_nj->setText("");
    ui->label_xz->setText("");
    ui->label_yz->setText("");
    ui->label_hz->setText("");
    ui->label_heb->setText("");
    ui->label_cc->setText("");
    ui->label_bx->setText("");
    ui->label_hhht->setText("");
    ui->label_wlmq->setText("");
    ui->label_xm->setText("");
    ui->label_qz->setText("");
    ui->label_fz->setText("");
    ui->label_hf->setText("");
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
