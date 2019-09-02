/********************************************************************************
** Form generated from reading UI file 'subwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBWINDOW_H
#define UI_SUBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_7;
    QGridLayout *gridLayout_3;
    QCheckBox *button00;
    QCheckBox *button01;
    QCheckBox *button02;
    QCheckBox *button03;
    QCheckBox *button04;
    QCheckBox *button05;
    QWidget *page;
    QHBoxLayout *horizontalLayout;
    QCheckBox *button10;
    QCheckBox *button11;
    QCheckBox *button12;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *button20;
    QCheckBox *button21;
    QCheckBox *button22;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *button30;
    QCheckBox *button31;
    QCheckBox *button32;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *button40;
    QCheckBox *button41;
    QCheckBox *button42;
    QCheckBox *button43;
    QWidget *page_5;
    QGridLayout *gridLayout;
    QCheckBox *button50;
    QCheckBox *button51;
    QCheckBox *button52;
    QCheckBox *button53;
    QWidget *page_6;
    QGridLayout *gridLayout_2;
    QCheckBox *button60;
    QCheckBox *button61;
    QCheckBox *button62;
    QCheckBox *button63;
    QWidget *page_8;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *button80;
    QCheckBox *button81;
    QCheckBox *button82;
    QWidget *page_9;
    QCheckBox *button90;
    QWidget *page_10;
    QCheckBox *button100;
    QWidget *page_11;
    QCheckBox *button110;
    QWidget *page_12;
    QCheckBox *button120;
    QWidget *page_13;
    QCheckBox *button130;
    QWidget *page_14;
    QCheckBox *button140;
    QWidget *page_15;
    QCheckBox *button150;
    QWidget *page_16;
    QCheckBox *button161;
    QCheckBox *button160;
    QCheckBox *button162;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *button0;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;

    void setupUi(QDialog *SubWindow)
    {
        if (SubWindow->objectName().isEmpty())
            SubWindow->setObjectName(QString::fromUtf8("SubWindow"));
        SubWindow->resize(737, 531);
        SubWindow->setStyleSheet(QString::fromUtf8("QScrollBar:vertical\n"
"{\n"
"    margin:30px 0px 30px 0px;\n"
"    background-color:#0bb4b5;\n"
"    border: 0px;\n"
"    width:30px;    \n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background-color:#1ca9b3;\n"
"    width:30px;\n"
"    border-radius:7px;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    background-color:#0bb4b5;\n"
"    width:30px;\n"
"    border-radius:7px;\n"
"}\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"    subcontrol-origin: margin;\n"
"    border:1px solid rgb(240,241,239);\n"
"    height:30px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"   subcontrol-origin: margin;\n"
"    border:1px solid rgb(240,241,239);\n"
"    height:30px;\n"
"}\n"
"QScrollBar::add-page:vertical\n"
"{\n"
"  background-color:rgb(240,241,239);\n"
"}\n"
"\n"
"QScrollBar::sub-page:vertical\n"
"{\n"
"    background-color:rgb(240,241,239); \n"
"}\n"
"QScrollBar::up-arrow:vertical\n"
"{\n"
"  border:0px;\n"
"  width:30px;\n"
"  height:30px;\n"
"  border-image:url(\":/Icons/up_Arrow.png\");\n"
""
                        "}\n"
"\n"
"QScrollBar::up-arrow:vertical:pressed\n"
"{\n"
"    border:0px;\n"
"    width:30px;\n"
"    height:30px;\n"
"    border-image:url(\":/Icons/up_Arrow_down.png\");\n"
"}\n"
"QScrollBar::down-arrow:vertical\n"
"{\n"
"    border:0px;\n"
"    width:30px;\n"
"    height:30px;\n"
"    border-image:url(\":/Icons/down_Arrow.png\");\n"
"}\n"
"\n"
"QScrollBar::down-arrow:vertical:pressed \n"
"{\n"
"    border:0px;\n"
"    width:30px;\n"
"    height:30px;\n"
"    border-image:url(\":/Icons/down_Arrow_down.png\");\n"
"}"));
        stackedWidget = new QStackedWidget(SubWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(240, 60, 500, 451));
        stackedWidget->setMinimumSize(QSize(500, 451));
        stackedWidget->setMaximumSize(QSize(741, 451));
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        gridLayout_3 = new QGridLayout(page_7);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        button00 = new QCheckBox(page_7);
        button00->setObjectName(QString::fromUtf8("button00"));
        button00->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Arial\";"));

        gridLayout_3->addWidget(button00, 0, 0, 1, 1);

        button01 = new QCheckBox(page_7);
        button01->setObjectName(QString::fromUtf8("button01"));

        gridLayout_3->addWidget(button01, 0, 1, 1, 1);

        button02 = new QCheckBox(page_7);
        button02->setObjectName(QString::fromUtf8("button02"));

        gridLayout_3->addWidget(button02, 0, 2, 1, 1);

        button03 = new QCheckBox(page_7);
        button03->setObjectName(QString::fromUtf8("button03"));

        gridLayout_3->addWidget(button03, 0, 3, 1, 1);

        button04 = new QCheckBox(page_7);
        button04->setObjectName(QString::fromUtf8("button04"));

        gridLayout_3->addWidget(button04, 0, 4, 1, 1);

        button05 = new QCheckBox(page_7);
        button05->setObjectName(QString::fromUtf8("button05"));

        gridLayout_3->addWidget(button05, 0, 5, 1, 1);

        stackedWidget->addWidget(page_7);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout = new QHBoxLayout(page);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        button10 = new QCheckBox(page);
        button10->setObjectName(QString::fromUtf8("button10"));

        horizontalLayout->addWidget(button10);

        button11 = new QCheckBox(page);
        button11->setObjectName(QString::fromUtf8("button11"));

        horizontalLayout->addWidget(button11);

        button12 = new QCheckBox(page);
        button12->setObjectName(QString::fromUtf8("button12"));

        horizontalLayout->addWidget(button12);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        horizontalLayout_2 = new QHBoxLayout(page_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        button20 = new QCheckBox(page_2);
        button20->setObjectName(QString::fromUtf8("button20"));

        horizontalLayout_2->addWidget(button20);

        button21 = new QCheckBox(page_2);
        button21->setObjectName(QString::fromUtf8("button21"));

        horizontalLayout_2->addWidget(button21);

        button22 = new QCheckBox(page_2);
        button22->setObjectName(QString::fromUtf8("button22"));

        horizontalLayout_2->addWidget(button22);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        horizontalLayout_4 = new QHBoxLayout(page_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        button30 = new QCheckBox(page_3);
        button30->setObjectName(QString::fromUtf8("button30"));

        horizontalLayout_4->addWidget(button30);

        button31 = new QCheckBox(page_3);
        button31->setObjectName(QString::fromUtf8("button31"));

        horizontalLayout_4->addWidget(button31);

        button32 = new QCheckBox(page_3);
        button32->setObjectName(QString::fromUtf8("button32"));

        horizontalLayout_4->addWidget(button32);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        horizontalLayout_3 = new QHBoxLayout(page_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        button40 = new QCheckBox(page_4);
        button40->setObjectName(QString::fromUtf8("button40"));

        horizontalLayout_3->addWidget(button40);

        button41 = new QCheckBox(page_4);
        button41->setObjectName(QString::fromUtf8("button41"));

        horizontalLayout_3->addWidget(button41);

        button42 = new QCheckBox(page_4);
        button42->setObjectName(QString::fromUtf8("button42"));

        horizontalLayout_3->addWidget(button42);

        button43 = new QCheckBox(page_4);
        button43->setObjectName(QString::fromUtf8("button43"));

        horizontalLayout_3->addWidget(button43);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout = new QGridLayout(page_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        button50 = new QCheckBox(page_5);
        button50->setObjectName(QString::fromUtf8("button50"));

        gridLayout->addWidget(button50, 0, 0, 1, 1);

        button51 = new QCheckBox(page_5);
        button51->setObjectName(QString::fromUtf8("button51"));

        gridLayout->addWidget(button51, 0, 1, 1, 1);

        button52 = new QCheckBox(page_5);
        button52->setObjectName(QString::fromUtf8("button52"));

        gridLayout->addWidget(button52, 0, 2, 1, 1);

        button53 = new QCheckBox(page_5);
        button53->setObjectName(QString::fromUtf8("button53"));

        gridLayout->addWidget(button53, 0, 3, 1, 1);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        gridLayout_2 = new QGridLayout(page_6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        button60 = new QCheckBox(page_6);
        button60->setObjectName(QString::fromUtf8("button60"));

        gridLayout_2->addWidget(button60, 0, 0, 1, 1);

        button61 = new QCheckBox(page_6);
        button61->setObjectName(QString::fromUtf8("button61"));

        gridLayout_2->addWidget(button61, 0, 1, 1, 1);

        button62 = new QCheckBox(page_6);
        button62->setObjectName(QString::fromUtf8("button62"));

        gridLayout_2->addWidget(button62, 0, 2, 1, 1);

        button63 = new QCheckBox(page_6);
        button63->setObjectName(QString::fromUtf8("button63"));

        gridLayout_2->addWidget(button63, 0, 3, 1, 1);

        stackedWidget->addWidget(page_6);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        horizontalLayout_9 = new QHBoxLayout(page_8);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        button80 = new QCheckBox(page_8);
        button80->setObjectName(QString::fromUtf8("button80"));

        horizontalLayout_9->addWidget(button80);

        button81 = new QCheckBox(page_8);
        button81->setObjectName(QString::fromUtf8("button81"));

        horizontalLayout_9->addWidget(button81);

        button82 = new QCheckBox(page_8);
        button82->setObjectName(QString::fromUtf8("button82"));

        horizontalLayout_9->addWidget(button82);

        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        button90 = new QCheckBox(page_9);
        button90->setObjectName(QString::fromUtf8("button90"));
        button90->setGeometry(QRect(173, 216, 155, 21));
        stackedWidget->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        button100 = new QCheckBox(page_10);
        button100->setObjectName(QString::fromUtf8("button100"));
        button100->setGeometry(QRect(173, 216, 155, 19));
        stackedWidget->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QString::fromUtf8("page_11"));
        button110 = new QCheckBox(page_11);
        button110->setObjectName(QString::fromUtf8("button110"));
        button110->setGeometry(QRect(173, 216, 155, 19));
        stackedWidget->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QString::fromUtf8("page_12"));
        button120 = new QCheckBox(page_12);
        button120->setObjectName(QString::fromUtf8("button120"));
        button120->setGeometry(QRect(173, 216, 155, 19));
        stackedWidget->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName(QString::fromUtf8("page_13"));
        button130 = new QCheckBox(page_13);
        button130->setObjectName(QString::fromUtf8("button130"));
        button130->setGeometry(QRect(173, 216, 155, 19));
        stackedWidget->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName(QString::fromUtf8("page_14"));
        button140 = new QCheckBox(page_14);
        button140->setObjectName(QString::fromUtf8("button140"));
        button140->setGeometry(QRect(173, 216, 155, 19));
        stackedWidget->addWidget(page_14);
        page_15 = new QWidget();
        page_15->setObjectName(QString::fromUtf8("page_15"));
        button150 = new QCheckBox(page_15);
        button150->setObjectName(QString::fromUtf8("button150"));
        button150->setGeometry(QRect(173, 216, 155, 19));
        stackedWidget->addWidget(page_15);
        page_16 = new QWidget();
        page_16->setObjectName(QString::fromUtf8("page_16"));
        button161 = new QCheckBox(page_16);
        button161->setObjectName(QString::fromUtf8("button161"));
        button161->setGeometry(QRect(173, 216, 155, 19));
        button160 = new QCheckBox(page_16);
        button160->setObjectName(QString::fromUtf8("button160"));
        button160->setGeometry(QRect(11, 216, 155, 19));
        button162 = new QCheckBox(page_16);
        button162->setObjectName(QString::fromUtf8("button162"));
        button162->setGeometry(QRect(334, 216, 155, 19));
        stackedWidget->addWidget(page_16);
        scrollArea = new QScrollArea(SubWindow);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 161, 531));
        scrollArea->setStyleSheet(QString::fromUtf8("background-image: url(:/png/image/subwindow.jpg);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -33, 129, 575));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        button0 = new QPushButton(scrollAreaWidgetContents);
        button0->setObjectName(QString::fromUtf8("button0"));

        verticalLayout->addWidget(button0);

        button1 = new QPushButton(scrollAreaWidgetContents);
        button1->setObjectName(QString::fromUtf8("button1"));

        verticalLayout->addWidget(button1);

        button2 = new QPushButton(scrollAreaWidgetContents);
        button2->setObjectName(QString::fromUtf8("button2"));

        verticalLayout->addWidget(button2);

        button3 = new QPushButton(scrollAreaWidgetContents);
        button3->setObjectName(QString::fromUtf8("button3"));

        verticalLayout->addWidget(button3);

        button4 = new QPushButton(scrollAreaWidgetContents);
        button4->setObjectName(QString::fromUtf8("button4"));

        verticalLayout->addWidget(button4);

        button5 = new QPushButton(scrollAreaWidgetContents);
        button5->setObjectName(QString::fromUtf8("button5"));

        verticalLayout->addWidget(button5);

        button6 = new QPushButton(scrollAreaWidgetContents);
        button6->setObjectName(QString::fromUtf8("button6"));

        verticalLayout->addWidget(button6);

        pushButton_11 = new QPushButton(scrollAreaWidgetContents);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        verticalLayout->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(scrollAreaWidgetContents);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        verticalLayout->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(scrollAreaWidgetContents);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        verticalLayout->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(scrollAreaWidgetContents);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        verticalLayout->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(scrollAreaWidgetContents);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        verticalLayout->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(scrollAreaWidgetContents);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));

        verticalLayout->addWidget(pushButton_16);

        pushButton_17 = new QPushButton(scrollAreaWidgetContents);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));

        verticalLayout->addWidget(pushButton_17);

        pushButton_18 = new QPushButton(scrollAreaWidgetContents);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));

        verticalLayout->addWidget(pushButton_18);

        pushButton_19 = new QPushButton(scrollAreaWidgetContents);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        verticalLayout->addWidget(pushButton_19);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(SubWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SubWindow);
    } // setupUi

    void retranslateUi(QDialog *SubWindow)
    {
        SubWindow->setWindowTitle(QCoreApplication::translate("SubWindow", "Dialog", nullptr));
        button00->setText(QCoreApplication::translate("SubWindow", "\351\207\215\345\272\206", nullptr));
        button01->setText(QCoreApplication::translate("SubWindow", "\345\214\227\344\272\254", nullptr));
        button02->setText(QCoreApplication::translate("SubWindow", "\351\246\231\346\270\257", nullptr));
        button03->setText(QCoreApplication::translate("SubWindow", "\344\270\212\346\265\267", nullptr));
        button04->setText(QCoreApplication::translate("SubWindow", "\346\276\263\351\227\250", nullptr));
        button05->setText(QCoreApplication::translate("SubWindow", "\345\244\251\346\264\245", nullptr));
        button10->setText(QCoreApplication::translate("SubWindow", "\345\205\260\345\267\236", nullptr));
        button11->setText(QCoreApplication::translate("SubWindow", "\347\231\275\351\223\266", nullptr));
        button12->setText(QCoreApplication::translate("SubWindow", "\346\225\246\347\205\214", nullptr));
        button20->setText(QCoreApplication::translate("SubWindow", "\347\237\263\345\256\266\345\272\204", nullptr));
        button21->setText(QCoreApplication::translate("SubWindow", "\345\224\220\345\261\261", nullptr));
        button22->setText(QCoreApplication::translate("SubWindow", "\345\274\240\345\256\266\345\217\243", nullptr));
        button30->setText(QCoreApplication::translate("SubWindow", "\351\203\221\345\267\236", nullptr));
        button31->setText(QCoreApplication::translate("SubWindow", "\345\274\200\345\260\201", nullptr));
        button32->setText(QCoreApplication::translate("SubWindow", "\346\264\233\351\230\263", nullptr));
        button40->setText(QCoreApplication::translate("SubWindow", "\346\265\216\345\215\227", nullptr));
        button41->setText(QCoreApplication::translate("SubWindow", "\351\235\222\345\262\233", nullptr));
        button42->setText(QCoreApplication::translate("SubWindow", "\347\203\237\345\217\260", nullptr));
        button43->setText(QCoreApplication::translate("SubWindow", "\346\227\245\347\205\247", nullptr));
        button50->setText(QCoreApplication::translate("SubWindow", "\345\215\227\346\230\214", nullptr));
        button51->setText(QCoreApplication::translate("SubWindow", "\344\271\235\346\261\237", nullptr));
        button52->setText(QCoreApplication::translate("SubWindow", "\344\270\212\351\245\266", nullptr));
        button53->setText(QCoreApplication::translate("SubWindow", "\350\265\243\345\267\236", nullptr));
        button60->setText(QCoreApplication::translate("SubWindow", "\346\210\220\351\203\275", nullptr));
        button61->setText(QCoreApplication::translate("SubWindow", "\347\273\265\351\230\263", nullptr));
        button62->setText(QCoreApplication::translate("SubWindow", "\350\207\252\350\264\241", nullptr));
        button63->setText(QCoreApplication::translate("SubWindow", "\346\263\270\345\267\236", nullptr));
        button80->setText(QCoreApplication::translate("SubWindow", "\345\215\227\344\272\254", nullptr));
        button81->setText(QCoreApplication::translate("SubWindow", "\345\276\220\345\267\236", nullptr));
        button82->setText(QCoreApplication::translate("SubWindow", "\346\211\254\345\267\236", nullptr));
        button90->setText(QCoreApplication::translate("SubWindow", "\346\235\255\345\267\236", nullptr));
        button100->setText(QCoreApplication::translate("SubWindow", "\345\220\210\350\202\245", nullptr));
        button110->setText(QCoreApplication::translate("SubWindow", "\345\223\210\345\260\224\346\273\250", nullptr));
        button120->setText(QCoreApplication::translate("SubWindow", "\351\225\277\346\230\245", nullptr));
        button130->setText(QCoreApplication::translate("SubWindow", "\346\234\254\346\272\252", nullptr));
        button140->setText(QCoreApplication::translate("SubWindow", "\345\221\274\345\222\214\346\265\251\347\211\271", nullptr));
        button150->setText(QCoreApplication::translate("SubWindow", "\344\271\214\351\262\201\346\234\250\351\275\220", nullptr));
        button161->setText(QCoreApplication::translate("SubWindow", "\346\263\211\345\267\236", nullptr));
        button160->setText(QCoreApplication::translate("SubWindow", "\345\216\246\351\227\250", nullptr));
        button162->setText(QCoreApplication::translate("SubWindow", "\347\246\217\345\267\236", nullptr));
        button0->setText(QCoreApplication::translate("SubWindow", "\347\203\255\351\227\250", nullptr));
        button1->setText(QCoreApplication::translate("SubWindow", "\347\224\230\350\202\203", nullptr));
        button2->setText(QCoreApplication::translate("SubWindow", "\346\262\263\345\214\227", nullptr));
        button3->setText(QCoreApplication::translate("SubWindow", "\346\262\263\345\215\227", nullptr));
        button4->setText(QCoreApplication::translate("SubWindow", "\345\261\261\344\270\234", nullptr));
        button5->setText(QCoreApplication::translate("SubWindow", "\346\261\237\350\245\277", nullptr));
        button6->setText(QCoreApplication::translate("SubWindow", "\345\233\233\345\267\235", nullptr));
        pushButton_11->setText(QCoreApplication::translate("SubWindow", "\346\261\237\350\213\217", nullptr));
        pushButton_12->setText(QCoreApplication::translate("SubWindow", "\346\265\231\346\261\237", nullptr));
        pushButton_13->setText(QCoreApplication::translate("SubWindow", "\345\256\211\345\276\275", nullptr));
        pushButton_14->setText(QCoreApplication::translate("SubWindow", "\351\273\221\351\276\231\346\261\237", nullptr));
        pushButton_15->setText(QCoreApplication::translate("SubWindow", "\345\220\211\346\236\227", nullptr));
        pushButton_16->setText(QCoreApplication::translate("SubWindow", "\350\276\275\345\256\201", nullptr));
        pushButton_17->setText(QCoreApplication::translate("SubWindow", "\345\206\205\350\222\231\345\217\244", nullptr));
        pushButton_18->setText(QCoreApplication::translate("SubWindow", "\346\226\260\347\226\206", nullptr));
        pushButton_19->setText(QCoreApplication::translate("SubWindow", "\347\246\217\345\273\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubWindow: public Ui_SubWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBWINDOW_H
