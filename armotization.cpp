#include "armotization.h"
#include "ui_armotization.h"
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QFont>

armotization::armotization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::armotization)
{
    ui->setupUi(this);
}

armotization::~armotization()
{
    delete ui;
}

void armotization::run(refinance *ref)
{
    unsigned int term = ref->getFutureTerm();
    double rate = ref->getFutureRate();
    double balance = ref->getCurrentBalance();
    double payment = ref->getFutureMonthly();
    QFont font;
    font.setBold(true);
    ui->tableWidget->setRowCount(static_cast<int>(term));
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->verticalHeader()->setVisible(false);
    //ui->tableWidget->horizontalHeader()->setFont(font);
    for (unsigned int i = 0; i < term ; i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(tr("%1").arg(i+1));
        item->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(i,0,item);

        double interest = balance * rate / 1200.;
        double principal = payment - interest;
        balance -= principal;
        QTableWidgetItem *item2 = new QTableWidgetItem(tr("%1").arg(principal));
        item2->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(i,1,item2);
        QTableWidgetItem *item3 = new QTableWidgetItem(tr("%1").arg(interest));
        item3->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(i,2,item3);
        if (i == term - 1)
        {
            QTableWidgetItem *item4 = new QTableWidgetItem(tr("%1").arg(0));
            item4->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(i,3,item4);
        }
        else
        {
            QTableWidgetItem *item4 = new QTableWidgetItem(tr("%1").arg(balance));
            item4->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(i,3,item4);
        }


    }
}
