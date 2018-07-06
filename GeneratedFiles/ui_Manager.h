/********************************************************************************
** Form generated from reading UI file 'Manager.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manager
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_sno;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_sdept;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_sname;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_sage;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEdit_credit;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QLineEdit *lineEdit_cpno;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *lineEdit_cname;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *lineEdit_cno;
    QSpacerItem *horizontalSpacer_6;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_insert;
    QRadioButton *radioButton_update;
    QRadioButton *radioButton_delete;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_10;
    QLabel *label_11;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QToolBar *toolBar;
    QButtonGroup *SG;
    QButtonGroup *BG;

    void setupUi(QMainWindow *Manager)
    {
        if (Manager->objectName().isEmpty())
            Manager->setObjectName(QStringLiteral("Manager"));
        Manager->resize(650, 481);
        centralWidget = new QWidget(Manager);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 30, 381, 311));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        gridLayoutWidget = new QWidget(tab_1);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 351, 271));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_sno = new QLineEdit(gridLayoutWidget);
        lineEdit_sno->setObjectName(QStringLiteral("lineEdit_sno"));

        horizontalLayout_2->addWidget(lineEdit_sno);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEdit_sdept = new QLineEdit(gridLayoutWidget);
        lineEdit_sdept->setObjectName(QStringLiteral("lineEdit_sdept"));

        horizontalLayout_6->addWidget(lineEdit_sdept);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_6, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_sname = new QLineEdit(gridLayoutWidget);
        lineEdit_sname->setObjectName(QStringLiteral("lineEdit_sname"));

        horizontalLayout_3->addWidget(lineEdit_sname);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_sage = new QLineEdit(gridLayoutWidget);
        lineEdit_sage->setObjectName(QStringLiteral("lineEdit_sage"));

        horizontalLayout_5->addWidget(lineEdit_sage);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        radioButton_male = new QRadioButton(gridLayoutWidget);
        SG = new QButtonGroup(Manager);
        SG->setObjectName(QStringLiteral("SG"));
        SG->addButton(radioButton_male);
        radioButton_male->setObjectName(QStringLiteral("radioButton_male"));

        horizontalLayout_4->addWidget(radioButton_male);

        radioButton_female = new QRadioButton(gridLayoutWidget);
        SG->addButton(radioButton_female);
        radioButton_female->setObjectName(QStringLiteral("radioButton_female"));

        horizontalLayout_4->addWidget(radioButton_female);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayoutWidget_2 = new QWidget(tab_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 10, 341, 271));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        lineEdit_credit = new QLineEdit(gridLayoutWidget_2);
        lineEdit_credit->setObjectName(QStringLiteral("lineEdit_credit"));

        horizontalLayout_8->addWidget(lineEdit_credit);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        gridLayout_2->addLayout(horizontalLayout_8, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_10->addWidget(label_9);

        lineEdit_cpno = new QLineEdit(gridLayoutWidget_2);
        lineEdit_cpno->setObjectName(QStringLiteral("lineEdit_cpno"));

        horizontalLayout_10->addWidget(lineEdit_cpno);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);


        gridLayout_2->addLayout(horizontalLayout_10, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);

        lineEdit_cname = new QLineEdit(gridLayoutWidget_2);
        lineEdit_cname->setObjectName(QStringLiteral("lineEdit_cname"));

        horizontalLayout_9->addWidget(lineEdit_cname);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);


        gridLayout_2->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        lineEdit_cno = new QLineEdit(gridLayoutWidget_2);
        lineEdit_cno->setObjectName(QStringLiteral("lineEdit_cno"));

        horizontalLayout_7->addWidget(lineEdit_cno);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        gridLayout_2->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(430, 60, 160, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_insert = new QRadioButton(verticalLayoutWidget);
        BG = new QButtonGroup(Manager);
        BG->setObjectName(QStringLiteral("BG"));
        BG->addButton(radioButton_insert);
        radioButton_insert->setObjectName(QStringLiteral("radioButton_insert"));

        verticalLayout->addWidget(radioButton_insert);

        radioButton_update = new QRadioButton(verticalLayoutWidget);
        BG->addButton(radioButton_update);
        radioButton_update->setObjectName(QStringLiteral("radioButton_update"));

        verticalLayout->addWidget(radioButton_update);

        radioButton_delete = new QRadioButton(verticalLayoutWidget);
        BG->addButton(radioButton_delete);
        radioButton_delete->setObjectName(QStringLiteral("radioButton_delete"));

        verticalLayout->addWidget(radioButton_delete);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(270, 20, 54, 12));
        label_10->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(270, 20, 54, 12));
        label_11->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));
        Manager->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Manager);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 23));
        Manager->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Manager);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Manager->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(Manager);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Manager->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(Manager);
        QObject::connect(pushButton, SIGNAL(clicked()), Manager, SLOT(back_button()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Manager, SLOT(apply_button()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Manager, SLOT(stlist_button()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), Manager, SLOT(clist_button()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Manager);
    } // setupUi

    void retranslateUi(QMainWindow *Manager)
    {
        Manager->setWindowTitle(QApplication::translate("Manager", "\347\256\241\347\220\206\345\221\230", nullptr));
        label->setText(QApplication::translate("Manager", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_5->setText(QApplication::translate("Manager", "\351\231\242\347\263\273\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Manager", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QApplication::translate("Manager", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_3->setText(QApplication::translate("Manager", "\346\200\247\345\210\253\357\274\232", nullptr));
        radioButton_male->setText(QApplication::translate("Manager", "\347\224\267", nullptr));
        radioButton_female->setText(QApplication::translate("Manager", "\345\245\263", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("Manager", "\345\255\246\347\224\237", nullptr));
        label_7->setText(QApplication::translate("Manager", "\350\257\276\347\250\213\350\257\204\345\210\206\357\274\232", nullptr));
        label_9->setText(QApplication::translate("Manager", "\345\205\210\350\241\214\350\257\276\347\250\213\357\274\232", nullptr));
        label_8->setText(QApplication::translate("Manager", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_6->setText(QApplication::translate("Manager", "\350\257\276\347\250\213\347\274\226\345\217\267\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Manager", "\350\257\276\347\250\213", nullptr));
        radioButton_insert->setText(QApplication::translate("Manager", "\345\242\236\345\212\240", nullptr));
        radioButton_update->setText(QApplication::translate("Manager", "\344\277\256\346\224\271", nullptr));
        radioButton_delete->setText(QApplication::translate("Manager", "\345\210\240\351\231\244", nullptr));
        pushButton_3->setText(QApplication::translate("Manager", "\346\230\276\347\244\272\345\255\246\347\224\237\350\256\260\345\275\225", nullptr));
        pushButton_4->setText(QApplication::translate("Manager", "\346\230\276\347\244\272\350\257\276\347\250\213\350\256\260\345\275\225", nullptr));
        pushButton_2->setText(QApplication::translate("Manager", "\345\272\224\347\224\250", nullptr));
        pushButton->setText(QApplication::translate("Manager", "\350\277\224\345\233\236", nullptr));
        label_10->setText(QApplication::translate("Manager", "\346\223\215\344\275\234\345\244\261\350\264\245", nullptr));
        label_11->setText(QApplication::translate("Manager", "\346\223\215\344\275\234\346\210\220\345\212\237", nullptr));
        toolBar->setWindowTitle(QApplication::translate("Manager", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manager: public Ui_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
