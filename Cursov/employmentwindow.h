#ifndef EMPLOYMENTWINDOW_H
#define EMPLOYMENTWINDOW_H

#include <QDialog>
#include "employmentdepartament.h"

namespace Ui {
class Employmentwindow;
}

class Employmentwindow : public QDialog
{
    Q_OBJECT

public:
    explicit Employmentwindow(QWidget *parent = nullptr);
    ~Employmentwindow();
    QString* processForm();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Employmentwindow *ui;
};

#endif // EMPLOYMENTWINDOW_H
