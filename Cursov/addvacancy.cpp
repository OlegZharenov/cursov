#include "addvacancy.h"
#include "ui_addvacancy.h"
#include "addemployer.h"
#include <QMessageBox>

AddVacancy::AddVacancy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddVacancy),
    info(this)
{
    ui->setupUi(this);
}

AddVacancy::~AddVacancy()
{
    delete ui;
}

Vacancy* AddVacancy :: vacancyprocessForm(){
    QString Specialty, Education, Organisation;
    int Experience, Salary;
    Specialty = ui->Specialty->text();
    Education = ui->Education->text();
    Organisation = ui->Organisation->text();
    Experience = ui->Experience->text().toDouble();
    Salary = ui->Salary->text().toInt();
    return new Vacancy(Specialty, Education, Organisation, Experience, Salary);
}

void AddVacancy::on_pushButton_clicked()
{
    Vacancy* NewVacancy = vacancyprocessForm();
    if (!info.addVacancy(NewVacancy)){
        QMessageBox::warning(this, "Внимание", "О данной компании нет информации!\nДобавьте информацию");
        AddEmployer windowemployer;
        windowemployer.setModal(true);
        windowemployer.exec();
        close();
    }
    else{
        QMessageBox::information(this, "Информация", "Вакансия успешно добавлена!");
        close();
    }
    
}
