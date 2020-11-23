#ifndef EMPLOYER_H
#define EMPLOYER_H
#include "vacancy.h"
#include <QObject>

class Employer : public QObject
{
    Q_OBJECT
public:
    QString Name;
    QString Addres;
    QString Description;
    QString Phone;
    QString Director;
public:
    Employer(QString Name, QString Description, QString Director, QString Addres, QString Phone);
    explicit Employer(QObject *parent = nullptr);
    QString getName() const;
    QString getAddres() const;
    QString getDescription() const;
    QString getPhone() const;
    QString getDirector() const;
    bool addOrganisation(Employer* NewEmployer);
signals:

};

#endif // EMPLOYER_H
