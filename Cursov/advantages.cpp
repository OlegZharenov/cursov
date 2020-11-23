#include "advantages.h"

Advantages::Advantages(QObject *parent) : QObject(parent)
{

}

Advantages :: Advantages (QString Name, QString Description, QString ProficiencyLevel){
    this->Name = Name;
    this->Description = Description;
    this->ProficiencyLevel = ProficiencyLevel;
}

QString Advantages :: getName() const{
    return this->Name;
}

QString Advantages :: getDescription() const{
    return this->Description;
}

QString Advantages :: getProficiencyLevel() const{
    return this->ProficiencyLevel;
}

