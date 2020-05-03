#include "refinance_calculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Refinance_Calculator w;
    w.show();

    return a.exec();
}
