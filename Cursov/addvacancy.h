#ifndef ADDVACANCY_H
#define ADDVACANCY_H
#include "vacancy.h"
#include "employer.h"
#include <QDialog>

namespace Ui {
class AddVacancy;
}

class AddVacancy : public QDialog
{
    Q_OBJECT

public:
    explicit AddVacancy(QWidget *parent = nullptr);
    Vacancy info;
    Vacancy* vacancyprocessForm();
    ~AddVacancy();

private slots:
    void on_pushButton_clicked();
    
private:
    Ui::AddVacancy *ui;
};

#endif // ADDVACANCY_H
