#ifndef RESUME_H
#define RESUME_H

#include <QObject>

class Resume : public QObject
{
    Q_OBJECT
    QString FullName;//ФИО
    QString PassportData;//паспортные данные
    QString Gender;//пол
    QString Education;//образование
    QString Specialty;//специальность
    int Age;//возраст
    int Experience;//стаж
public:
    explicit Resume(QObject *parent = nullptr);
    Resume(QString FullName, QString PassportData, QString Gender, QString Education, QString Specialty, int Age,  int Experience);//конструктор
    QString getFullName() const;//геттеры
    QString getPassportData() const;
    QString getGender() const;
    QString getEducation() const;
    QString getSpecialty() const;
    int getAge() const;
    int getExperience() const;
};

#endif // RESUME_H
