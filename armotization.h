#ifndef ARMOTIZATION_H
#define ARMOTIZATION_H

#include <QDialog>
#include "refinance.h"

namespace Ui {
class armotization;
}

class armotization : public QDialog
{
    Q_OBJECT

public:
    explicit armotization(QWidget *parent = nullptr);
    ~armotization();
    void run(refinance* ref);
private:
    Ui::armotization *ui;
};

#endif // ARMOTIZATION_H
