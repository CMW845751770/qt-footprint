#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPainter>
#include<QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("足迹地图");
    this->setMaximumSize(700,500);
    this->setMinimumSize(700,500);
    b1.setParent(this);
    b1.setText("退出");
    b1.move(330,430);
    b1.resize(50,30);
    b1.setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:red;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 10px;"                       //字体，字体大小
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
                                  //鼠标悬停样式
                                  "QPushButton:hover{"
                                  "background-color:red;"
                                  "border-color:rgba(255,255,255,200);"
                                  "color:rgba(0,0,0,200);"
                                  "}");
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
    b2.setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:green;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 10px;"                       //字体，字体大小
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
                                  //鼠标悬停样式
                                  "QPushButton:hover{"
                                  "background-color:green;"
                                  "border-color:rgba(255,255,255,200);"
                                  "color:rgba(0,0,0,200);"
                                  "}");
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
    p.drawPixmap(0,0,width(),height(),QPixmap(":/png/image/main.PNG"));//画背景图
    p.end();
}
