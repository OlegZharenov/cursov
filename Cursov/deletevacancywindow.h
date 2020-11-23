#ifndef DELETEVACANCYWINDOW_H
#define DELETEVACANCYWINDOW_H
#include "vacancy.h"
#include <QDialog>

namespace Ui {
class deletevacancywindow;
}

class deletevacancywindow : public QDialog
{
    Q_OBJECT

public:
    Vacancy info;
    QString* processForm();
    explicit deletevacancywindow(QWidget *parent = nullptr);
    ~deletevacancywindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::deletevacancywindow *ui;
};

#endif // DELETEVACANCYWINDOW_H
