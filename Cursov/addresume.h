#ifndef ADDRESUME_H
#define ADDRESUME_H

#include <QDialog>
#include "resume.h"
#include "statisticsdepartement.h"


namespace Ui {
class AddResume;
}

class AddResume : public QDialog
{
    Q_OBJECT

public:
    explicit AddResume(QWidget *parent = nullptr);
    StatisticsDepartement info;
    ~AddResume();
    Resume* processForm();
private slots:
    void on_pushButton_clicked();

private:
    Ui::AddResume *ui;
};

#endif // ADDRESUME_H
