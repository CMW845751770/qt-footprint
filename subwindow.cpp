#include "subwindow.h"
#include "ui_subwindow.h"

#include <QMainWindow>
#include <QPushButton>



SubWindow::SubWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SubWindow)
{
    ui->setupUi(this);

    connect(ui->button0,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->button1,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->button2,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->button3,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->button4,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->button5,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->button6,&QPushButton::clicked,this,&SubWindow::switchPage);

    this->setWindowTitle("子窗口");
    this->setMaximumSize(737,531);
    this->setMinimumSize(737,531);
    b.setParent(this);
    b.setText("选择完成");

    b.resize(80,30);
    b.move(550,20);
    connect(&b,&QPushButton::released,this,&SubWindow::changeWin);
    connect(&l,&LastWindow::mySignal1,this,&SubWindow::dealLast);
}

SubWindow::~SubWindow()
{
    delete ui;
}
void SubWindow::dealLast(){
    //最终窗口隐藏
    l.hide();
    emit mySignal();


}
void SubWindow::changeWin(){
    //子窗口显示
    l.show();
    //本窗口隐藏
    this->hide();


    if(ui->button00->isChecked()==1){//判断用户选择的省市，调用函数实现足迹绘制
        l.addName("重庆");
        l.addlabel_cq();
        l.addchongqing();
    }
    if(ui->button01->isChecked()==1){
        l.addName("北京");
        l.addlabel_bj();
        l.addbeijing();
    }
    if(ui->button02->isChecked()==1){
        l.addName("香港");
        l.addlabel_xg();
    }
    if(ui->button03->isChecked()==1){
        l.addName("上海");
        l.addlabel_sh();
    }
    if(ui->button04->isChecked()==1){
        l.addName("澳门");
        l.addlabel_am();
    }
    if(ui->button05->isChecked()==1){
        l.addName("天津");
        l.addlabel_tj();
    }
    if(ui->button10->isChecked()==1){
        l.addName("兰州");
        l.addlabel_lz();
        l.addgansu();
    }
    if(ui->button11->isChecked()==1){
        l.addName("白银");
        l.addlabel_by();
        l.addgansu();
    }
    if(ui->button12->isChecked()==1){
        l.addName("敦煌");
        l.addlabel_dh();
        l.addgansu();
    }
    if(ui->button20->isChecked()==1){
        l.addName("石家庄");
        l.addlabel_sjz();
        l.addhebei();
    }
    if(ui->button21->isChecked()==1){
        l.addName("唐山");
        l.addlabel_ts();
        l.addhebei();
    }
    if(ui->button22->isChecked()==1){
        l.addName("张家口");
        l.addlabel_zjk();
        l.addhebei();
    }
}

void SubWindow::switchPage(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());//得到按下的按钮的指针
    if(button==ui->button0)
        ui->stackedWidget->setCurrentIndex(0);//根据按下的button按索引显示相应的页面
    else if(button==ui->button1)
        ui->stackedWidget->setCurrentIndex(1);
    else if(button==ui->button2)
        ui->stackedWidget->setCurrentIndex(2);
    else if(button==ui->button3)
        ui->stackedWidget->setCurrentIndex(3);
    else if(button==ui->button4)
        ui->stackedWidget->setCurrentIndex(4);
    else if(button==ui->button5)
        ui->stackedWidget->setCurrentIndex(5);
    else if(button==ui->button6)
        ui->stackedWidget->setCurrentIndex(6);

}


