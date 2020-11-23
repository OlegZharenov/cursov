#include "employer.h"
#include <QFile>
#include <QTextStream>

Employer :: Employer(QObject *parent) : QObject(parent)
{

}

Employer :: Employer(QString Name, QString Description, QString Director, QString Addres, QString Phone){
    this->Name = Name;
    this->Description = Description;
    this->Director = Director;
    this->Addres = Addres;
    this->Phone = Phone;
}

QString Employer :: getName() const{
    return this->Name;
}

QString Employer :: getPhone() const{
    return this->Phone;
}

QString Employer :: getAddres() const{
    return this->Addres;
}

QString Employer :: getDescription() const{
    return this->Description;
}

QString Employer :: getDirector() const{
    return this->Director;
}

bool Employer :: addOrganisation(Employer* NewEmployer){
    QFile efile("D:/project/Cursov/Employer.txt");
    if (!efile.open(QIODevice::Append | QIODevice::Text))
        return false;
    QTextStream eout(&efile);
    eout << NewEmployer->getName() << "\n";
    eout << NewEmployer->getDescription() << "\n";
    eout << NewEmployer->getDirector() << "\n";
    eout << NewEmployer->getAddres() << "\n";
    eout << NewEmployer->getPhone() << "\n";
    eout << "*" << "\n";
    efile.flush();
    efile.close();
}

