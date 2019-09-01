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
    connect(ui->pushButton_11,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->pushButton_12,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->pushButton_13,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->pushButton_14,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->pushButton_15,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->pushButton_16,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->pushButton_17,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->pushButton_18,&QPushButton::clicked,this,&SubWindow::switchPage);
    connect(ui->pushButton_19,&QPushButton::clicked,this,&SubWindow::switchPage);

    //中间按钮
    ui->button00->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button01->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button02->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button03->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button04->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button05->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button10->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button11->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button12->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button20->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button21->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button22->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button30->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button31->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button32->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button40->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button41->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button42->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button43->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button50->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button51->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button52->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button53->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button60->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button61->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button62->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button63->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button80->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button81->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button82->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button90->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button100->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button110->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button120->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button130->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button140->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button150->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button160->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button161->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;
    ui->button162->setStyleSheet(
               " QCheckBox{"
                "        spacing: 15px;"
               " }"
               " QCheckBox::indicator {"
                       " width: 17px;"
                      "  height: 17px;"
                "}"
                "QCheckBox::indicator:unenabled:unchecked {"
                "        image: url(:/png/image/while_round_thin.png);"
                "}"
                "QCheckBox::indicator:unenabled:checked {"
                "        image: url(:/png/image/red_round.png);"
                "}"
               " QCheckBox::indicator:enabled:unchecked {"
                "        image: url(:/png/image/while_round.png);"
                "}"
               " QCheckBox::indicator:enabled:checked {"
                "        image: url(:/png/image/green_round.png);"
               " }"
                                 ) ;

    //左边按钮
    ui->button0->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->button1->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->button2->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->button3->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->button4->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->button5->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->button6->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->pushButton_11->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->pushButton_12->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->pushButton_13->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->pushButton_14->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->pushButton_15->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->pushButton_16->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->pushButton_17->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->pushButton_18->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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
    ui->pushButton_19->setStyleSheet(
                //正常状态样式
                                  "QPushButton{"
                                  "background-color:white;"//背景色（也可以设置图片）
                                  "border-style:outset;"                  //边框样式（inset/outset）
                                  "border-width:4px;"                     //边框宽度像素
                                  "border-radius:10px;"                   //边框圆角半径像素
                                  "border-color:rgba(255,255,255,30);"    //边框颜色
                                  "font:bold 14px;"                       //字体，字体大小
                                  "color:black;"                //字体颜色
                                  "padding:6px;"                          //填衬
                                  "}"
                                  //鼠标按下样式
                                  "QPushButton:pressed{"
                                  "background-color:yellow;"
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

    //
    this->setWindowTitle("足迹地图");
    this->setMaximumSize(737,531);
    this->setMinimumSize(737,531);
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
    b.setText("选择完成");

    b.resize(80,30);
    b.move(550,20);
    connect(&b,&QPushButton::released,this,&SubWindow::changeWin);
    connect(&l,&LastWindow::mySignal1,this,&SubWindow::dealLast);
}
void SubWindow::paintEvent(QPaintEvent *)
{
    QPainter p;//创建画家对象
    p.begin(this);//指定当前窗口为绘图设备
    p.drawPixmap(0,0,width(),height(),QPixmap(":/png/image/subwindow.png"));//画背景图
    p.end();
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
        resultCityCount ++ ;
    }
    if(ui->button01->isChecked()==1){
        l.addName("北京");
        l.addlabel_bj();
        l.addbeijing();
        resultCityCount ++ ;
    }
    if(ui->button02->isChecked()==1){
        l.addName("香港");
        l.addlabel_xg();
        resultCityCount ++ ;
    }
    if(ui->button04->isChecked()==1){
        l.addName("澳门");
        l.addlabel_am();
        resultCityCount ++ ;
    }
    if(ui->button10->isChecked()==1){
        l.addName("兰州");
        l.addlabel_lz();
        l.addgansu();
        resultCityCount ++ ;
    }
    if(ui->button11->isChecked()==1){
        l.addName("白银");
        l.addlabel_by();
        l.addgansu();
        resultCityCount ++ ;
    }
    if(ui->button12->isChecked()==1){
        l.addName("敦煌");
        l.addlabel_dh();
        l.addgansu();
        resultCityCount ++ ;
    }
    if(ui->button20->isChecked()==1){
        l.addName("石家庄");
        l.addlabel_sjz();
        l.addhebei();
        resultCityCount ++ ;
    }
    if(ui->button21->isChecked()==1){
        l.addName("唐山");
        l.addlabel_ts();
        l.addhebei();
        resultCityCount ++ ;
    }
    if(ui->button22->isChecked()==1){
        l.addName("张家口");
        l.addlabel_zjk();
        l.addhebei();
        resultCityCount ++ ;
    }
    if(ui->button30->isChecked()==1){
        l.addName("郑州");
        l.addlabel_zz();
        l.addhenan();
        resultCityCount ++ ;
    }
    if(ui->button31->isChecked()==1){
        l.addName("开封");
        l.addlabel_kf();
        l.addhenan();
        resultCityCount ++ ;
    }
    if(ui->button32->isChecked()==1){
        l.addName("洛阳");
        l.addlabel_ly();
        l.addhenan();
        resultCityCount ++ ;
    }
    if(ui->button40->isChecked()==1){
        l.addName("济南");
        l.addlabel_jn();
        l.addshandong();
        resultCityCount ++ ;
    }
    if(ui->button41->isChecked()==1){
        l.addName("青岛");
        l.addlabel_qd();
        l.addshandong();
        resultCityCount ++ ;
    }
    if(ui->button42->isChecked()==1){
        l.addName("烟台");
        l.addlabel_yt();
        l.addshandong();
        resultCityCount ++ ;
    }
    if(ui->button43->isChecked()==1){
        l.addName("日照");
        l.addlabel_rz();
        l.addshandong();
        resultCityCount ++ ;
    }
    if(ui->button50->isChecked()==1){
        l.addName("南昌");
        l.addlabel_nc();
        l.addjiangxi();
        resultCityCount ++ ;
    }
    if(ui->button51->isChecked()==1){
        l.addName("九江");
        l.addlabel_jj();
        l.addjiangxi();
        resultCityCount ++ ;
    }
    if(ui->button52->isChecked()==1){
        l.addName("上饶");
        l.addlabel_sr();
        l.addjiangxi();
        resultCityCount ++ ;
    }
    if(ui->button53->isChecked()==1){
        l.addName("赣州");
        l.addlabel_gz();
        l.addjiangxi();
        resultCityCount ++ ;
    }
    if(ui->button60->isChecked()==1){
        l.addName("成都");
        l.addlabel_cd();
        l.addsichuan();
        resultCityCount ++ ;
    }
    if(ui->button61->isChecked()==1){
        l.addName("绵阳");
        l.addlabel_my();
        l.addsichuan();
        resultCityCount ++ ;
    }
    if(ui->button62->isChecked()==1){
        l.addName("自贡");
        l.addlabel_zg();
        l.addsichuan();
        resultCityCount ++ ;
    }
    if(ui->button63->isChecked()==1){
        l.addName("泸州");
        l.addlabel_luzhou();
        l.addsichuan();
        resultCityCount ++ ;
    }
    if(ui->button80->isChecked()==1){
        l.addName("南京");
        l.addlabel_nj();
        l.addjiangsu();
        resultCityCount ++ ;
    }
    if(ui->button81->isChecked()==1){
        l.addName("徐州");
        l.addlabel_xz();
        l.addjiangsu();
        resultCityCount ++ ;
    }
    if(ui->button82->isChecked()==1){
        l.addName("扬州");
        l.addlabel_yz();
        l.addjiangsu();
        resultCityCount ++ ;
    }
    if(ui->button90->isChecked()==1){
        l.addName("杭州");
        l.addlabel_hz();
        l.addzhejiang();
        resultCityCount ++ ;
    }
    if(ui->button100->isChecked()==1){
        l.addName("合肥");
        l.addlabel_hf();
        l.addanhui();
        resultCityCount ++ ;
    }
    if(ui->button110->isChecked()==1){
        l.addName("哈尔滨");
        l.addlabel_heb();
        l.addheilongjiang();
        resultCityCount ++ ;
    }
    if(ui->button120->isChecked()==1){
        l.addName("长春");
        l.addlabel_cc();
        l.addjilin();
        resultCityCount ++ ;
    }
    if(ui->button130->isChecked()==1){
        l.addName("本溪");
        l.addlabel_bx();
        l.addliaoning();
        resultCityCount ++ ;
    }
    if(ui->button140->isChecked()==1){
        l.addName("呼和浩特");
        l.addlabel_hhht();
        l.addneimenggu();
        resultCityCount ++ ;
    }
    if(ui->button150->isChecked()==1){
        l.addName("乌鲁木齐");
        l.addlabel_wlmq();
        l.addxinjiang();
        resultCityCount ++ ;
    }
    if(ui->button03->isChecked()==1){
        l.addName("上海");
        l.addlabel_sh();
        l.addshanghai();
        resultCityCount ++ ;
    }
    if(ui->button05->isChecked()==1){
        l.addName("天津");
        l.addlabel_tj();
        l.addtianjin();
        resultCityCount ++ ;
    }
    if(ui->button160->isChecked()==1){
        l.addName("厦门");
        l.addlabel_xm();
        l.addfujian();
        resultCityCount ++ ;
    }
    if(ui->button161->isChecked()==1){
        l.addName("泉州");
        l.addlabel_qz();
        l.addfujian();
        resultCityCount ++ ;
    }
    if(ui->button162->isChecked()==1){
        l.addName("福州");
        l.addlabel_fz();
        l.addfujian();
        resultCityCount ++ ;
    }
    l.getResultCities(resultCityCount) ;
    resultCityCount = 0 ;
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
    else if(button==ui->button6){
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(button==ui->pushButton_11){
        ui->stackedWidget->setCurrentIndex(7);
    }
    else if(button==ui->pushButton_12)
        ui->stackedWidget->setCurrentIndex(8);
    else if(button==ui->pushButton_13)
        ui->stackedWidget->setCurrentIndex(9);
    else if(button==ui->pushButton_14)
        ui->stackedWidget->setCurrentIndex(10);
    else if(button==ui->pushButton_15)
        ui->stackedWidget->setCurrentIndex(11);
    else if(button==ui->pushButton_16)
        ui->stackedWidget->setCurrentIndex(12);
    else if(button==ui->pushButton_17)
        ui->stackedWidget->setCurrentIndex(13);
    else if(button==ui->pushButton_18)
        ui->stackedWidget->setCurrentIndex(14);
    else if(button==ui->pushButton_19)
        ui->stackedWidget->setCurrentIndex(15);
}


