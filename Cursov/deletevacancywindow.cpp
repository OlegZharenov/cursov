#include "deletevacancywindow.h"
#include "ui_deletevacancywindow.h"
#include <QMessageBox>

deletevacancywindow::deletevacancywindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletevacancywindow),
    info(this)
{
    ui->setupUi(this);
}

deletevacancywindow::~deletevacancywindow()
{
    delete ui;
}

QString* deletevacancywindow:: processForm(){
    QString* data = new QString[2];
    data[0] = ui->Specialty->text();
    data[1] = ui->Organization->text();
    return data;
}

void deletevacancywindow::on_pushButton_clicked()
{
    QString* data = processForm();
    if (info.DeleteVacancy(data)){
        QMessageBox::information(this, "Информация", "Вакансия удалена!");
    }
    else QMessageBox::warning(this, "Предупреждение", "Что-то пошло не так!");
}
