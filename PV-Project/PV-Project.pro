QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Enseignant.cpp \
    Etudiant.cpp \
    Personne.cpp \
    databasemanager.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Enseignant.h \
    Etudiant.h \
    Personne.h \
    databasemanager.h \
    mainwindow.h

FORMS += \
    addGM.ui \
    addMat.ui \
    addMatGM.ui \
    addStudent.ui \
    addTeacher.ui \
    listeMat.ui \
    mainwindow.ui \
    modifyMat.ui \
    modifyStudent.ui \
    modifyTeacher.ui \
    test.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
