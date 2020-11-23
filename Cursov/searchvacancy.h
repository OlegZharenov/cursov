#ifndef SEARCHVACANCY_H
#define SEARCHVACANCY_H
#include "vacancy.h"
#include <QObject>

class SearchVacancy : public QObject
{
    Q_OBJECT
public:

    explicit SearchVacancy(QObject *parent = nullptr);

signals:

};

#endif // SEARCHVACANCY_H
