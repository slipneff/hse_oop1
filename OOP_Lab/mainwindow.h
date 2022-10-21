#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Matrix.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum type{station,vane};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    type Type;
    Matrix data;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_add_clicked();

    void on_station_toggled();

    void on_vane_toggled();

    void on_Delete_all_clicked();

    void on_setSize_clicked();

    void on_Weather_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
