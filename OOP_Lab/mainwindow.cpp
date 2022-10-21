#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Station.cpp"
#include "Vane.cpp"
#include "Matrix.cpp"
#pragma once



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
    if(Type==station){
        data.setItems(Station(ui->temp->text().toInt(),ui->pres->text().toInt(),ui->speed->text().toInt(),ui->dorection->text().toInt()));
    } else if(Type==vane){
        data.setItems(Vane(ui->speed->text().toInt(),ui->dorection->text().toInt()));
    }
    ui->textEdit->clear();
    data.printMatrix(ui);
}


void MainWindow::on_station_toggled()
{
    Type=station;
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

void MainWindow::on_vane_toggled()
{
    Type=vane;
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
    data.~Matrix();
}


void MainWindow::on_setSize_clicked()
{
      data.setSize(ui->sizeSpin->value());
      ui->textEdit->insertPlainText("123456789"+ui->sizeSpin->value());
}


void MainWindow::on_Weather_clicked()
{
    ui->weather_text->setText(QString::fromStdString(data.interp(ui->col_weather->text().toDouble(),ui->row_weather->text().toDouble()).printStation()));
}

