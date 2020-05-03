#ifndef REFINANCE_CALCULATOR_H
#define REFINANCE_CALCULATOR_H

#include <QMainWindow>
#include "refinance.h"

namespace Ui {
class Refinance_Calculator;
}

class Refinance_Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Refinance_Calculator(QWidget *parent = nullptr);
    ~Refinance_Calculator();

private slots:

    void on_Balance_textEdited(const QString &arg1);



    void on_CRate_textEdited(const QString &arg1);

    void on_RRate_textEdited(const QString &arg1);

    void on_CTerm_textEdited(const QString &arg1);

    void on_RTerm_textEdited(const QString &arg1);

    void on_PaidTimes_textEdited(const QString &arg1);

    void on_ExtraFee_textEdited(const QString &arg1);

    void on_Calculate_clicked();

private:
    Ui::Refinance_Calculator *ui;

    bool AbleToCalculate = false;
    bool m_balance = false;
    bool m_crate = false;
    bool m_rrate = false;
    bool m_cterm = false;
    bool m_rterm = false;
    bool m_ptimes = false;
    bool m_fee = false;

    refinance* ref = new refinance();

    void showResult(QString text);
    bool getdoable();
};

#endif // REFINANCE_CALCULATOR_H
