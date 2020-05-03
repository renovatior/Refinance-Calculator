#include "refinance_calculator.h"
#include "ui_refinance_calculator.h"


Refinance_Calculator::Refinance_Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Refinance_Calculator)
{
    ui->setupUi(this);
}

Refinance_Calculator::~Refinance_Calculator()
{
    delete ui;
}

void Refinance_Calculator::showResult(QString text)
{
    ui->result->append(text);
}


void Refinance_Calculator::on_Balance_textEdited(const QString &_balance)
{
    double balance = _balance.toDouble();
    if (balance > 0)
    {
        m_balance = true;
        ref->setInitBalance(balance);
    }
    else
    {
        m_balance = false;
    }
}


void Refinance_Calculator::on_CRate_textEdited(const QString &_CRate)
{
    double CRate = _CRate.toDouble();
    if (CRate > 0)
    {
        m_crate = true;
        ref->setCurrentRate(CRate);
    }
    else
    {
        m_crate = false;
    }
}



void Refinance_Calculator::on_RRate_textEdited(const QString &_RRate)
{
    double RRate = _RRate.toDouble();
    if (RRate > 0)
    {
        m_rrate = true;
        ref->setFutureRate(RRate);
    }
    else
    {
        m_rrate = false;
    }
}

void Refinance_Calculator::on_CTerm_textEdited(const QString &_CTerm)
{
    unsigned int CTerm = _CTerm.toUInt();
    if (CTerm > 0)
    {
        m_cterm = true;
        ref->setCurrentTerm(CTerm*12);
    }
    else
    {
        m_cterm = false;
    }
}

void Refinance_Calculator::on_RTerm_textEdited(const QString &_RTerm)
{
    unsigned int RTerm = _RTerm.toUInt();
    if (RTerm > 0)
    {
        m_rterm = true;
        ref->setFutureTerm(RTerm*12);
    }
    else
    {
        m_rterm = false;
    }
}

void Refinance_Calculator::on_PaidTimes_textEdited(const QString &_PaidTimes)
{
    unsigned int PaidTimes = _PaidTimes.toUInt();
    if (PaidTimes > 0)
    {
        m_ptimes = true;
        ref->setPaidTimes(PaidTimes);
    }
    else
    {
        m_ptimes = false;
    }
}

void Refinance_Calculator::on_ExtraFee_textEdited(const QString &_ExtraFee)
{
    bool ok;
    double ExtraFee = _ExtraFee.toDouble(&ok);
    if (ok)
    {
        m_fee = true;
        ref->setExtraFee(ExtraFee);
    }
    else
    {
        AbleToCalculate = false;
    }
}

bool Refinance_Calculator::getdoable()
{
    return m_balance && m_crate && m_rrate && m_cterm && m_rterm && m_fee && m_ptimes;
}

void Refinance_Calculator::on_Calculate_clicked()
{
    if (getdoable())
    {
        ref->run();
        double diff = ref->getdiff();
        QString showtext;
        if (diff > 0)
        {
           showtext = "Refinance will save you " + QString::number(diff) + " $!";
           showResult(showtext);
        }
        else if (diff < 0)
        {
            showtext = "Refinance will lose you " + QString::number(-diff) + " $!";
            showResult(showtext);
        }
        else
        {
            showtext = "No Need to refinance, they are the same!";
            showResult(showtext);
        }

        if (ref->getCurrentMonthly() > ref->getFutureMonthly())
        {
            showtext = "Your monthly payment will reduce from " + QString::number(ref->getCurrentMonthly()) + " $ to " + QString::number(ref->getFutureMonthly()) + " $.";
            showResult(showtext);
        }
        else if ((ref->getCurrentMonthly() < ref->getFutureMonthly()))
        {
            showtext = "Your monthly payment will increase from " + QString::number(ref->getCurrentMonthly()) + " $ to " + QString::number(ref->getFutureMonthly()) + " $.";
            showResult(showtext);
        }
        else
        {
            showtext = "Your monthly payment will remain the same as " + QString::number(ref->getCurrentMonthly()) + " $.";
            showResult(showtext);
        }

    }
    else
    {
        showResult("Invalid Input. Please input correct number!!");
    }
}
