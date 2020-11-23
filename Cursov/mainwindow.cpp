#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "resumewindow.h"
#include "vacancywindow.h"
#include "employmentwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resourec/img/GL.jpg");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    ResumeWindow windowRes;
    windowRes.setModal(true);//для открытия окна
    windowRes.exec();
}

void MainWindow::on_pushButton_clicked()
{
    VacancyWindow windowVac;
    windowVac.setModal(true);
    windowVac.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    Employmentwindow windowemployment;
    windowemployment.setModal(true);
    windowemployment.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    close();
}
