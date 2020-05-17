#include "refinance.h"

double refinance::getMonthlyPayment(double rate, unsigned int term, double balance)
{
    const double month_rate = rate / 1200.;
    const double para = pow((1 + month_rate), term);
    double payment = balance * (month_rate * para) / (para - 1);

    return payment;

}

double refinance::getRemainBalance(double rate, unsigned int term, double monthly, double init_balance)
{
    double t_balance = init_balance;
    for (unsigned int it = 0; it < term; it ++)
    {
        double interest = t_balance * rate / 1200.;
        double principal = monthly - interest;
        t_balance -= principal;
    }
    return t_balance;
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
    double payed_balance = 0;
    double month_interest = 0;
    double initial_balance = balance;
    double each_payed_balance = 0;
    for (unsigned int time = 0; time < m_already_term; time ++)
    {
        each_payed_balance = current_month - initial_balance * m_current_rate / 1200.;
        payed_balance += each_payed_balance;
        initial_balance -= each_payed_balance;
        month_interest = initial_balance * m_current_rate / 1200.;
    }
    current_balance = balance - payed_balance;
    const double future_month = getMonthlyPayment(m_future_rate, m_future_term, current_balance);
    m_future_monthly = future_month;

    const unsigned int current_house_term = m_already_term + m_house_sellterm;
    if (m_plan_sell and (current_house_term < m_current_term))
    {
        double remain = getRemainBalance(m_current_rate, current_house_term, m_current_monthly, balance);
        current_cost = m_current_monthly * current_house_term + remain;
    }
    else
    {
        current_cost = m_current_monthly * m_current_term;
    }

    if(m_plan_sell and m_house_sellterm < m_future_term)
    {
        double remain = getRemainBalance(m_future_rate, m_house_sellterm, m_future_monthly, current_balance);
        future_cost =  remain + m_future_monthly * m_house_sellterm + m_already_term * current_month + month_interest;
    }
    else
    {
        future_cost =  m_future_monthly * m_future_term + m_already_term * current_month + month_interest;
    }
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
