/********************************************************************************
** Form generated from reading UI file 'armotization.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARMOTIZATION_H
#define UI_ARMOTIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_armotization
{
public:
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QDialog *armotization)
    {
        if (armotization->objectName().isEmpty())
            armotization->setObjectName(QStringLiteral("armotization"));
        armotization->resize(470, 366);
        tableWidget = new QTableWidget(armotization);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setBackground(QColor(255, 255, 255));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font1);
        __qtablewidgetitem1->setBackground(QColor(255, 255, 255));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font1);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font1);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 50, 451, 311));
        label = new QLabel(armotization);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 321, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Forte"));
        font2.setPointSize(14);
        label->setFont(font2);

        retranslateUi(armotization);

        QMetaObject::connectSlotsByName(armotization);
    } // setupUi

    void retranslateUi(QDialog *armotization)
    {
        armotization->setWindowTitle(QApplication::translate("armotization", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("armotization", "No. Payment", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("armotization", "Principal Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("armotization", "Interest Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("armotization", "Balance Amount", nullptr));
        label->setText(QApplication::translate("armotization", "Refinance Amortization Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class armotization: public Ui_armotization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARMOTIZATION_H
