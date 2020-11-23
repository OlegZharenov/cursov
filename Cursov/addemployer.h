#ifndef ADDEMPLOYER_H
#define ADDEMPLOYER_H
#include "employer.h"

#include <QDialog>

namespace Ui {
class AddEmployer;
}

class AddEmployer : public QDialog
{
    Q_OBJECT

public:
    Employer einfo;
    Employer* employerprocessForm();
    explicit AddEmployer(QWidget *parent = nullptr);
    ~AddEmployer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddEmployer *ui;
};

#endif // ADDEMPLOYER_H
