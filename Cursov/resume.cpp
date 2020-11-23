#include "resume.h"

Resume::Resume(QObject *parent) : QObject(parent)
{

}
Resume::Resume(QString FullName, QString PassportData, QString Gender, QString Education, QString Specialty, int Age,  int Experience){
    this->FullName = FullName;
    this->PassportData = PassportData;
    this->Gender = Gender;
    this->Education = Education;
    this->Specialty= Specialty;
    this->Age = Age;
    this->Experience = Experience;
}

QString Resume::getFullName() const{
    return this->FullName;
}

QString Resume::getPassportData() const{
    return this->PassportData;
}

QString Resume::getGender() const{
    return this->Gender;
}

QString Resume::getEducation() const{
    return this->Education;
}

QString Resume::getSpecialty() const{
    return this->Specialty;
}

int Resume::getAge() const{
    return this->Age;
}

int Resume::getExperience() const{
    return this->Experience;
}
