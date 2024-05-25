QT       += core gui \
    quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adduser.cpp \
    adminstrator.cpp \
    main.cpp \
    mainwindow.cpp \
    signup2.cpp \
    user.cpp \
    instructor.cpp \
    student.cpp \
    start.cpp

HEADERS += \
    adduser.h \
    adminstrator.h \
    course.h \
    mainwindow.h \
    signup2.h \
    user.h \
    instructor.h \
    student.h \
    start.h

FORMS += \
    adduser.ui \
    adminstrator.ui \
    mainwindow.ui \
    signup2.ui \
    instructor.ui \
    student.ui \
    start.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Grades.txt \
    Users.txt \
    courses.txt
