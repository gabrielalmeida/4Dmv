QT += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 4Dmv
TEMPLATE = app

linux {
    LIBS += -lglut  -lGL -lGLU
}

SOURCES += main.cpp\
    mainwindow.cpp \
    glwidget.cpp

HEADERS  += mainwindow.h \
    glwidget.h
