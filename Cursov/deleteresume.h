#ifndef DELETERESUME_H
#define DELETERESUME_H
#include "statisticsdepartement.h"
#include <QDialog>

namespace Ui {
class deleteresume;
}

class deleteresume : public QDialog
{
    Q_OBJECT

public:
    StatisticsDepartement info;
    explicit deleteresume(QWidget *parent = nullptr);
    QString* processForm();
    ~deleteresume();

private slots:
    void on_pushButton_clicked();

private:
    Ui::deleteresume *ui;
};

#endif // DELETERESUME_H
