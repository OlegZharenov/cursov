#include "searchvacancywindow.h"
#include "ui_searchvacancywindow.h"
#include "QMessageBox"


searchvacancywindow::searchvacancywindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchvacancywindow),
    info(this)
{
    ui->setupUi(this);
}

searchvacancywindow::~searchvacancywindow()
{
    delete ui;
}

QString* searchvacancywindow :: processForm(){
    QString* data = new QString[2];
    data[0] = ui->specialty->text();
    data[1] = ui->organisation->text();
    return data;
}

void searchvacancywindow::on_pushButton_clicked()
{
    QString* data = processForm();
    Vacancy* Current = info.SearchVacancyInFile(data);
    if (Current){
        ui->Specialty->setText(Current->getSpecialty());
        ui->Education->setText(Current->getEducation());
        ui->Organisation->setText(Current->getOrganisation());
        ui->Experience->setText(QString :: number(Current->getExperience()));
        ui->Salary->setText(QString :: number(Current->getSalary()));
        QMessageBox::information(this, "Информация", "Искомая вакансия найдена!");
    }
    else QMessageBox::warning(this, "Предупреждение", "Искомая вакансия не найдена!\nПроверьте корректность данных");
}

void searchvacancywindow::on_pushButton_2_clicked()
{
    close();
}
