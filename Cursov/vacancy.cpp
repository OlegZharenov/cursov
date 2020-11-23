#include "vacancy.h"
#include "QFile"
#include <QTextStream>

Vacancy::Vacancy(QObject *parent) : QObject(parent)
{

}
Vacancy::Vacancy(QString Specialty, QString Education, QString Organisation, double Experience, int Salary){
    this->Specialty = Specialty;
    this->Education = Education;
    this->Organisation = Organisation;
    this->Experience = Experience;
    this->Salary = Salary;
}

QString Vacancy :: getSpecialty() const{
    return this->Specialty;
}

QString Vacancy :: getEducation() const{
    return this->Education;
}

QString Vacancy :: getOrganisation() const{
    return this->Organisation;
}

double Vacancy :: getExperience() const{
    return this->Experience;
}

int Vacancy :: getSalary() const{
    return this->Salary;
}

bool Vacancy :: addVacancy(Vacancy* NewVacancy){
    QFile vfile("D:/project/Cursov/Vacancy.txt");
    if (!vfile.open(QIODevice::Append | QIODevice::Text))
        return false;
    QTextStream vout(&vfile);
    vout << NewVacancy->getSpecialty() << "\n";
    vout << NewVacancy->getOrganisation() << "\n";
    vout << NewVacancy->getEducation() << "\n";
    vout << NewVacancy->getExperience() << "\n";
    vout << NewVacancy->getSalary() << "\n";
    vout << "*" << "\n";
    vfile.flush();
    vfile.close();
    QFile efile("D:/project/Cursov/Employer.txt");
    if (!efile.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;
    QTextStream ein(&efile);
    while (!ein.atEnd()) {
        QString line = ein.readLine();
        if (line == NewVacancy->getOrganisation()){
            return true;
        }
    }
    return false;
}

Vacancy* Vacancy :: SearchVacancyInFile(QString* data){
    bool flag = 0;
    int count = -1, Salary;
    double Experience;
    QString Specialty, Organisation , Education;
    QFile file("D:/project/Cursov/Vacancy.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return NULL;
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (count == 2) {
            Education = line;
            count--;
            continue;
        }
        if (count == 1) {
            Experience = line.toDouble();
            count--;
            continue;
        }
        if (count == 0){
            Salary = line.toInt();
            return new Vacancy(Specialty, Education, Organisation, Experience, Salary);
        }
        if (line == data[1] and flag == 1){
            Organisation = line;
            count = 2;
            continue;
        }
        if (line == data[0]){
            flag = 1;
            Specialty = line;
        }
        else flag = 0;
    }
    return NULL;
}

bool Vacancy :: DeleteVacancy(QString* data){
    QVector <QString> newlist;
    int count = 0;
    bool flag = false;
    QString Flag, Specialty, Organization, Education, Experience, Salary;
    QFile file("D:/project/Cursov/Vacancy.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return flag;
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (count == 0){
            Flag = line;
            newlist.push_back(Flag);
            count++;
            continue;
        }
        if (count == 1){
            Specialty = line;
            newlist.push_back(Specialty);
            count++;
            continue;
        }
        if (count == 2){
            Organization = line;
            newlist.push_back(Organization);
            count++;
            continue;
        }
        if (count == 3){
            Education = line;
            newlist.push_back(Education);
            count++;
            continue;
        }
        if (count == 4){
            Experience = line;
            newlist.push_back(Experience);
            count++;
            continue;
        }
        if (count == 5){
            Salary = line;
            newlist.push_back(Salary);
            count=-1;
        }
        if ((count == -1) and (Specialty == data[0]) and (Organization == data[1])){
            for (int i = 0; i<6; i++){
                newlist.pop_back();
            }
            flag = true;
            count = 0;
        }
        else count = 0;
    }
    file.flush();
    file.close();
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate))
        return flag;
    QTextStream out(&file);
    for (int i = 0; i<newlist.size(); i++){
        out << newlist[i] << "\n";
    }
    file.flush();
    file.close();
    return flag;
}


