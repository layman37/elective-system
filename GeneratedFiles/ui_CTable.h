/********************************************************************************
** Form generated from reading UI file 'CTable.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTABLE_H
#define UI_CTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTable
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *CTable)
    {
        if (CTable->objectName().isEmpty())
            CTable->setObjectName(QStringLiteral("CTable"));
        CTable->resize(660, 419);
        horizontalLayoutWidget = new QWidget(CTable);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 661, 421));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(horizontalLayoutWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        horizontalLayout->addWidget(tableWidget);


        retranslateUi(CTable);

        QMetaObject::connectSlotsByName(CTable);
    } // setupUi

    void retranslateUi(QWidget *CTable)
    {
        CTable->setWindowTitle(QApplication::translate("CTable", "\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTable: public Ui_CTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTABLE_H
