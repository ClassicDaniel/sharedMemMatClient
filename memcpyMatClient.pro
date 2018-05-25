#-------------------------------------------------
#
# Project created by QtCreator 2018-05-25T01:05:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = memcpyMatClient
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui

QMAKE_CXXFLAGS += -std=c++11

# Add realsense v2 if installed
exists( /usr/local/lib/librealsense2.so* ) {
    DEFINES += BUILD_REALSENSE_V2
    LIBS += -lrealsense2
}

# OpenCV dependency

INCLUDEPATH += /usr/include \
    /usr/local/include

LIBS += -lopencv_core -lopencv_imgproc -lopencv_features2d -lopencv_highgui -lopencv_contrib

