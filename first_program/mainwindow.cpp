#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnFechar_clicked()
{
    this->close();
}


void MainWindow::on_btn_calcular_clicked()
{
    double calculo;
    calculo=(ui->lineEditA->text().toDouble()+ui->lineEditB->text().toDouble())/2;
    ui->resultado->setText(QString::number(calculo));
}

