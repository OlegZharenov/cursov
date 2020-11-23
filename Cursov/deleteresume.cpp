#include "deleteresume.h"
#include "ui_deleteresume.h"
#include "QMessageBox"

deleteresume::deleteresume(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteresume),
    info(this)

{
    ui->setupUi(this);
}

deleteresume::~deleteresume()
{
    delete ui;
}

QString* deleteresume :: processForm(){
    QString* data = new QString[2];
    data[0] = ui->FullName->text();
    data[1] = ui->PassportData->text();
    return data;
}
void deleteresume::on_pushButton_clicked()
{
    QString* data = processForm();
    if (info.DeleteResume(data)){
        QMessageBox::information(this, "Информация", "Резюме удалено!");
    }
    else QMessageBox::warning(this, "Предупреждение", "Что-то пошло не так!");
}
