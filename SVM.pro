TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    S_SVM.cpp \
    kernel_polynomial.cpp \
    kernel_linear.cpp

HEADERS += \
    S_SVM.h \
    parameters.h \
    kernel_polynomial.h \
    kernel_linear.h

DISTFILES +=
