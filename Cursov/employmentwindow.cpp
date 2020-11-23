#include "employmentwindow.h"
#include "ui_employmentwindow.h"

Employmentwindow::Employmentwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Employmentwindow)
{
    ui->setupUi(this);
}

Employmentwindow::~Employmentwindow()
{
    delete ui;
}

QString* Employmentwindow :: processForm(){
    QString* data = new QString[2];
    data[0] = ui->FullName->text();
    data[1] = ui->PassportData->text();
    return data;
}

void Employmentwindow::on_pushButton_clicked()
{

}
