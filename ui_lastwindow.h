/********************************************************************************
** Form generated from reading UI file 'lastwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASTWINDOW_H
#define UI_LASTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_LastWindow
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_cq;
    QLabel *label_bj;
    QLabel *label_xg;
    QLabel *label_sh;
    QLabel *label_tj;
    QLabel *label_lz;
    QLabel *label_am;
    QLabel *label_by;
    QLabel *label_dh;
    QLabel *label_ts;
    QLabel *label_sjz;
    QLabel *label_zjk;
    QLabel *gs;
    QLabel *cq;
    QLabel *bj;
    QLabel *hb;

    void setupUi(QDialog *LastWindow)
    {
        if (LastWindow->objectName().isEmpty())
            LastWindow->setObjectName(QString::fromUtf8("LastWindow"));
        LastWindow->resize(1223, 846);
        textBrowser = new QTextBrowser(LastWindow);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(100, 760, 256, 71));
        label = new QLabel(LastWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 780, 71, 21));
        label_cq = new QLabel(LastWindow);
        label_cq->setObjectName(QString::fromUtf8("label_cq"));
        label_cq->setGeometry(QRect(700, 540, 61, 21));
        label_bj = new QLabel(LastWindow);
        label_bj->setObjectName(QString::fromUtf8("label_bj"));
        label_bj->setGeometry(QRect(840, 320, 54, 12));
        label_xg = new QLabel(LastWindow);
        label_xg->setObjectName(QString::fromUtf8("label_xg"));
        label_xg->setGeometry(QRect(840, 730, 54, 12));
        label_sh = new QLabel(LastWindow);
        label_sh->setObjectName(QString::fromUtf8("label_sh"));
        label_sh->setGeometry(QRect(980, 500, 54, 12));
        label_tj = new QLabel(LastWindow);
        label_tj->setObjectName(QString::fromUtf8("label_tj"));
        label_tj->setGeometry(QRect(870, 320, 54, 12));
        label_lz = new QLabel(LastWindow);
        label_lz->setObjectName(QString::fromUtf8("label_lz"));
        label_lz->setGeometry(QRect(600, 410, 54, 12));
        label_am = new QLabel(LastWindow);
        label_am->setObjectName(QString::fromUtf8("label_am"));
        label_am->setGeometry(QRect(850, 720, 54, 12));
        label_by = new QLabel(LastWindow);
        label_by->setObjectName(QString::fromUtf8("label_by"));
        label_by->setGeometry(QRect(640, 440, 54, 12));
        label_dh = new QLabel(LastWindow);
        label_dh->setObjectName(QString::fromUtf8("label_dh"));
        label_dh->setGeometry(QRect(480, 330, 54, 12));
        label_ts = new QLabel(LastWindow);
        label_ts->setObjectName(QString::fromUtf8("label_ts"));
        label_ts->setGeometry(QRect(900, 310, 54, 12));
        label_sjz = new QLabel(LastWindow);
        label_sjz->setObjectName(QString::fromUtf8("label_sjz"));
        label_sjz->setGeometry(QRect(790, 310, 54, 12));
        label_zjk = new QLabel(LastWindow);
        label_zjk->setObjectName(QString::fromUtf8("label_zjk"));
        label_zjk->setGeometry(QRect(800, 340, 54, 16));
        gs = new QLabel(LastWindow);
        gs->setObjectName(QString::fromUtf8("gs"));
        gs->setGeometry(QRect(410, 240, 411, 291));
        cq = new QLabel(LastWindow);
        cq->setObjectName(QString::fromUtf8("cq"));
        cq->setGeometry(QRect(660, 480, 181, 161));
        bj = new QLabel(LastWindow);
        bj->setObjectName(QString::fromUtf8("bj"));
        bj->setGeometry(QRect(817, 204, 121, 101));
        hb = new QLabel(LastWindow);
        hb->setObjectName(QString::fromUtf8("hb"));
        hb->setGeometry(QRect(785, 162, 171, 221));
        hb->raise();
        bj->raise();
        cq->raise();
        gs->raise();
        textBrowser->raise();
        label->raise();
        label_cq->raise();
        label_bj->raise();
        label_xg->raise();
        label_sh->raise();
        label_tj->raise();
        label_am->raise();
        label_by->raise();
        label_dh->raise();
        label_ts->raise();
        label_sjz->raise();
        label_zjk->raise();
        label_lz->raise();

        retranslateUi(LastWindow);

        QMetaObject::connectSlotsByName(LastWindow);
    } // setupUi

    void retranslateUi(QDialog *LastWindow)
    {
        LastWindow->setWindowTitle(QCoreApplication::translate("LastWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LastWindow", "\345\216\273\350\277\207\347\232\204\345\237\216\345\270\202\357\274\232", nullptr));
        label_cq->setText(QString());
        label_bj->setText(QString());
        label_xg->setText(QString());
        label_sh->setText(QString());
        label_tj->setText(QString());
        label_lz->setText(QString());
        label_am->setText(QString());
        label_by->setText(QString());
        label_dh->setText(QString());
        label_ts->setText(QString());
        label_sjz->setText(QString());
        label_zjk->setText(QString());
        gs->setText(QString());
        cq->setText(QString());
        bj->setText(QString());
        hb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LastWindow: public Ui_LastWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASTWINDOW_H
