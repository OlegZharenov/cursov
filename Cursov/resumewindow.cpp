#include "resumewindow.h"
#include "ui_resumewindow.h"
#include "addresume.h"
#include "searchresume.h"
#include "deleteresume.h"

ResumeWindow::ResumeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ResumeWindow)
{
    ui->setupUi(this);
}

ResumeWindow::~ResumeWindow()
{
    delete ui;
}

void ResumeWindow::on_pushButton_clicked()
{
    AddResume windowadd;
    windowadd.setModal(true);
    windowadd.exec();

}

void ResumeWindow::on_pushButton_3_clicked()
{
    SearchResume windowsearch;
    windowsearch.setModal(true);
    windowsearch.exec();
}

void ResumeWindow::on_pushButton_2_clicked()
{
    deleteresume windowdelete;
    windowdelete.setModal(true);
    windowdelete.exec();
}

void ResumeWindow::on_pushButton_4_clicked()
{
    close();
}
