/********************************************************************************
** Form generated from reading UI file 'refinance_calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFINANCE_CALCULATOR_H
#define UI_REFINANCE_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Refinance_Calculator
{
public:
    QWidget *centralWidget;
    QPushButton *Calculate;
    QLineEdit *Balance;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *CRate;
    QLabel *label_4;
    QLineEdit *RRate;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *CTerm;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *RTerm;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *PaidTimes;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *ExtraFee;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QTextEdit *result;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Refinance_Calculator)
    {
        if (Refinance_Calculator->objectName().isEmpty())
            Refinance_Calculator->setObjectName(QStringLiteral("Refinance_Calculator"));
        Refinance_Calculator->resize(688, 436);
        centralWidget = new QWidget(Refinance_Calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Calculate = new QPushButton(centralWidget);
        Calculate->setObjectName(QStringLiteral("Calculate"));
        Calculate->setGeometry(QRect(260, 190, 141, 31));
        QFont font;
        font.setFamily(QStringLiteral("Bodoni MT Condensed"));
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        Calculate->setFont(font);
        Balance = new QLineEdit(centralWidget);
        Balance->setObjectName(QStringLiteral("Balance"));
        Balance->setGeometry(QRect(180, 20, 121, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 121, 21));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 20, 47, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 60, 131, 21));
        label_3->setFont(font1);
        CRate = new QLineEdit(centralWidget);
        CRate->setObjectName(QStringLiteral("CRate"));
        CRate->setGeometry(QRect(180, 60, 121, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(300, 60, 47, 16));
        RRate = new QLineEdit(centralWidget);
        RRate->setObjectName(QStringLiteral("RRate"));
        RRate->setGeometry(QRect(500, 60, 121, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(620, 60, 47, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(350, 60, 141, 21));
        label_6->setFont(font1);
        CTerm = new QLineEdit(centralWidget);
        CTerm->setObjectName(QStringLiteral("CTerm"));
        CTerm->setGeometry(QRect(180, 100, 121, 20));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(300, 100, 47, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 100, 111, 21));
        label_8->setFont(font1);
        RTerm = new QLineEdit(centralWidget);
        RTerm->setObjectName(QStringLiteral("RTerm"));
        RTerm->setGeometry(QRect(500, 100, 121, 20));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(360, 100, 141, 21));
        label_9->setFont(font1);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(620, 100, 47, 16));
        PaidTimes = new QLineEdit(centralWidget);
        PaidTimes->setObjectName(QStringLiteral("PaidTimes"));
        PaidTimes->setGeometry(QRect(180, 140, 121, 20));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 140, 141, 21));
        label_11->setFont(font1);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(300, 140, 47, 16));
        ExtraFee = new QLineEdit(centralWidget);
        ExtraFee->setObjectName(QStringLiteral("ExtraFee"));
        ExtraFee->setGeometry(QRect(500, 140, 121, 20));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(350, 140, 151, 21));
        label_13->setFont(font1);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(620, 140, 47, 16));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 230, 47, 13));
        label_15->setFont(font1);
        result = new QTextEdit(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(30, 250, 621, 121));
        Refinance_Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Refinance_Calculator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 688, 21));
        Refinance_Calculator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Refinance_Calculator);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Refinance_Calculator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Refinance_Calculator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Refinance_Calculator->setStatusBar(statusBar);

        retranslateUi(Refinance_Calculator);

        QMetaObject::connectSlotsByName(Refinance_Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Refinance_Calculator)
    {
        Refinance_Calculator->setWindowTitle(QApplication::translate("Refinance_Calculator", "Refinance_Calculator", nullptr));
        Calculate->setText(QApplication::translate("Refinance_Calculator", "Calculate", nullptr));
        label->setText(QApplication::translate("Refinance_Calculator", "Initial Loan Amount:", nullptr));
        label_2->setText(QApplication::translate("Refinance_Calculator", "$", nullptr));
        label_3->setText(QApplication::translate("Refinance_Calculator", "Current Interest Rate:", nullptr));
        label_4->setText(QApplication::translate("Refinance_Calculator", "%", nullptr));
        label_5->setText(QApplication::translate("Refinance_Calculator", "%", nullptr));
        label_6->setText(QApplication::translate("Refinance_Calculator", "Refinance Interest Rate:", nullptr));
        label_7->setText(QApplication::translate("Refinance_Calculator", "years", nullptr));
        label_8->setText(QApplication::translate("Refinance_Calculator", "Current Loan Term:", nullptr));
        label_9->setText(QApplication::translate("Refinance_Calculator", "Refinance Loan Term:", nullptr));
        label_10->setText(QApplication::translate("Refinance_Calculator", "years", nullptr));
        label_11->setText(QApplication::translate("Refinance_Calculator", "Payment Already Made:", nullptr));
        label_12->setText(QApplication::translate("Refinance_Calculator", "Times", nullptr));
        ExtraFee->setText(QString());
        label_13->setText(QApplication::translate("Refinance_Calculator", "Extra Fee For Refinance:", nullptr));
        label_14->setText(QApplication::translate("Refinance_Calculator", "$", nullptr));
        label_15->setText(QApplication::translate("Refinance_Calculator", "Result:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Refinance_Calculator: public Ui_Refinance_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFINANCE_CALCULATOR_H
