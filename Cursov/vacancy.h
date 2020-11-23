#ifndef VACANCY_H
#define VACANCY_H
#include "employer.h"
#include <QObject>

class Vacancy : public QObject
{
    Q_OBJECT
    QString Organisation;
    QString Specialty;
    QString Education;
    double Experience;
    int Salary;
public:
    explicit Vacancy(QObject *parent = nullptr);
    Vacancy(QString Specialty, QString Education, QString Organisation, double Experience, int Salary);
    QString getSpecialty() const;
    QString getEducation() const;
    QString getOrganisation() const;
    double getExperience() const;
    int getSalary() const;
    bool addVacancy(Vacancy* NewVacancy);
    Vacancy* SearchVacancyInFile(QString* data);
    bool DeleteVacancy(QString* data);

signals:

};

#endif // VACANCY_H
