#ifndef VACANCYWINDOW_H
#define VACANCYWINDOW_H

#include <QDialog>

namespace Ui {
class VacancyWindow;
}

class VacancyWindow : public QDialog
{
    Q_OBJECT

public:
    explicit VacancyWindow(QWidget *parent = nullptr);
    ~VacancyWindow();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::VacancyWindow *ui;
};

#endif // VACANCYWINDOW_H
