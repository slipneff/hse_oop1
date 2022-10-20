#include "mainwindow.h"
#include "ui_mainwindow.h"

enum choice{station,vane};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->row->setEnabled(0);
    ui->col->setEnabled(0);
    ui->temp->hide();
    ui->pres->hide();
    ui->speed->hide();
    ui->dorection->hide();
    ui->row_text_6->hide();
    ui->row_text_5->hide();
    ui->row_text_4->hide();
    ui->row_text_3->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_add_clicked()
{
    ui->textEdit->insertPlainText("||");
    for(int i=0;i<ui->sizeSpin->value();i++)
    {
        ui->textEdit->append("||");
    }
}


void MainWindow::on_station_toggled(bool checked)
{
    ui->row->setEnabled(1);
    ui->col->setEnabled(1);
    ui->temp->show();
    ui->pres->show();
    ui->speed->show();
    ui->dorection->show();
    ui->row_text_6->show();
    ui->row_text_5->show();
    ui->row_text_4->show();
    ui->row_text_3->show();
}

void MainWindow::on_vane_toggled(bool checked)
{
    ui->row->setEnabled(1);
    ui->col->setEnabled(1);
    ui->temp->hide();
    ui->pres->hide();
    ui->speed->show();
    ui->dorection->show();
    ui->row_text_6->show();
    ui->row_text_5->show();
    ui->row_text_4->hide();
    ui->row_text_3->hide();
}


void MainWindow::on_Delete_all_clicked()
{
    ui->textEdit->clear();
}

