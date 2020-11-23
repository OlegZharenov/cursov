#ifndef SEARCHVACANCYWINDOW_H
#define SEARCHVACANCYWINDOW_H
#include "vacancy.h"
#include <QDialog>

namespace Ui {
class searchvacancywindow;
}

class searchvacancywindow : public QDialog
{
    Q_OBJECT

public:
    Vacancy info;
    explicit searchvacancywindow(QWidget *parent = nullptr);
    QString* processForm();
    ~searchvacancywindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::searchvacancywindow *ui;
};

#endif // SEARCHVACANCYWINDOW_H
