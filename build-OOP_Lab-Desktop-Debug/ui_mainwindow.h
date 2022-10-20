/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *add;
    QRadioButton *station;
    QRadioButton *vane;
    QPushButton *Delete_all;
    QPushButton *Weather;
    QLineEdit *row;
    QLineEdit *col;
    QLabel *row_text;
    QLabel *col_text;
    QLabel *col_text_2;
    QLabel *row_text_2;
    QLineEdit *col_weather;
    QLineEdit *row_weather;
    QPushButton *Load;
    QLabel *weather_text;
    QPushButton *Save;
    QLineEdit *path;
    QLineEdit *pres;
    QLineEdit *temp;
    QLineEdit *dorection;
    QLineEdit *speed;
    QLabel *row_text_3;
    QLabel *row_text_4;
    QLabel *row_text_5;
    QLabel *row_text_6;
    QPushButton *setSize;
    QSpinBox *sizeSpin;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(769, 453);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        add = new QPushButton(centralwidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(420, 80, 91, 51));
        station = new QRadioButton(centralwidget);
        station->setObjectName(QString::fromUtf8("station"));
        station->setGeometry(QRect(420, 10, 141, 27));
        vane = new QRadioButton(centralwidget);
        vane->setObjectName(QString::fromUtf8("vane"));
        vane->setGeometry(QRect(420, 40, 131, 27));
        Delete_all = new QPushButton(centralwidget);
        Delete_all->setObjectName(QString::fromUtf8("Delete_all"));
        Delete_all->setGeometry(QRect(642, 359, 121, 41));
        Weather = new QPushButton(centralwidget);
        Weather->setObjectName(QString::fromUtf8("Weather"));
        Weather->setGeometry(QRect(420, 170, 91, 30));
        row = new QLineEdit(centralwidget);
        row->setObjectName(QString::fromUtf8("row"));
        row->setGeometry(QRect(600, 20, 51, 28));
        col = new QLineEdit(centralwidget);
        col->setObjectName(QString::fromUtf8("col"));
        col->setGeometry(QRect(700, 20, 51, 28));
        row_text = new QLabel(centralwidget);
        row_text->setObjectName(QString::fromUtf8("row_text"));
        row_text->setGeometry(QRect(570, 20, 31, 27));
        col_text = new QLabel(centralwidget);
        col_text->setObjectName(QString::fromUtf8("col_text"));
        col_text->setGeometry(QRect(670, 20, 31, 27));
        col_text_2 = new QLabel(centralwidget);
        col_text_2->setObjectName(QString::fromUtf8("col_text_2"));
        col_text_2->setGeometry(QRect(660, 170, 31, 27));
        row_text_2 = new QLabel(centralwidget);
        row_text_2->setObjectName(QString::fromUtf8("row_text_2"));
        row_text_2->setGeometry(QRect(570, 170, 31, 27));
        col_weather = new QLineEdit(centralwidget);
        col_weather->setObjectName(QString::fromUtf8("col_weather"));
        col_weather->setGeometry(QRect(690, 170, 51, 28));
        row_weather = new QLineEdit(centralwidget);
        row_weather->setObjectName(QString::fromUtf8("row_weather"));
        row_weather->setGeometry(QRect(600, 170, 51, 28));
        Load = new QPushButton(centralwidget);
        Load->setObjectName(QString::fromUtf8("Load"));
        Load->setGeometry(QRect(420, 260, 151, 30));
        QFont font;
        font.setPointSize(8);
        Load->setFont(font);
        weather_text = new QLabel(centralwidget);
        weather_text->setObjectName(QString::fromUtf8("weather_text"));
        weather_text->setGeometry(QRect(430, 210, 331, 41));
        Save = new QPushButton(centralwidget);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(610, 260, 151, 30));
        Save->setFont(font);
        path = new QLineEdit(centralwidget);
        path->setObjectName(QString::fromUtf8("path"));
        path->setGeometry(QRect(420, 300, 341, 31));
        pres = new QLineEdit(centralwidget);
        pres->setObjectName(QString::fromUtf8("pres"));
        pres->setGeometry(QRect(700, 60, 51, 28));
        temp = new QLineEdit(centralwidget);
        temp->setObjectName(QString::fromUtf8("temp"));
        temp->setGeometry(QRect(600, 60, 51, 28));
        dorection = new QLineEdit(centralwidget);
        dorection->setObjectName(QString::fromUtf8("dorection"));
        dorection->setGeometry(QRect(700, 100, 51, 28));
        speed = new QLineEdit(centralwidget);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(600, 100, 51, 28));
        row_text_3 = new QLabel(centralwidget);
        row_text_3->setObjectName(QString::fromUtf8("row_text_3"));
        row_text_3->setGeometry(QRect(560, 60, 41, 27));
        row_text_4 = new QLabel(centralwidget);
        row_text_4->setObjectName(QString::fromUtf8("row_text_4"));
        row_text_4->setGeometry(QRect(660, 60, 41, 27));
        row_text_5 = new QLabel(centralwidget);
        row_text_5->setObjectName(QString::fromUtf8("row_text_5"));
        row_text_5->setGeometry(QRect(570, 100, 31, 27));
        row_text_6 = new QLabel(centralwidget);
        row_text_6->setObjectName(QString::fromUtf8("row_text_6"));
        row_text_6->setGeometry(QRect(670, 100, 31, 27));
        setSize = new QPushButton(centralwidget);
        setSize->setObjectName(QString::fromUtf8("setSize"));
        setSize->setGeometry(QRect(10, 350, 181, 31));
        sizeSpin = new QSpinBox(centralwidget);
        sizeSpin->setObjectName(QString::fromUtf8("sizeSpin"));
        sizeSpin->setGeometry(QRect(200, 350, 48, 29));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 391, 321));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 769, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214/\n"
"\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        station->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\265\320\276\321\201\321\202\320\260\320\275\321\206\320\270\321\217", nullptr));
        vane->setText(QCoreApplication::translate("MainWindow", "\320\244\320\273\321\216\320\263\320\265\321\200", nullptr));
        Delete_all->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\321\221", nullptr));
        Weather->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\263\320\276\320\264\320\260", nullptr));
        row_text->setText(QCoreApplication::translate("MainWindow", "row", nullptr));
        col_text->setText(QCoreApplication::translate("MainWindow", "col", nullptr));
        col_text_2->setText(QCoreApplication::translate("MainWindow", "col", nullptr));
        row_text_2->setText(QCoreApplication::translate("MainWindow", "row", nullptr));
        Load->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        weather_text->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        Save->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        row_text_3->setText(QCoreApplication::translate("MainWindow", "temp", nullptr));
        row_text_4->setText(QCoreApplication::translate("MainWindow", "pres", nullptr));
        row_text_5->setText(QCoreApplication::translate("MainWindow", "WS", nullptr));
        row_text_6->setText(QCoreApplication::translate("MainWindow", "WD", nullptr));
        setSize->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \321\200\320\260\320\267\320\274\320\265\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
