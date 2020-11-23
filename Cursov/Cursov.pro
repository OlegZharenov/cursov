QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addemployer.cpp \
    addresume.cpp \
    addvacancy.cpp \
    advantages.cpp \
    deleteresume.cpp \
    deletevacancywindow.cpp \
    employer.cpp \
    employmentdepartament.cpp \
    employmentwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    resume.cpp \
    resumewindow.cpp \
    searchresume.cpp \
    searchvacancy.cpp \
    searchvacancywindow.cpp \
    statisticsdepartement.cpp \
    vacancy.cpp \
    vacancywindow.cpp

HEADERS += \
    addemployer.h \
    addresume.h \
    addvacancy.h \
    advantages.h \
    deleteresume.h \
    deletevacancywindow.h \
    employer.h \
    employmentdepartament.h \
    employmentwindow.h \
    mainwindow.h \
    resume.h \
    resumewindow.h \
    searchresume.h \
    searchvacancy.h \
    searchvacancywindow.h \
    statisticsdepartement.h \
    vacancy.h \
    vacancywindow.h

FORMS += \
    addemployer.ui \
    addresume.ui \
    addvacancy.ui \
    deleteresume.ui \
    deletevacancywindow.ui \
    employmentwindow.ui \
    mainwindow.ui \
    resumewindow.ui \
    searchresume.ui \
    searchvacancywindow.ui \
    vacancywindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
