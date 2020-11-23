#include "addresume.h"
#include "ui_addresume.h"
#include "resume.h"
#include <QMessageBox>

AddResume::AddResume(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddResume),
    info(this)
{
    ui->setupUi(this);
}

Resume* AddResume :: processForm(){
    QString FullName = ui->FullName->text();
    QString PassportData = ui->PassportData->text();
    QString Gender;
    if (ui->Male->isChecked()){
        Gender = "Мужской";
    }
    if (ui->Female->isChecked()){
        Gender = "Женский";
    }
    QString Education = ui->Education->text();
    QString Specialty = ui->Specialty->text();
    int Age = ui->Age->text().toInt();
    int Experience = ui->Experience->text().toInt();
    return new Resume(FullName, PassportData, Gender, Education, Specialty, Age, Experience);
}

AddResume::~AddResume()
{
    delete ui;
}

void AddResume::on_pushButton_clicked()
{
    Resume* NewResume = processForm();
    info.setResumeinvector(NewResume);
    if (info.AddResumeFile(NewResume)){
        QMessageBox::information(this, "Информация", "Ваше резюме успешно добавлено в архив");
    }
    close();
}

