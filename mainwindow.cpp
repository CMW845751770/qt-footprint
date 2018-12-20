#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPainter>
#include<QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("主窗口");
    this->setMaximumSize(700,500);
    this->setMinimumSize(700,500);
    b1.setParent(this);
    b1.setText("退出");
    b1.move(330,430);
    b1.resize(50,30);
    connect(&b1,&QPushButton::pressed,this,&MainWindow::close);
    /* &b1:信号发出者，指针类型
     * &QPushButton::pressed &发送者的类名：：信号名字
     * this：信号接收者
     * &MainWindowt::close：&接收的类名：：槽函数名字
    */

    b2.setParent(this);
    b2.setText("开始");
    b2.move(330,400);
    b2.resize(50,30);

    //显示子窗口
    //w.show();
    connect(&b2,&QPushButton::released,this,&MainWindow::changeWin);

    //处理子窗口的信号
    connect(&w,&SubWindow::mySignal,this,&MainWindow::dealLast);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::changeWin(){
    //子窗口显示
    w.show();
    //本窗口隐藏
    this->hide();
}

void MainWindow::dealLast(){
    //主窗口显示
    this->show();

}
void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p;//创建画家对象
    p.begin(this);//指定当前窗口为绘图设备
    p.drawPixmap(0,0,width(),height(),QPixmap(":/image/8.png"));//画背景图
    p.end();
}
