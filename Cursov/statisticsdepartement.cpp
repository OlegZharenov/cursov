#include "statisticsdepartement.h"
#include "resume.h"
#include <QFile>
#include <QTextStream>

StatisticsDepartement::StatisticsDepartement(QObject *parent) : QObject(parent)
{

}
Resume* StatisticsDepartement::setResumeinvector(Resume* res){
    listresume.push_back(res);
    return res;
}

bool StatisticsDepartement:: AddResumeFile(Resume* res){
    QFile file("D:/project/Cursov/AResume.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))
        return false;
    QTextStream out(&file);
    QString temp;
    int number;
    temp = res->getFullName();
    out << temp << "\n";
    temp = res->getPassportData();
    out << temp << "\n";
    number = res->getAge();
    out << number << "\n";
    temp = res->getGender();
    out << temp << "\n";
    temp = res->getEducation();
    out << temp << "\n";
    temp = res->getSpecialty();
    out << temp << "\n";
    number = res->getExperience();
    out << number << "\n";
    out << "*" << "\n";
    file.flush();
    file.close();
    return true;
}

Resume* StatisticsDepartement::SearchResumeInFile(QString *data){
    bool flag = 0;
    int count = -1;
    QString FullName, PassportData, Gender, Education, Specialty;
    int Age, Experience;
    QFile file("D:/project/Cursov/AResume.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return NULL;
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (count == 5) {Age = line.toInt(); count--; continue;}
        else if (count == 4) {Gender = line; count--; continue;}
        else if (count == 3) {Education = line; count--; continue;}
        else if (count == 2) {Specialty = line; count--; continue;}
        else if (count == 1) {Experience = line.toInt(); count--; continue;}
        else if (count == 0) return new Resume(FullName, PassportData, Gender, Education, Specialty, Age, Experience);
        if (flag == 1 and line == data[1]){
            flag = 0;
            PassportData = line;
            count = 5;
            continue;
        }
        else {
            flag = 0;
            FullName = "";
        }
        if (line == data[0]){
            FullName = line;
            flag = 1;
        }
    }
    file.flush();
    file.close();

    return NULL;
}

bool StatisticsDepartement::DeleteResume(QString *data){
    QVector <QString> newlist;
    int count = 0;
    bool flag = false;
    QString Flag, FullName, PassportData, Gender, Education, Specialty, Age, Experience;
    QFile file("D:/project/Cursov/AResume.txt");
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
            FullName = line;
            newlist.push_back(FullName);
            count++;
            continue;
        }
        if (count == 2){
            PassportData = line;
            newlist.push_back(PassportData);
            count++;
            continue;
        }
        if (count == 3){
            Age = line;
            newlist.push_back(Age);
            count++;
            continue;
        }
        if (count == 4){
            Gender = line;
            newlist.push_back(Gender);
            count++;
            continue;
        }
        if (count == 5){
            Education = line;
            newlist.push_back(Education);
            count++;
            continue;
        }
        if (count == 6){
            Specialty = line;
            newlist.push_back(Specialty);
            count++;
            continue;
        }
        if (count == 7){
            Experience = line;
            newlist.push_back(Experience);
            count = -1;
        }
        if ((count == -1) and (FullName == data[0]) and (PassportData == data[1])){
            for (int i = 0; i<8; i++){
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


