#ifndef REFINANCE_H
#define REFINANCE_H
#include <math.h>
#include <iostream>
#include <QDebug>
using namespace std;
class refinance
{
public:
    refinance(){}
    //setter
    inline void setCurrentRate(double _rate)
    {
        m_current_rate = _rate;
    }
    inline void setFutureRate(double _rate)
    {
        m_future_rate = _rate;
    }
    inline void setCurrentTerm(unsigned int _term)
    {
        m_current_term = _term;
    }
    inline void setFutureTerm(unsigned int _term)
    {
        m_future_term = _term;
    }
    inline void setInitBalance(double _balance)
    {
        balance = _balance;
    }
    inline void setPaidTimes(unsigned int _paidtimes)
    {
        m_already_term = _paidtimes;
    }
    inline void setExtraFee(double _fee)
    {
        m_fee = _fee;
    }

    //getter
    inline double getdiff()
    {
        return m_diff;
    }
    inline double getCurrentMonthly()
    {
        return m_current_monthly;
    }
    inline double getFutureMonthly()
    {
        return m_future_monthly;
    }

    void run();
private:
    double balance = 0;
    double m_current_rate = 0;
    double m_future_rate = 0;
    double m_fee = 0;
    double m_diff = 0;
    double m_current_monthly = 0;
    double m_future_monthly = 0;
    unsigned int m_current_term = 360;
    unsigned int m_future_term = 360;
    unsigned int m_already_term = 0;
    bool m_ask_again = true;
    void askInput();
    void askAgain();
    double getMonthlyPayment(double rate, unsigned int term, double balance);
    inline double getMonthBalance(double rate, double balance);
    void calculatediff();



};

#endif // REFINANCE_H
