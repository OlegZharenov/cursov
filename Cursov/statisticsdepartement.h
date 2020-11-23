#ifndef STATISTICSDEPARTEMENT_H
#define STATISTICSDEPARTEMENT_H
#include <QObject>
#include "resume.h"

class StatisticsDepartement : public QObject
{
    Q_OBJECT
public:
    QVector <Resume *> listresume;
    Resume* setResumeinvector(Resume* res);
    bool AddResumeFile(Resume* res);
    Resume* SearchResumeInFile(QString *data);
    bool DeleteResume(QString *data);
    bool SearchResume(QString FullName, QString PassportData);
    explicit StatisticsDepartement(QObject *parent = nullptr);

signals:

};

#endif // STATISTICSDEPARTEMENT_H
