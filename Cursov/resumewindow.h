#ifndef RESUMEWINDOW_H
#define RESUMEWINDOW_H

#include <QDialog>

namespace Ui {
class ResumeWindow;
}

class ResumeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ResumeWindow(QWidget *parent = nullptr);
    ~ResumeWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::ResumeWindow *ui;
};

#endif // RESUMEWINDOW_H
