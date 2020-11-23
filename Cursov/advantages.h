#ifndef ADVANTAGES_H
#define ADVANTAGES_H

#include <QObject>

class Advantages : public QObject
{
    Q_OBJECT
    QString Name;
    QString Description;
    QString ProficiencyLevel;//уровень владения
public:
    explicit Advantages(QObject *parent = nullptr);
    Advantages (QString Name, QString Description, QString ProficiencyLevel);
    QString getName() const;
    QString getDescription() const;
    QString getProficiencyLevel() const;

signals:

};

#endif // ADVANTAGES_H
