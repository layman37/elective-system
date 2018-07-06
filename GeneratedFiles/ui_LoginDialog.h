/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *login;
    QHBoxLayout *login_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *login_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QHBoxLayout *login_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QLabel *label_2;
    QLabel *label_3;
    QButtonGroup *BG;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(701, 481);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 230, 271, 121));
        login = new QGridLayout(layoutWidget);
        login->setObjectName(QStringLiteral("login"));
        login->setContentsMargins(0, 0, 0, 0);
        login_2 = new QHBoxLayout();
        login_2->setObjectName(QStringLiteral("login_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        login_2->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        login_2->addWidget(lineEdit);


        login->addLayout(login_2, 0, 0, 1, 1);

        login_4 = new QHBoxLayout();
        login_4->setObjectName(QStringLiteral("login_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        login_4->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        login_4->addWidget(pushButton);


        login->addLayout(login_4, 2, 0, 1, 1);

        login_3 = new QHBoxLayout();
        login_3->setObjectName(QStringLiteral("login_3"));
        radioButton_2 = new QRadioButton(layoutWidget);
        BG = new QButtonGroup(Dialog);
        BG->setObjectName(QStringLiteral("BG"));
        BG->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        login_3->addWidget(radioButton_2);

        radioButton = new QRadioButton(layoutWidget);
        BG->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        login_3->addWidget(radioButton);


        login->addLayout(login_3, 1, 0, 1, 1);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 210, 231, 20));
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 30, 571, 171));
        label_3->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/title.PNG);"));

        retranslateUi(Dialog);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog, SLOT(login_button()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\347\263\273\347\273\237\347\231\273\351\231\206", nullptr));
        label->setText(QApplication::translate("Dialog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "login", nullptr));
        radioButton_2->setText(QApplication::translate("Dialog", "\345\255\246\347\224\237", nullptr));
        radioButton->setText(QApplication::translate("Dialog", "\346\225\231\345\212\241\345\221\230", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\344\275\240\350\276\223\345\205\245\347\232\204\347\224\250\346\210\267\345\220\215\344\270\215\346\255\243\347\241\256\357\274\214\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
