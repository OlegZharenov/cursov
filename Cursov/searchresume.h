#ifndef SEARCHRESUME_H
#define SEARCHRESUME_H

#include <QDialog>
#include "statisticsdepartement.h"

namespace Ui {
class SearchResume;
}

class SearchResume : public QDialog
{
    Q_OBJECT

public:
    StatisticsDepartement info;
    QString* processForm();
    explicit SearchResume(QWidget *parent = nullptr);
    ~SearchResume();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SearchResume *ui;
};

#endif // SEARCHRESUME_H
