#include "mainwindow.h"
#include <QApplication>
#include <qmessagebox.h>
#include <qsqldatabase.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//选择连接方式，这里使用的是ODBC
    db.setHostName("127.0.0.1");//数据库的主机名
    db.setPort(3306);//数据库的端口
    db.setDatabaseName("footprint");//数据源名称
    db.setUserName("root");//数据库登录用户名
    db.setPassword("root");//数据库登录的密码
    if (!db.open()){
       printf("failed to connect to the database") ;
       QMessageBox::information(NULL,"亲","服务挂了，等会再试试？") ;
       return -1 ;
     }
    else
       printf("successfully connected to the database") ;
    return a.exec();
}
