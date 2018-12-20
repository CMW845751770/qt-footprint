/********************************************************************************
** Form generated from reading UI file 'lastwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASTWINDOW_H
#define UI_LASTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
            LastWindow->setObjectName(QStringLiteral("LastWindow"));
        LastWindow->resize(1223, 846);
        textBrowser = new QTextBrowser(LastWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(100, 760, 256, 71));
        label = new QLabel(LastWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 780, 71, 21));
        label_cq = new QLabel(LastWindow);
        label_cq->setObjectName(QStringLiteral("label_cq"));
        label_cq->setGeometry(QRect(700, 540, 61, 21));
        label_bj = new QLabel(LastWindow);
        label_bj->setObjectName(QStringLiteral("label_bj"));
        label_bj->setGeometry(QRect(840, 320, 54, 12));
        label_xg = new QLabel(LastWindow);
        label_xg->setObjectName(QStringLiteral("label_xg"));
        label_xg->setGeometry(QRect(840, 730, 54, 12));
        label_sh = new QLabel(LastWindow);
        label_sh->setObjectName(QStringLiteral("label_sh"));
        label_sh->setGeometry(QRect(980, 500, 54, 12));
        label_tj = new QLabel(LastWindow);
        label_tj->setObjectName(QStringLiteral("label_tj"));
        label_tj->setGeometry(QRect(870, 320, 54, 12));
        label_lz = new QLabel(LastWindow);
        label_lz->setObjectName(QStringLiteral("label_lz"));
        label_lz->setGeometry(QRect(600, 410, 54, 12));
        label_am = new QLabel(LastWindow);
        label_am->setObjectName(QStringLiteral("label_am"));
        label_am->setGeometry(QRect(850, 720, 54, 12));
        label_by = new QLabel(LastWindow);
        label_by->setObjectName(QStringLiteral("label_by"));
        label_by->setGeometry(QRect(640, 440, 54, 12));
        label_dh = new QLabel(LastWindow);
        label_dh->setObjectName(QStringLiteral("label_dh"));
        label_dh->setGeometry(QRect(480, 330, 54, 12));
        label_ts = new QLabel(LastWindow);
        label_ts->setObjectName(QStringLiteral("label_ts"));
        label_ts->setGeometry(QRect(900, 310, 54, 12));
        label_sjz = new QLabel(LastWindow);
        label_sjz->setObjectName(QStringLiteral("label_sjz"));
        label_sjz->setGeometry(QRect(790, 310, 54, 12));
        label_zjk = new QLabel(LastWindow);
        label_zjk->setObjectName(QStringLiteral("label_zjk"));
        label_zjk->setGeometry(QRect(800, 340, 54, 16));
        gs = new QLabel(LastWindow);
        gs->setObjectName(QStringLiteral("gs"));
        gs->setGeometry(QRect(410, 240, 411, 291));
        cq = new QLabel(LastWindow);
        cq->setObjectName(QStringLiteral("cq"));
        cq->setGeometry(QRect(660, 480, 181, 161));
        bj = new QLabel(LastWindow);
        bj->setObjectName(QStringLiteral("bj"));
        bj->setGeometry(QRect(850, 270, 121, 101));
        hb = new QLabel(LastWindow);
        hb->setObjectName(QStringLiteral("hb"));
        hb->setGeometry(QRect(820, 230, 171, 221));
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
        LastWindow->setWindowTitle(QApplication::translate("LastWindow", "Dialog", 0));
        label->setText(QApplication::translate("LastWindow", "\345\216\273\350\277\207\347\232\204\345\237\216\345\270\202\357\274\232", 0));
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
