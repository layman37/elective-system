/********************************************************************************
** Form generated from reading UI file 'SC.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SC_H
#define UI_SC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SC
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_no;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_error;
    QLabel *label_success;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SC)
    {
        if (SC->objectName().isEmpty())
            SC->setObjectName(QStringLiteral("SC"));
        SC->resize(701, 495);
        centralwidget = new QWidget(SC);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 80, 191, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        label_name = new QLabel(layoutWidget);
        label_name->setObjectName(QStringLiteral("label_name"));

        horizontalLayout->addWidget(label_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        label_no = new QLabel(layoutWidget);
        label_no->setObjectName(QStringLiteral("label_no"));
        label_no->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_no);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 160, 361, 291));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        tableWidget = new QTableWidget(verticalLayoutWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(410, 180, 227, 231));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_5);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_error = new QLabel(layoutWidget1);
        label_error->setObjectName(QStringLiteral("label_error"));
        label_error->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_5->addWidget(label_error);

        label_success = new QLabel(layoutWidget1);
        label_success->setObjectName(QStringLiteral("label_success"));
        label_success->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        horizontalLayout_5->addWidget(label_success);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 10, 161, 141));
        label_4->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/frog.jpg);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(500, 110, 111, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 420, 81, 23));
        SC->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SC);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 701, 23));
        SC->setMenuBar(menubar);
        statusbar = new QStatusBar(SC);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SC->setStatusBar(statusbar);

        retranslateUi(SC);
        QObject::connect(pushButton, SIGNAL(clicked()), SC, SLOT(course_button()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), SC, SLOT(sc_button()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), SC, SLOT(back_button()));

        QMetaObject::connectSlotsByName(SC);
    } // setupUi

    void retranslateUi(QMainWindow *SC)
    {
        SC->setWindowTitle(QApplication::translate("SC", "\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        label->setText(QApplication::translate("SC", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_name->setText(QString());
        label_3->setText(QApplication::translate("SC", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_no->setText(QString());
        label_2->setText(QApplication::translate("SC", "  \345\267\262\351\200\211\350\257\276\347\250\213\357\274\232", nullptr));
        label_5->setText(QApplication::translate("SC", "\350\276\223\345\205\245\350\257\276\347\250\213\347\274\226\345\217\267\357\274\232", nullptr));
        label_error->setText(QApplication::translate("SC", "\351\200\211\350\257\276\345\244\261\350\264\245", nullptr));
        label_success->setText(QApplication::translate("SC", "\351\200\211\350\257\276\346\210\220\345\212\237", nullptr));
        pushButton_2->setText(QApplication::translate("SC", "\351\200\211\350\257\276", nullptr));
        label_4->setText(QString());
        pushButton->setText(QApplication::translate("SC", "\346\237\245\347\234\213\350\257\276\347\250\213\345\210\227\350\241\250", nullptr));
        pushButton_3->setText(QApplication::translate("SC", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SC: public Ui_SC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SC_H
