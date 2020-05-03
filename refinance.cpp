#include "refinance.h"

double refinance::getMonthlyPayment(double rate, unsigned int term, double balance)
{
    const double month_rate = rate / 1200.;
    const double para = pow((1 + month_rate), term);
    double payment = balance * (month_rate * para) / (para - 1);

    return payment;

}

void  refinance::askInput()
{
   std::cout << "What is your initial balance for your current loan:" << endl;
   std::cin >> balance;
   std::cout << "What is your interest rate for your current loan:" << endl;
   std::cin >> m_current_rate;
   std::cout << "What is your term(years) for your current loan:" << endl;
   std::cin >> m_current_term;
   m_current_term *= 12;
   std::cout << "How many payments have you already paid for your current loan:" << endl;
   std::cin >> m_already_term;
   std::cout << "What is your refinance interest rate for your future loan:" << endl;
   std::cin >> m_future_rate;
   std::cout << "What is your refinance term(years) for your future loan:" << endl;
   std::cin >> m_future_term;
   m_future_term *= 12;
   std::cout << "Any extra fee for your refinance:" << endl;
   std::cin >> m_fee;


}

void refinance::askAgain()
{
    string input;
    std::cout << "Do you want to apply another refinance?(y/n)" << endl;
    std::cin >> input;
    if (input.find("y") != string::npos)
    {
        m_ask_again = true;
        std::cout << "What is your refinance interest rate for your future loan:" << endl;
        std::cin >> m_future_rate;
        std::cout << "What is your refinance term(years) for your future loan:" << endl;
        std::cin >> m_future_term;
        m_future_term *= 12;
        std::cout << "Any extra fee for your refinance:" << endl;
        std::cin >> m_fee;
    }
    else
    {
        m_ask_again = false;
    }
}

inline double refinance::getMonthBalance(double rate, double balance)
{
   return rate / 1200. * balance;
}

void refinance::calculatediff()
{
    double current_cost,future_cost;
    //if keep doing the current loan
    const double current_month = getMonthlyPayment(m_current_rate, m_current_term, balance);
    m_current_monthly = current_month;
    current_cost = current_month * m_current_term;
    double payed_balance = 0;
    double month_interest = 0;
    double initial_balance = balance;
    for (unsigned int time = 0; time < m_already_term; time ++)
    {
        payed_balance += current_month - initial_balance * m_current_rate / 1200.;
        initial_balance -= payed_balance;
        month_interest = initial_balance * m_current_rate / 1200.;
    }
    const double future_month = getMonthlyPayment(m_future_rate, m_future_term, balance - payed_balance);
    m_future_monthly = future_month;
    future_cost =  future_month * m_future_term + m_already_term * current_month + month_interest;

    m_diff = current_cost - future_cost;

}

void refinance::run()
{
//    askInput();
//    while (m_ask_again)
//    {
//        double diff = calculatediff();
//        qDebug() << "Refinance can save you:" << diff;
//        askAgain();
//    }
    calculatediff();

}
