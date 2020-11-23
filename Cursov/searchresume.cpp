#include "searchresume.h"
#include "ui_searchresume.h"
#include "QMessageBox"

SearchResume::SearchResume(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchResume),
    info(this)
{
    ui->setupUi(this);
}

QString* SearchResume :: processForm(){
    QString* data = new QString[2];
    data[0] = ui->FullName->text();
    data[1] = ui->PassportData->text();
    return data;
}

SearchResume::~SearchResume()
{
    delete ui;
}

void SearchResume::on_pushButton_clicked()
{
    QString* data = processForm();
    Resume* Current = info.SearchResumeInFile(data);
    if (Current){
        ui->FN->setText(Current->getFullName());
        ui->PD->setText(Current->getPassportData());
        ui->Ag->setText(QString :: number(Current->getAge()));
        ui->GD->setText(Current->getGender());
        ui->ED->setText(Current->getEducation());
        ui->SP->setText(Current->getSpecialty());
        ui->EX->setText(QString :: number(Current->getExperience()));
        QMessageBox::information(this, "Информация", "Искомое резюме найдено!");
    }
    else QMessageBox::warning(this, "Предупреждение", "Искомое резюме не найдено!\nПроверьте корректность данных");
}

void SearchResume::on_pushButton_2_clicked()
{
    close();
}
