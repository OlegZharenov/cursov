#include "addemployer.h"
#include "ui_addemployer.h"
#include <QMessageBox>

AddEmployer::AddEmployer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEmployer),
    einfo(this)
{
    ui->setupUi(this);
}

AddEmployer::~AddEmployer()
{
    delete ui;
}

Employer* AddEmployer :: employerprocessForm(){
    QString Name, Description, Director, Addres, Phone;
    Name = ui->Name->text();
    Description = ui->Description->text();
    Director = ui->Director->text();
    Addres = ui->Addres->text();
    Phone = ui->Phone->text();
    return new Employer(Name, Description, Director, Addres, Phone);
}

void AddEmployer::on_pushButton_clicked()
{
    Employer* NewEmployer = employerprocessForm();
    if (einfo.addOrganisation(NewEmployer)){
        QMessageBox::information(this, "Информация", "Организация успешно добавлена!");
        close();
    }
}
