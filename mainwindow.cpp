
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QPainter>
#include<QPushButton>
#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <iostream>
#include <QDebug>

User* MainWindow::user = NULL ;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("足迹地图");
    this->setMaximumSize(700,500);
    this->setMinimumSize(700,500);
    b1.setParent(this);
    b1.setText("退 出");
    b1.move(295,430);
    b1.resize(120,30);
    b1.setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:red;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:1px;"                     //边框宽度像素
                                  "border-radius:15px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:15px 微软雅黑;"//字体，字体大小
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
    b2.setText("开 始");
    b2.move(295,395);
    b2.resize(120,30);
    b2.setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:green;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:1px;"                     //边框宽度像素
                                  "border-radius:15px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:15px 微软雅黑;"                       //字体，字体大小
                                  "color:white;"                //字体颜色
                                  "padding:2px 10px 2px 10px;"                          //填衬
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
    //设置label的字体
    QFont font2 ( "Microsoft YaHei",  10,   80);
    ui->usernameLabel->setFont(font2);
    ui->passwordLabel->setFont(font2);
    ui->password->setEchoMode(QLineEdit::Password);
    //设置lineEdit样式
    ui->username->setContextMenuPolicy(Qt::NoContextMenu);//设置无右键菜单
    ui->password->setContextMenuPolicy(Qt::NoContextMenu);//设置无右键菜单
    ui->username->setStyleSheet("QLineEdit{"
                                "background:transparent ;"
                                "border-color:rgba(255,255,255,200);"
                                "border-style:outset;"                  //边框样式
                                "border-width:2px;"                     //边框宽度像素
                                "border-radius:10px;}"                   //边框圆角半径像素"
                                );
    ui->password->setStyleSheet("QLineEdit{"
                                "background:transparent ;"
                                "border-color:rgba(255,255,255,200);"
                                "border-style:outset;"                  //边框样式
                                "border-width:2px;"                     //边框宽度像素
                                "border-radius:10px;}"                   //边框圆角半径像素"
                                );
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::changeWin(){
    //登录校验
    //接收用户名密码
    QString username = ui->username->text() ;
    qDebug()<<username<<endl ;
    if(username == "" || username== NULL){
        QMessageBox::information(NULL,"亲","用户名不能为空哦！") ;
        return;
    }
    QString password = ui->password->text() ;
    qDebug()<<password<<endl ;
    if(password == "" || password== NULL){
        QMessageBox::information(NULL,"亲","密码不能为空哦！") ;
        return;
    }
    //判断用户名是否存在
    QSqlQuery query;
       //执行sql
    query.prepare("select count(1) from footprint_user where username = ?") ;
    query.addBindValue(username) ;
    query.exec() ;
    int usernameResultCount = 0;
    while(query.next()){
        usernameResultCount = query.value(0).toInt() ;
    }
    qDebug()<<usernameResultCount<<endl ;
    if(!(usernameResultCount > 0)){
        QMessageBox::information(NULL,"亲","用户名是不是输错了？") ;
        return;
    }
    QSqlQuery query2;
    //根据用户名和密码查询用户
    query2.prepare("select id,username,password,city_count as cityCount, create_time as createTime ,update_time as updateTime from footprint_user where username = ? and password = ?") ;
    query2.addBindValue(username) ;
    query2.addBindValue(password) ;
    query2.exec() ;
    while(query2.next()){
        user = new User() ;
        user->setId(query2.value(0).toInt()) ;
        user->setUsername(query2.value(1).toString()) ;
        user->setPassword(query2.value(2).toString()) ;
        user->setCityCount(query2.value(3).toInt()) ;
        user->setCreateTime(query2.value(4).toDateTime()) ;
        user->setUpdateTime(query2.value(5).toDateTime()) ;
    }
    qDebug()<<user<<endl ;
    if(user == NULL){
        QMessageBox::information(NULL,"抱歉","密码错误") ;
        return;
    }
    qDebug()<<"id :" <<user->getId()<<"username : "<<user->getUsername()<<"password : "<<user->getPassword()
                        <<"ciyCount : "<<user->getCityCount()<<"createTime :"<<user->getCreateTime()<<"updateTime : "<<user->getUpdateTime()<<endl ;

    //子窗口显示
    w.show();
    //本窗口隐藏
    this->hide();
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p;//创建画家对象
    p.begin(this);//指定当前窗口为绘图设备
    p.drawPixmap(0,0,width(),height(),QPixmap(":/png/image/main.PNG"));//画背景图
    p.end();
}
