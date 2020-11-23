#include "vacancywindow.h"
#include "ui_vacancywindow.h"
#include "addvacancy.h"
#include "searchvacancywindow.h"
#include "deletevacancywindow.h"

VacancyWindow::VacancyWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VacancyWindow)
{
    ui->setupUi(this);
}

VacancyWindow::~VacancyWindow()
{
    delete ui;
}

void VacancyWindow::on_pushButton_4_clicked()
{
    close();
}

void VacancyWindow::on_pushButton_clicked()
{
    AddVacancy windowadd;
    windowadd.setModal(true);
    windowadd.exec();
}

void VacancyWindow::on_pushButton_3_clicked()
{
    searchvacancywindow windowsearch;
    windowsearch.setModal(true);
    windowsearch.exec();
}

void VacancyWindow::on_pushButton_2_clicked()
{
    deletevacancywindow windowdelete;
    windowdelete.setModal(true);
    windowdelete.exec();
}
