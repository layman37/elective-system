/********************************************************************************
** Form generated from reading UI file 'StTable.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STTABLE_H
#define UI_STTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StTable
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *StTable)
    {
        if (StTable->objectName().isEmpty())
            StTable->setObjectName(QStringLiteral("StTable"));
        StTable->resize(674, 385);
        verticalLayoutWidget = new QWidget(StTable);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 671, 391));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(verticalLayoutWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(StTable);

        QMetaObject::connectSlotsByName(StTable);
    } // setupUi

    void retranslateUi(QWidget *StTable)
    {
        StTable->setWindowTitle(QApplication::translate("StTable", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StTable: public Ui_StTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STTABLE_H
